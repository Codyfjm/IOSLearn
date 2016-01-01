//
//  main.c
//  03-二维数组的基本使用
//
//  Created by 冯俊铭 on 17/11/24.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    //二维数组的地址＝＝二维数组名＝＝二维数组的第0行的地址＝＝二维数组的第0行的第0个元素的地址＝＝二维数组的低字节的地址
    
    int a[3][2] = {10,20,30,40,50,60};
    
    //二位数组的长度  = 二维数组占用的总字节数／每一个元占用的字节数
    //              = rows * cols
    int len = sizeof(a)/sizeof(int);
    printf("len = %d\n",len);//6
    
    //求行数 ＝ 二维数组占用的总字节数 ／ 第一行占用的字节数
    int rows = sizeof(a)/sizeof(a[0]);
    printf("rows = %d\n",rows);//3
    
    //求列数 ＝ 第一行占用的字节数／每一个元占用的字节数
    int cols = sizeof(a[0])/sizeof(int);
    printf("cols = %d\n",cols);//2
    
    
//    printf("%p\n",&a[0][0]);
//    printf("%p\n",&a[0]);
//    printf("%p\n",a);
}
