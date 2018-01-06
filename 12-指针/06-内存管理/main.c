//
//  main.c
//  06-内存管理
//
//  Created by 冯俊铭 on 18/1/5.
//  Copyright © 2018年 cody. All rights reserved.
//



/*
 1.内存的五大区域
 栈：局部变量
 堆：堆区中的字节允许程序猿手动的申请
 bss段：未初始化的全局变量、静态变量
 数据段：已经初始化的全局变量、静态变量 和 常量数据段
 代码段：存储代码的
 
 
 2,如何向堆区申请字节空间来使用
    1）我们在堆中申请的字节空间，我们不主动释放的话，系统不会释放，除非程序结束
    2）在堆中申请字节空间的步骤
        a，申请
        b，使用
        c，释放
    3）如何申请
        malloc()
        calloc()
        realloc()
 
        这三个函数和申请字节空间有关 #include <stdlib.h>
 
    4)malloc
        作用：向堆空间申请指定字节的空间来使用
        返回的是创建的空间的第一个的地址：void * 没有类型的指针（地址）
        在堆区申请的字节空间都是从低地址向高地址分配
        在堆中申请的字节有值，但是是垃圾值
        释放空间
 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
    int* p1 = malloc(120);
    
    if (p1) {
        //申请成功
        for (int i=0; i<30; i++) {
            p1[i] = i*10;
        }
        
        for (int i=0; i<30; i++) {
            printf("p1[%d]=%d\n",i,p1[i]);
        }
        free(p1);
    }
    
    
    
//    
//    int* p1 = malloc(24);//相当于向堆内存中创建1个长度为6的整型数组
//    
//    *p1 = 10;
//    *(p1+1) = 20;
//    *(p1+2) = 30;
//    *(p1+3) = 40;
//    *(p1+4) = 50;
//    *(p1+5) = 60;
//    
//    
//    for (int i = 0; i<6; i++) {
//        printf("%d\n",p1[i]);
//    }
    
//    int* p1 = malloc(4);
//    *p1 = 100;
    
}
