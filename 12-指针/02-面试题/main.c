//
//  main.c
//  02-面试题
//
//  Created by 冯俊铭 on 17/12/27.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
     求其中e出现的次数
     
     思路：
     1.声明1个整型的变量计数
     2.便利每一个字符，判断这个字符如果是“e”，计数器++
     
     */
    
    char *str = "dajdpoakd[alpdlwa[ldp[osajdjsakldjsa;dkasdkl[pwep[iejfrjedpogkop";
    
    int count = 0;
    
    int i = 0;
    
//    while (*(str+i) != '\0') {
//        
//        if (*(str+i)=='d') {
//            count++;
//        }
//        i++;
//    }
    
    while (str[i] != '\0') {//str[i] == *(str+i)
        
        if (str[i]=='d') {
            count++;
        }
        i++;
    }
    
    printf("count = %d\n",count);
    
    
    
}
