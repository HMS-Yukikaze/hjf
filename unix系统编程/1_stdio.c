#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#if 0
0:标准输入
1：标准输出
2：标准出错
#endif 
int main()
{
    printf("STDIN:%d\n",STDIN_FILENO);
    printf("STDOUT:%d\n",STDOUT_FILENO);
    printf("STDERR:%d\n",STDERR_FILENO);
    return 0;
}
