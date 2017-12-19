//
//  main.c
//  01-指针和字符串
//
//  Created by 冯俊铭 on 17/12/19.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //1.指针与字符串
    
//    char ch = 'a';
//    
//    char* p1 = &ch;
//    
//    *p1 = 'b';
//    
//    printf("ch = %c\n",ch);
    
    //2.指针与字符串数组
    
    char chs[] = {'a','b','c','d'};
    
    char* p1 = chs;
    
    *p1 = 'x';
    
    for (int i=0; i<4; i++) {
        printf("%c\n",*(p1+i));
    }
    
    //4.内存的五大区域
    /*
     1)内存中分为五块区域
     a。栈
     是专门用来存储局部变量的，所有的局部变量都是声明在栈区域中的
     b。堆
     允许程序猿手动的从堆申请空间来使用
     程序员自己申请指定字节数的空间
     
     c。BBS段
     是用来存储未初始化的全局变量和静态变量
     声明1个全局变量，如果我们没有初始化
     在程序运行的最开始时候，这个全局变量是没有初始化的，存储在bbs段
     
     d.数据段／常量区
     用来存储意境初始化的全局变量、静态变量，还有常量数据
     e。代码段
     用来存储程序的代码／指令
     
     
     */
    
}
