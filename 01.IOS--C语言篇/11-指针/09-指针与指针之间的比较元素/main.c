//
//  main.c
//  09-指针与指针之间的比较元素
//
//  Created by 冯俊铭 on 17/12/19.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    
    int num1 = 10;
    int num2 = 20;
    
    int* p1 = &num1;
    int* p2 = &num2;
    
    int res = p2 > p1;
    
    printf("res = %d\n",res);
    
}
