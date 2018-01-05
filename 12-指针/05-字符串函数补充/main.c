/*
 
 1.fputs(); f---> file
 
作用：将字符串数据 输出到 指定的流中
 
 流：标准输出流 －－>控制台
    文件流－－>磁盘上的文件
 
 2.fgets函数
 
    作用：从指定的流中读取字符串
        流：
    标准输入流－－》控制台
    文件流
 
 
 
 
 
 
 
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    
    
    char input[10];
    
    printf("请输入：\n");
    fgets(input, 10, stdin);
    size_t len = strlen(input);
    if (input[len-1] == '\n') {
        input[len-1] = '\0';
    }
    
    printf("你输入的是：%s\n",input);
    
    
//    
//    char *name = "黑马程序猿";
//    
//    //1.fopen
//    //"w" 写入 "r" 读取 "a" 追加
//    FILE* pFile = fopen("/Users/codyfjm/Desktop/abc.txt", "w");
//    
////    fputs(name, stdout);
//    
//    //2.fputs
//    fputs(name, pFile);
//    
//    //fclose
//    fclose(pFile);
}
