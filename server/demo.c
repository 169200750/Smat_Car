/*------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

#include "camera.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>


int main()
{
	unsigned int w,h;
	w = 640;
	h = 480;
	//摄像头初始化，传参：1.摄像头设备路径 2.图像采集宽度 3.图像采集高度
	int camera_fd = camera_init("/dev/video0",w,h);
	//摄像头启动
	camera_start(camera_fd);
	
	int fd = open("./111.jpg",O_WRONLY|O_CREAT,0664);
	if(fd < 0)
	{
		perror("open");
		return -1;
	}

	char pic_buf[1024*1024] = {0};

	unsigned int pic_size,index;
	//摄像头出队，传参：1.摄像头设备文件描述符 2.图像存储缓冲区首地址 3.获取图像大小的指针 4.获取图像出队位置的指针
	camera_dqbuf(camera_fd,pic_buf,&pic_size,&index);

	write(fd,pic_buf,pic_size);

	//摄像头入对
	camera_eqbuf(camera_fd,index);

	//摄像头暂停
	camera_stop(camera_fd);
	//摄像头退出
	camera_exit(camera_fd);

	close(fd);

}

