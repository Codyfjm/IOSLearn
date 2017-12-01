//
//  main.c
//  08-字符串的常用函数
//
//  Created by 冯俊铭 on 17/12/2.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
   
//    char name[]="jack";
//    puts(name);
    
    
//    char name[10];
//    
//    printf("请输入你的姓名：");
//    
//    gets(name);
//    
//    puts(name);
    
    
//    char name[] = "jack";
//    unsigned long len = strlen(name);
//    
//    printf("len=%lu\n",len);
    
    
//    char name1[] = "rose";
//    char name2[] = "rose";
//    
//    int res = strcmp(name1, name2);
//    printf("res = %d\n",res);//0 表示两个字符串相同
    
    
//    char name1[] = "jack";
//    char name2[] = "cody";
//    
//    strcpy(name1, name2);
//    printf("name1 = %s\n",name1);
    
    
    char name1[10] = "jack";
    char name2[10] = "cody";
    
    strcat(name1, name2);
    puts(name1);
    
    
    
    
}
