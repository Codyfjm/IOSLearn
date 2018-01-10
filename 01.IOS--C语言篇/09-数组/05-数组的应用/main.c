//
//  main.c
//  05-数组的应用
//
//  Created by 冯俊铭 on 17/11/13.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //找出整型数组中的最大值
    
    int arr[] = {1,21,21,3,54,64,5,57,123,4556,88,79,6,24,26,57,565,45};
    
//    int max = INT16_MIN;
    
//    int len = sizeof(arr)/sizeof(arr[0]);
//
//    for (int i=0; i<len; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    
//    printf("max = %d\n",max);
    
    
//    int sum = 0;
//    for (int i=0; i<len; i++) {
//        sum = sum + arr[i];
//    }
    
//    printf("sum = %d\n",sum);
    
    
    
    int key = 54;
    int len = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    for (int i=0; i<len; i++) {
        if (arr[i] == key) {
            flag = 1;
            printf("找到了，下标为%d\n",i+1);
            break;
        }
    }
    
    if (flag == 0) {
        printf("没找到\n");
    }
    
}
