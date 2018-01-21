//
//  main.c
//  typedef
//
//  Created by 冯俊铭 on 18/1/21.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 typedef ：为一个已经存在的数据类型取1个别名
            如果我们想使用这个类型，直接使用这个别名就可以了
 
 语法格式：
 typedef 已经存在的数据类型 别名;
 
 */

#include <stdio.h>

//struct Student
//{
//    char *name;
//    int age;
//    int score;
//};
//
//typedef struct Student Student;


typedef struct {
    char *name;
    int age;
    int score;
} Student;

int main(int argc, const char * argv[]) {
    
    
    Student s1;
    
    
//    typedef int cody;
//    
//    cody num = 4;
//    
//    printf("%d\n",num);
}
