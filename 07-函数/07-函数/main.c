//
//  main.c
//  07-函数
//
//  Created by 冯俊铭 on 17/10/10.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int userName = 0,password = 0;
loop: //取标签名下面那一句代码不能是声明变量
//    int userName = 0,password = 0;
    printf("用户名：");
    scanf("%d",&userName);
    printf("密 码：");
    scanf("%d",&password);
    
    //如果错误
    if(userName!=123456 || password!=888888){
        goto loop;
    }
    
   
//loop:
//    printf("我爱船只1\n");
//    printf("我爱船只2\n");
//    printf("我爱船只3\n");
//    printf("我爱船只4\n");
//    printf("我爱船只5\n");
//    printf("我爱船只6\n");
//    printf("我爱船只7\n");
//    printf("我爱船只8\n");
//    goto loop;
}
