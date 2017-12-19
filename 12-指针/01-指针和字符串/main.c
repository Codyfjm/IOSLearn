//
//  main.c
//  01-指针和字符串
//
//  Created by 冯俊铭 on 17/12/19.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //1.指针与字符串
    
//    char ch = 'a';
//    
//    char* p1 = &ch;
//    
//    *p1 = 'b';
//    
//    printf("ch = %c\n",ch);
    
    //2.指针与字符串数组
    
    char chs[] = {'a','b','c','d'};
    
    char* p1 = chs;
    
    *p1 = 'x';
    
    for (int i=0; i<4; i++) {
        printf("%c\n",*(p1+i));
    }
}
