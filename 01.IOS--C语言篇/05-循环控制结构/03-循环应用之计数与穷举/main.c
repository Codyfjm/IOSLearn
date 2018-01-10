//
//  main.c
//  03-循环应用之计数与穷举
//
//  Created by 冯俊铭 on 17/9/25.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int zhangHao = 0,miMa = 0;
    
    int times = 0;
    
    while (zhangHao != 123456 || miMa != 888888) {
        printf("请输入帐号：");
        scanf("%d",&zhangHao);
        printf("请输入密码：");
        scanf("%d",&miMa);
        times++;
    }
    
    printf("登录成功,你一共尝试了%d次\n",times);

}
