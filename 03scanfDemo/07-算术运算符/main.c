//
//  main.c
//  07-算术运算符
//
//  Created by 冯俊铭 on 17/9/18.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //1.声明两个变量保存衣服的单价和裤子的单价。
    double kuZiPrice = 89.9;
    double yiFuPrice = 120.88;
    
    //2.声明两个变量保存衣服和裤子的数量
    int kuZiCount = 0;
    int yiFuCount = 0;
    
    //3.让用户输入裤子和衣服的数量
    printf("请输入裤子和衣服的数量使用空格分开：");
    scanf("%d%d",&kuZiCount,&yiFuCount);
    
    //计算总价
    //  衣服的单价 ＊ 衣服的数量 ＋ 裤子的单价 ＊ 裤子的数量
    double money = yiFuPrice * yiFuCount + kuZiPrice * kuZiCount;
    
    //计算折扣价
    double youHui = money * 0.88;
    
    //6.输出
    printf("总价格为：%.2lf，优惠价格为：%.2lf\n",money,youHui);
    
}
