/*
 
 1.fputs(); f---> file
 
作用：将字符串数据 输出到 指定的流中
 
 流：标准输出流 －－>控制台
    文件流－－>磁盘上的文件
 
 
 
 
 
 
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char *name = "黑马程序猿";
    
    
    //"w" 写入 "r" 读取 "a" 追加
    FILE* pFile = fopen("/Users/codyfjm/Desktop/abc.txt", "w");
    
//    fputs(name, stdout);
    
    fputs(name, pFile);
    
    fclose(pFile);
}
