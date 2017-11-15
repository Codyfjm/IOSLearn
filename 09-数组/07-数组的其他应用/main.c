//
//  main.c
//  07-数组的其他应用
//
//  Created by 冯俊铭 on 17/11/15.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//判断制定的数组中是否包含置顶的数据
int isContains(int arr[],int len,int key);

int main(int argc, const char * argv[]) {
   
//    for (int i=0; i<6; i++) {
//        int num = arc4random_uniform(33) + 1;
//        printf("%d  ",num);
//    }
//    
//    printf("\n");
    
    
    //1.准备1个长度为6的数组，用来存储意境产生好的随机数
    int redBalls[6] = {0};
    
    //2.产生6个随机数
    // 美产生1个随机数，判断数组中是否包含着歌随机数
    //如果包涵，说明这个随机数之前意境产生过了，重新再产生
//    如果不包含，就说明这个随机数之前没有产生，就存粗到数组中
    
    for (int i=0; i<6;)
    {
//    loop:
        printf("");
        int num = arc4random_uniform(33) + 1;
        //判断redBalls数组中是否包含num
        //判断1个数组中是否包含1个指定数据
        int res = isContains(redBalls, 6, num);
        //判断结果
        if (res == 0) {
            //说明不包含，存在数组中
            redBalls[i] = num;
            i++;//i的值只有在不包含的时候存到数组以后才会自增，如果重复了 i不会自增
        }
//        else{
//            //包含则重新产生
//            printf("禅声的随机数：%d重复，重新会去产生\n",num);
////            goto loop;
//            i--;//如果重复了i的值就不变
//        }
        
    }
    
    for (int i=0; i<6; i++) {
        printf("%d ",redBalls[i]);
    }
    printf("\n");
    
}

/**
 *  判断制定的数组中是否包含置顶的数据
 *
 *  @param arr 数组
 *  @param len 数组长度
 *  @param key 指定元素
 *
 *  @return 1:包含；0:不包含
 */
int isContains(int arr[],int len,int key){
    for (int i=0; i<len; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}
