//
//  main.c
//  03-多文件开发
//
//  Created by 冯俊铭 on 17/10/17.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int getSum(int num1,int num2);
int getCha(int num1,int num2);
int getJi(int num1,int num2);
int getShang(int num1,int num2);
int getMo(int num1,int num2);


int main(int argc, const char * argv[]) {
    
    int sum = getSum(10,20);
    printf("sum = %d\n",sum);
    
    int cha =  getCha(10,20);
    printf("cha = %d\n",cha);
    
    int ji = getJi(10,20);
    printf("ji = %d\n",ji);
    
    int shang = getShang(10, 20);
    printf("shang = %d\n",shang);
    
    int mo = getMo(10,20);
    printf("mo = %d\n",mo);
}
