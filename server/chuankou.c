/*==============================================================
*   文件名称：chuankou.c
*   创建日期：2022年11月25日
================================================================*/
#include "net.h"

int server_Init(char *, int ); // 服务器初始化
char receive_loop(int ); // 循环接收控制指令
int check_in(char ); // 判断指令内容

int main()
{	
	// 服务器初始化
	int connfd = server_Init("192.168.1.1",10004);
	if(connfd < 0)
	{
		printf("server_Init failed......\n");
		return -1;
	}
	printf("server_Init success......\n");

	// 串口初始化
	int serial_fd = serial_init("/dev/ttyATH0",115200);

	// 指令初始化
	unsigned char buf0[5] = {0xff,0x00,0x00,0x00,0xff}; // 停止运行
	unsigned char buf1[5] = {0xff,0x00,0x01,0x00,0xff}; // 前进
	unsigned char buf2[5] = {0xff,0x00,0x02,0x00,0xff}; // 后退
	unsigned char buf3[5] = {0xff,0x00,0x03,0x00,0xff}; // 左转
	unsigned char buf4[5] = {0xff,0x00,0x04,0x00,0xff}; // 右转

	while(1)
	{
		// 接收控制指令
		//char flg = receive_loop(connfd);
		char buf[16] ={0}; 
		int ret = read(connfd,buf,sizeof(buf));
		if(ret <= 0)
		{
			return -1;	
		}
		printf("now stat: %s\n",buf);

		// 判断指令内容,发送指令
		if(strcmp(buf,"0") == 0)
		{
			serial_send(serial_fd,buf0,5);
		}
		if(strcmp(buf,"1") == 0)
		{
			serial_send(serial_fd,buf1,5);
		}
		if(strcmp(buf,"2") == 0)
		{
			serial_send(serial_fd,buf2,5);
		}
		if(strcmp(buf,"3") == 0)
		{
			serial_send(serial_fd,buf3,5);
		}
		if(strcmp(buf,"4") == 0)
		{
			serial_send(serial_fd,buf4,5);
		}
	}	

	return 0;
}

int server_Init(char *ip, int port)
{
        //1.创建套接字
        //                   地址族   套接字的类型
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

        //      4.连接, 成功返回一个通信套接字
        int connfd = accept(sockfd, NULL, NULL);
        if(connfd < 0){
                perror("accept");
                return -1;
        }

        return connfd;
}
