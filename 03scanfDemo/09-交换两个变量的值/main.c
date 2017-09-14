//
//  main.c
//  06-交换两个变量的值
//
//  Created by 冯俊铭 on 17/9/14.
//  Copyright © 2017年 cody. All rights reserved.
//

/**
 
 1.声明第三方临时变量来交换。转圈
 int temp = num1;
 num1 = num2;
 num2 = temp;
 
 
 2.两数相加再相减
 num1 = num1 + num2;//300
 num2 = num1 - num2;//100
 num1 = num1 - num2;//200
 
 3.使用异或
 num1 = num1 ^ num2;
 num2 = num1 ^ num2;
 num1 = num1 ^ num2;
 
 **/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1 = 100;
    int num2 = 200;
    
    
    //    int temp = num1;
    //    num1 = num2;
    //    num2 = temp;
    
    
    //    num1 = num1 + num2;//300
    //    num2 = num1 - num2;//100
    //    num1 = num1 - num2;//200
    
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    
    printf("num1 = %d num2 = %d \n",num1,num2);
}
