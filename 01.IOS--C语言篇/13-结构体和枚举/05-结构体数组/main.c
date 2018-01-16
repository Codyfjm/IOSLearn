//
//  main.c
//  05-结构体数组
//
//  Created by 冯俊铭 on 18/1/17.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 结构体数组
    声明1个结构体数组
    元素类型 结构体名称 数组名称[数组长度]
    struct Student students[5]
 
 结构体数组初始化
 结构体数组长度计算
 
 */


#include <stdio.h>

struct Student
{
    char *name;
    int age;
    int score;
};

int main(int argc, const char * argv[]) {
    
//    struct Student s1 = {"小明",16,56};
//    struct Student s2 = {"敏敏",17,86};
//    struct Student s3 = {"光亮",19,76};
//    struct Student s4 = {"乐乐",21,16};
//    struct Student s5 = {"百合",34,83};
//    
//    struct Student students[5];
//    students[0] = s1;
//    students[1] = s2;
//    students[2] = s3;
//    students[3] = s4;
//    students[4] = s5;
    
//    struct Student students[5];
//    students[0] = (struct Student){"小明",16,56};
//    students[1] = (struct Student){"敏敏",17,86};
//    students[2] = (struct Student){"光亮",19,76};
//    students[3] = (struct Student){"乐乐",21,16};
//    students[4] = (struct Student){"百合",34,83};

    
    struct Student students[5] =
    {
        {"小明",16,56},
        {"敏敏",17,86},
        {"光亮",19,76},
        {"乐乐",21,16},
        {"百合",34,83}
    
    };
    
    int len = sizeof(students)/sizeof(struct Student);
    printf("len = %d\n",len);
    
    
    for (int i=0; i<5; i++) {
        printf("姓名:%s 年龄:%d 成绩:%d\n",
               students[i].name,
               students[i].age,
               students[i].score);
    }
    
    
   }
