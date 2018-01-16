//
//  main.c
//  04-结构体的基本使用下
//
//  Created by 冯俊铭 on 18/1/16.
//  Copyright © 2018年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   struct Student
    {
        char *name;
        int age;
        int score;
    };
    
    struct Student xiaomi;
    xiaomi.name = "xiaomi";
    xiaomi.age = 10;
    xiaomi.score = 90;
    
    struct Student xiaofang = {"xiaofang",23,88};
}
