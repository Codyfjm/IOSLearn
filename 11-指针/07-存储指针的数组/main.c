//
//  main.c
//  07-存储指针的数组
//
//  Created by 冯俊铭 on 17/12/17.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    
    int* p1 = &num1;
    int* p2 = &num2;
    int* p3 = &num3;
    
    int* arr[3] = {p1,p2,p3};
    
    for (int i=0; i<3; i++) {
        printf("arr[%d] = %p\n",i,arr[i]);
    }
}
