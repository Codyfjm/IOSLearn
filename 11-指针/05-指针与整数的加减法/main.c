/*
 指针＋1:在这个指针地址的基础上加1个单位变量占用的字节书
 
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1 = 10;
    int num2 = 20;
    
    int* p1 = &num2;
    
    int* p2 = p1 + 1;
    
    printf("p1 = %p\n",p1);//p1 = 0x7fff5fbff7c8
    printf("p2 = %p\n",p2);//p2 = 0x7fff5fbff7cc
    
    printf("*p2 = %d\n",*p2);
}


