//
//  main.c
//  06-字符串
//
//  Created by 冯俊铭 on 17/11/30.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    char chs[4]={'a'};
    
//    chs[0] = 'q';//字符串数组的元素不能存储中文
//    chs[1] = 'b';
//    chs[2] = 'a';
//    chs[3] = 'z';
    
//    for (int i=0; i<sizeof(chs); i++) {
//        printf("%c\t",chs[i]);
//    }
//    printf("\n");
    
    
    
    
    //系统自动的会将这个字符串中的每个字符串存储到字符数组中，并自动追加1个'\0'
    //char name[] = {'j','a','c','k'};
    //char name[] = {"jack"};
    
//    char name[] = "中国";//1个中文占据3个字符
//    for (int i=0; i<5; i++) {
//        printf("%c",name[i]);
//    }
    
    
//    int len = sizeof(name);
//    printf("len=%d\n",len);
    
    //%s的原理：从给定的数组的地址开始 1个字节1个字节输出，直到遇到'\0'为止
//    char name[] = "jack";
//    printf("%s\n",name);
    
    
//    char str1[] = "jack";
//    char str2[4] = "rose";
//    
//    printf("%s\n",str2);//rosejack
    
    
//    char str[10];
//    printf("请问你的名字叫什么：");
//    scanf("%s",str);
//    printf("欢迎你：%s\n",str);
    
    char name[100] = "jack";
    int len = 0;
    while (name[len]!='\0') {
        len++;
    }
    
    printf("len = %d\n",len);
    
}
