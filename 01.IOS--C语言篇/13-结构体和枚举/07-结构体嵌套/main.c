//
//  main.c
//  07-结构体嵌套
//
//  Created by 冯俊铭 on 18/1/18.
//  Copyright © 2018年 cody. All rights reserved.
//

#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Person
{
    char *name;
    int age;
    double money;
    struct Date birthday;
};

int main(int argc, const char * argv[]) {
    struct Person xiaoming = {"小明",18,5.6,{1999,12,25}};
    printf("信息:%s-----%d---%lf------%d-----%d-------%d\n",
           xiaoming.name,
           xiaoming.age,
           xiaoming.money,
           xiaoming.birthday.year,
           xiaoming.birthday.month,
           xiaoming.birthday.day);
}
