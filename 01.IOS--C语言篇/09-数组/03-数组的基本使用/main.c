//
//  main.c
//  03-数组的基本使用
//
//  Created by 冯俊铭 on 17/10/25.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>
//#define LEN 10

int main(int argc, const char * argv[]) {
    
    
//    int arr[3] = {10,20,30};
    
    
//    int arr2[LEN];
//    arr[0] = 10;
//    arr[1] = 20;
//    arr[2] = 30;
//    
//    for (int i=0; i<3; i++) {
//        printf("%d\n",arr[i]);
//    }
//
    
    
    //数组的地址＝＝数组名＝＝数组中的低字节地址＝＝数组中下标为0的元素的地址
    //＝＝数组中下标为0的元素的低字节的地址
    
    int arr[3];
    
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    
    printf("数组的地址是下标为0的元素的地址：%p\n",&arr[0]);
    
    printf("arr = %p\n",arr);
    
    return 0;
}
