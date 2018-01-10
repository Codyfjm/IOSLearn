//
//  main.c
//  09-冒泡排序
//
//  Created by 冯俊铭 on 17/11/16.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    int arr[] = {12,1,3,24,346,4,564,7,547,46,25,87,88,46,8,100};
    
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<len-1; i++) {
        for (int j = 0; j < len -1-i; j++) {
            if (arr[j]<arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for (int i=0; i<len; i++) {
        printf("%d\n",arr[i]);
    }

}
