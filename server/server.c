/*===============================================================
 *   Copyright (C) 2022 All rights reserved.
 *   
 *   文件名称：06_tcpSocket.c
 *   创 建 者：JiangCX
 *   创建日期：2022年11月23日
 *   描    述：
 *
 *   更新日志：
 *
 ================================================================*/

#include "net.h"
#include "camera.h"
int tcp_init(char *ip, int port);

int main(int argc, char *argv[])
{
	//服务器初始化
	int connfd = tcp_init("192.168.1.1", 10005);
	if(connfd < 0){
		printf("tcp_init failed.....\n");
		return -1;
	}
	printf("accept success......\n");
	
	
	unsigned int w,h;
	w=640;
	h=480;
	//摄像头初始化
	int camera_fd=camera_init("/dev/video0",w,h);
	//摄像头启动
	camera_start(camera_fd);
	

	//char star[16]={0};
	while(1){
		char star[16]={0};
		int fdd=read(connfd,star,sizeof(star));
		if(fdd<=0){
			perror("read");
			return -1;
		}
		if(strcmp(star,"re_st")==0){
				camera_init("/dev/video0",w,h);
				camera_start(camera_fd);
			}
		else if(strcmp(star,"star")==0){
			char pic_buf[1024*1024]={0};
			unsigned int pic_size,index;
	
		//摄像头出队，传参：1.摄像头设备文件描述符 2.图像存储缓冲区首地址 3.    获取图像大小的指针 4.获取图像出队位置的指针
		//	camera_dqbuf(camera_fd,pic_buf,&pic_size,&index);
				
			char len_buf[10]={0};
        		//发送文件大小
			camera_dqbuf(camera_fd,pic_buf,&pic_size,&index);
			sprintf(len_buf,"%d",pic_size);
			
       	 		write(connfd, len_buf, 10);
        		//发送文件内
       	 		write(connfd, pic_buf, pic_size);
			camera_eqbuf(camera_fd,index);
			
		}
		else if(strcmp(star,"stop")==0){
			camera_stop(camera_fd);
			camera_exit(camera_fd);
		}
		else if(strcmp(star,"quit")==0) break;
	}	
	//camera_exit(camera_fd);
	close(connfd);
	//close(fd);
	return 0;
}
int tcp_init(char *ip, int port)
{
	//1.创建套接字
	//  	             地址族   套接字的类型
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd < 0){
		perror("socket");
		return -1;
	}
	printf("socket success.......\n");
	//2.绑定地址和端口
	// 端口重用
	int opt = 1;
	setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
	struct sockaddr_in myaddr;
	myaddr.sin_family = AF_INET;
	myaddr.sin_port = htons(port);
	myaddr.sin_addr.s_addr = inet_addr(ip);

	if(0 > bind(sockfd, (struct sockaddr *)&myaddr, sizeof(myaddr))){
		perror("bind");
		return -1;
	}
	printf("bind success.....\n");

	//3.设置监听套接字
	if(0 > listen(sockfd, 4)){
		perror("listen");
		return -1;
	}
	printf("listen success......\n");

	//	4.连接, 成功返回一个通信套接字
	int connfd = accept(sockfd, NULL, NULL);
	if(connfd < 0){
		perror("accept");
		return -1;
	}
	
	return connfd;
}
