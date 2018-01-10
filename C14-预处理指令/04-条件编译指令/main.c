//
//  main.c
//  04-条件编译指令
//
//  Created by 冯俊铭 on 18/1/8.
//  Copyright © 2018年 cody. All rights reserved.
//

#include <stdio.h>

//#define N 20

int main(int argc, const char * argv[]) {
#ifdef N
    
    printf("啦啦啦啦1\n");
    printf("啦啦啦啦2\n");
    printf("啦啦啦啦3\n");
    printf("啦啦啦啦\n");
    printf("啦啦啦啦\n");
    printf("啦啦啦啦\n");
#endif
    
    printf("hehheheheh\n");
    printf("hehehehe\n");
    
   
//#if N == 10
//    
//    printf("AAAAAA\n");
//    printf("AAAAAA\n");
//    printf("AAAAAA\n");
//    printf("AAAAAA\n");
//    printf("AAAAAA\n");
//#elif N == 20
//    
//    printf("AddddddA\n");
//    printf("AAAAddddAA\n");
//    printf("AAAAdddAA\n");
//    printf("AAAAddddddAA\n");
//    printf("AAAAAddA\n");
//#endif
    
}
