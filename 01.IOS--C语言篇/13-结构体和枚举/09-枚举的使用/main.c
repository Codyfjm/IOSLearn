//
//  main.c
//  09-枚举的使用
//
//  Created by 冯俊铭 on 18/1/21.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 使用枚举创建1个数据类型:取值限定的情况下使用
 语法格式：
 enum 新类型名称
 {
 
 };
 
 声明枚举类型的变量
 语法格式：
    enum 枚举类型名称 变量名;
 
 3.枚举的使用规范
 枚举类型的名称命名规范：首字母大写，第1个单词的首字母大写；
 枚举值的命名规范：枚举值的名称都以枚举类型来开头
 
 
 
 */

#include <stdio.h>

enum Direction
{
    East,
    West,
    South,
    North
};

int main(int argc, const char * argv[]) {
    
    enum Direction dir = South;
    
    //有多大
    int size = sizeof(dir);
    printf("size = %d\n",size);
    
    printf("%d\n",dir);
    
    
}
