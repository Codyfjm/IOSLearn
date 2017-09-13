//
//  main.c
//  04-scanf函数的其它用法
//
//  Created by 冯俊铭 on 17/9/13.
//  Copyright © 2017年 cody. All rights reserved.
//
/**

 scanf函数一次输入多个数据，只能是数（整型和浮点型）如果是char混合输入，就会出错
 
 **/


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    //让用户输入班级人数和男生人数平均分
    
    int num = 0, boyNum = 0;
    float avg = 0.0f;
    char ch = 'a';
    
    
    //提示输入
    printf("请输入班级人数、男孩数、平均分：");
    scanf("%d,%d,%c",&num,&boyNum,&ch);
    
    //输出
    printf("班级人数为：%d 男孩子的数量为%d 平均分为%.2f \n",num,boyNum,avg);
    
//    int num1 = 0,num2 = 0;
//    printf("请输入两个数据：");
//    scanf("%d%d",&num1,&num2);
//    printf("num1 = %d num2 = %d\n",num1,num2);
    
    
    return 0;
}
