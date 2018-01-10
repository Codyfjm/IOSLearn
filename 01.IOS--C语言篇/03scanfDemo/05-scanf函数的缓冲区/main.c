//
//  main.c
//  05-scanf函数的缓冲区
//
//  Created by 冯俊铭 on 17/9/14.
//  Copyright © 2017年 cody. All rights reserved.
//

/**
 
    如果要拿的数据的类型是字符型，不会忽略任何数据
 
    解决方案：rewind(stdin);//这句代码的作用将缓冲区中的数据全部清空
 **/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //1.让用户输入1个整数
    int num = 0;
    printf("请输入第1个数：");
    scanf("%d",&num);
    printf("num = %d\n",num);
    
    //2.让用户输入1个字符。
    char ch = 'a';
    printf("请输入1个字符：");
    
    //在执行这句话之前，缓冲区中没有任何数据
    
    rewind(stdin);//这句代码的作用将缓冲区中的数据全部清空
    
    scanf("%c",&ch);
    printf("ch = %c \n",ch);
    
   
//    int num = 0;
//    printf("请输入第1个数：");
//    scanf("%d",&num);
//    printf("num = %d\n",num);
//    
//    
//    int num1 = 0;
//    printf("请输入第2个数：");
//    scanf("%d",&num1);
//    printf("num = %d\n",num1);

}
