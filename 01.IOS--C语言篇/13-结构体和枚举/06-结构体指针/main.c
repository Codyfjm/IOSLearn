//
//  main.c
//  06-结构体指针
//
//  Created by 冯俊铭 on 18/1/17.
//  Copyright © 2018年 cody. All rights reserved.
//
/*
 结构体指针的声明
 1)格式
    struct 结构体类型名称* 指针名
 
 */

#include <stdio.h>

struct Student
{
    char *name;
    int age;
    int score;
};

int main(int argc, const char * argv[]) {
    struct Student xiaoming = {"小明",18,97};
    
    struct Student *stu = &xiaoming;
//    (*stu).name = "jack";
//    (*stu).age = 19;
//    (*stu).score = 89;
    stu->name = "jack";
    stu->age = 10;
    stu->score = 100;
    
    printf("%s %d %d\n",
           xiaoming.name,
           xiaoming.age,
           xiaoming.score);
}
