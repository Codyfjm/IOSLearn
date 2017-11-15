//
//  main.c
//  10-二分查找法
//
//  Created by 冯俊铭 on 17/11/16.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    

    //1000
    int arr[] = {10,45,67,89,90,99,122,456,789,999};
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    int min = 0;
    int max = len - 1;
    int mid = len /2;
    
    int key = 99;
    
    while (key != arr[mid]) {
        
        if (arr[mid] > key) {
            //说明在左边
            max = mid - 1;
        }
        else if (arr[mid] < key){
            //说明在右边
            min = mid + 1;
        }
         mid = (min + max) / 2;
    }
    printf("mid = %d\n",mid);
}
