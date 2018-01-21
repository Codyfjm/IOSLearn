//
//  main.c
//  09-枚举的使用
//
//  Created by 冯俊铭 on 18/1/21.
//  Copyright © 2018年 cody. All rights reserved.
//

/*
 使用枚举创建1个数据类型:取值限定的情况下使用
 语法格式：
 enum 新类型名称
 {
 
 };
 
 声明枚举类型的变量
 语法格式：
    enum 枚举类型名称 变量名;
 
 
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    enum Direction
    {
        East,
        West,
        South,
        North
    };
    
    enum Direction dir = South;
    
    printf("%d\n",dir);
    
    
}
