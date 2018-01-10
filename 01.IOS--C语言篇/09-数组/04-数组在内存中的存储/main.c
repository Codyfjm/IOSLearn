//
//  main.c
//  04-数组在内存中的存储
//
//  Created by 冯俊铭 on 17/11/13.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    
    int arr[] = {1,21,21,3,54,64,5,57,123,4556,88,79,6,24,26,57,565,45};
    
//    int len = sizeof(arr) / 4;
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("len = %d\n",len);
    
    for (int i=0; i<len; i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    
}
