//
//  main.c
//  04-打印三角形状
//
//  Created by 冯俊铭 on 17/9/26.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i=0; i<=10; i++) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
