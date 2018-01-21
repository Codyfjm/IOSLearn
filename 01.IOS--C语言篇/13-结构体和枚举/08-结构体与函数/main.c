//
//  main.c
//  08-结构体与函数
//
//  Created by 冯俊铭 on 18/1/19.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 1.结构体作为函数的参数：是值传递，而不是地址传递
 如果你就是希望函数的内部可以修改实参结构体变量的值，那么就是要指针
 
 
 2.结构体作为函数的返回值:可以返回结构体的值，但是无法返回指针的地址
 
 
 */

#include <stdio.h>

struct Student
{
    char *name;
    int age;
    int score;
};

void verifyScore(struct Student stu)
{
    if (stu.score>=60) {
        printf("恭喜%s你及格了。\n",stu.name);
    }else{
        printf("不好意思%s你不及格了。\n",stu.name);
    }
}

struct Student getStudent()
{
    struct Student s1 = {"小明",17,54};
    return s1;
}



int main(int argc, const char * argv[]) {
    
    struct Student s1 = getStudent();
    printf("%s---%d---%d\n",s1.name,s1.age,s1.score);
    
//    struct Student s1 = {"小明",17,54};
//    verifyScore(s1);
}
