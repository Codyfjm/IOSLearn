//
//  main.c
//  02-作业讲解
//
//  Created by 冯俊铭 on 17/9/20.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int days = 0 ;
    printf("亲，请输入天数：");
    scanf("%d",&days);
    
    int week = days / 7;
    int day = days % 7;
    
    printf("%d天有%d周零%d天\n",days,week,day);
}
