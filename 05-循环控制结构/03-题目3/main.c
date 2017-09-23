//
//  main.c
//  03-题目3
//
//  Created by 冯俊铭 on 17/9/23.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //1.输入密码。
    int pwd = 0;
    printf("请输入密码：");
    scanf("%d",&pwd);
    
    //2.判断是否正确
    //2.1如果正确：OK
    
    if (pwd==888888) {
        printf("恭喜你，输入正确\n");
    }
    
    else{
        //2.2.如果错误：
        //  再输入1次 并判断
        
        printf("对不起，输入错误，请再输入1次：");
        scanf("%d",&pwd);
        if (pwd==888888) {
            printf("恭喜你，输入正确\n");
        }else{
            printf("已启动自曝呈现");
        }
    }
    
  

}
