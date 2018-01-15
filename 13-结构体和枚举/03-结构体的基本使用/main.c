//
//  main.c
//  03-结构体的基本使用
//
//  Created by 冯俊铭 on 18/1/15.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 使用结构体来创建新的数据类型
    1)如何使用结构体来创建新的数据类型
    struct 新类型名称
    {
        数据类型 小变量名称
    };
 
 声明结构体类型的变量
    struct 新类型名称 变量名;
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct Student
    {
        char *name;
        int age;
        int score;
        float height;
    };
    
    struct Student stu;//代表一个学生（对象）
}
