//
//  main.c
//  06-数组与函数
//
//  Created by 冯俊铭 on 17/11/15.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>


//传输数组以及传递数组的长度，因为形参传递的只是数组的地址（8位），并非真正的长度
void testArray(int arr[20],int len)
{
    for (int i = 0; i<len; i++) {
        printf("%d\n",arr[i]);
    }
}

void test3(int arr[20],int len)
{
    for (int i = 0; i<len; i++) {
        arr[i] = 100;
    }
}

int main(int argc, const char * argv[]) {
    int shuZu[] = {110,20,55};
    
    int len = sizeof(shuZu) / sizeof(shuZu[0]);
    
//    testArray(shuZu, len);
    
    test3(shuZu, len);
    
    for (int i = 0; i<len; i++) {
        printf("%d\n",shuZu[i]);
    }
}
