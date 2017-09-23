//
//  main.c
//  05-循环控制结构
//
//  Created by 冯俊铭 on 17/9/23.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    //1.定义变量保存ATM机器中的剩余金额
    int money = 28000;
    
    //2.接收用户输入取款金额
    
    int quKuan = 0;
    printf("请输入取款金额：");
    scanf("%d",&quKuan);
    
    //3.判断输入的取款金额
    //3.1不是100的倍数
    
    if (quKuan % 100 != 0) {
        printf("对不起，本机器不支持该面额\n");
    }
    
    //3.2大于等于剩余金额
    
    else if (quKuan > money){
        printf("余额不足\n");
    }
    
    //3.3取款
    
    else{
        
        //改变剩余金额
        money = money - quKuan;
        printf("正在出钞，请从出钞口拿钱，剩余金额是：%d\n",money);
    }
    
}
