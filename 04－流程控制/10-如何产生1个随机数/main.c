//
//  main.c
//  10-如何产生1个随机数
//
//  Created by 冯俊铭 on 17/9/21.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

//    int num = arc4random_uniform(30);
//    printf("num = %d\n",num);
    
    
    //产生一定范围的随机数:nt num = arc4random_uniform(最大数-最小数+1) + 最小数;
    //45 90
    int num = arc4random_uniform(90-45+1) + 45;
    printf("num = %d\n",num);

}
