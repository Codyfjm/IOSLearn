//
//  main.c
//  13-结构体和枚举
//
//  Created by 冯俊铭 on 18/1/13.
//  Copyright © 2018年 cody. All rights reserved.
//


/*
 
 1，指针作为函数的参数
 1)效果
 在函数的内部可以通过这个参数指针去修改实参变量的值
 2)当函数的返回值有多个的时候
 3)
 
 2，指针作为函数的返回值
 1)指针可以作为函数的返回值
 但是不能返回局部变量的地址,而不是不能返回局部变量的值
 
 2)如果你就是返回1个指针，那么你要保证这个指针指向的空间在函数结束以后仍然存在
 这个时候就可以将空间申请在堆区
 调用着使用以后要记得free
 
 
 */


#include <stdio.h>
#include <stdlib.h>

void test(const int* arr,int len){
    
}

int* test1(){
    
//    int arr[4] = {10,12,34,98};
//    return arr;
    
    int* arr = calloc(3, sizeof(int));
    *arr = 10;
    *(arr+1) = 20;
    *(arr+2) = 30;
    return  arr;
}


int main(int argc, const char * argv[]) {
    
    //    int arr[4] = {10,12,34,98};
    //    test(arr,4);
    
    int* arr = test1();
    for (int i=0; i<4; i++) {
        printf("%d\n",arr[i]);
    }
    
    free(arr);
}
