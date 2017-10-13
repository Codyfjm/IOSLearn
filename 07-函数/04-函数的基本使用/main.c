//
//  main.c
//  04-函数的基本使用
//
//  Created by 冯俊铭 on 17/10/12.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

/**
 *这个函数是来显示游戏的标志的
 */
void showLogo(){
    printf("===========================\n");
    printf("=                         =\n");
    printf("=    不好玩的推箱子游戏      =\n");
    printf("=                         =\n");
    printf("===========================\n");
}

int main(int argc, const char * argv[]) {
    showLogo();
}
