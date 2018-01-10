//
//  main.c
//  05-二维数组与函数
//
//  Created by 冯俊铭 on 16/1/1.
//  Copyright © 2016年 cody. All rights reserved.
//

#include <stdio.h>


/**
 *  1.当二维数组作为函数的参数的时候，行数可以省略，但是列数必须保留
    2.并且实参二维数组和形参二维数组，实参的行数可以任意，但是列数必须要和形参的列数一致
 *
 *  @param arr
 */
void test1(int arr[3][2]){
    int len = sizeof(arr);
    printf(len);
}

void test2(int arr[][2]){
    
}

void test3(int rows,int cols,int arr[][cols]){
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, const char * argv[]) {
    int arr[3][2] = {10,20,30,40,50,60};
    
//    test1(arr);
//    test2(arr);
    test3(3,2,arr);
}
