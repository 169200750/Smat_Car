#ifndef __CAM_H__
#define	__CAM_H__

int camera_init(char *devname, int width, int height);
int camera_start(int fd);
int camera_dqbuf(int fd, void *buf, unsigned int *size, unsigned int *index);
int camera_eqbuf(int fd, unsigned int index);
int camera_stop(int fd);
int camera_exit(int fd);

#endif
