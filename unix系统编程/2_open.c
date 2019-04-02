#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main()
{
    int fd ;
    fd=open("./file_test",O_WRONLY|O_CREAT|O_TRUNC,0777);
    /*O_WRONLY:只读 O_CREAT：若无此文件则新建 O_TRUNC: 如果文件存在，并且以只写/读写方式打开，则清空文件全部内容 */
    if(fd<0)
    {   
        perror("open");
        return -1; 
    }   
    printf("fd:%d\n",fd);
    return 0;
}
#if  0
必选参数：
O_RDONLY    只读模式
O_WRONLY    只写模式
O_RDWR      读写模式

下面的常量是可选的：

O_APPEND       每次写操作都写入文件的末尾。

O_CREAT        如果指定文件不存在，则创建这个文件。如果存在则直接打开文件。如果创建新文件，而mode参数没有指定，则创建的文件权限不定。

O_EXCL       如果文件不存在，则返回错误。如果同时指定了O_CREAT，而文件已经存在，则会出错。 用此测试一个文件是否存在，如果不存在，则创建此文件。

O_TRUNC        如果文件存在，并且以只写/读写方式打开，则清空文件全部内容。

O_NOCTTY       如果路径名指向终端设备，不要把这个设备用作控制终端。

O_NONBLOCK     如果路径名指向 FIFO/块文件/字符文件，则把文件的打开和后继 I/O设置为非阻塞模式（nonblocking mode）。

下面三个标志也是可选的，他们是Single UNIX Specification中同步输入和输出选项的一部分：

O_DSYNC        等待物理 I/O 结束后再 write。在不影响读取新写入的数据的前提下，不等待文件属性更新。

O_RSYNC        read 等待所有写入同一区域的写操作完成后再进行。

O_SYNC         等待物理 I/O 结束后再 write，包括更新文件属性的 I/O。

#endif








