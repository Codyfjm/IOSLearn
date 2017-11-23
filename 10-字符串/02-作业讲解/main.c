//
//  main.c
//  02-作业讲解
//
//  Created by 冯俊铭 on 17/11/17.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>
#include "hmArray.h"

int main(int argc, const char * argv[]) {
    
    
    int arr[] = {10,210,2558,158,43,25,6,7,45,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<len/2; i++) {
        int temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i]=temp;
    }
    
    for (int i=0; i<len; i++) {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    
//    //1.接收输入班级人数
//    int num = 0;
//    printf("请输入班级人数：");
//    scanf("%d",&num);
//    
//    
//    //2.声明1个数组存储学生成绩，数组的长度有多少个人就有多少个长度
//    int scores[num];
//    
//    //3.循环接收每个人的成绩并将成绩存储到数组中
//    for (int i=0; i<num; i++) {
//        printf("请输入第%d个同学的成绩:",i+1);
//        scanf("%d",&scores[i]);
//    }
//    
//    //4.调用模块中的函数求累加和与平均值
//    int totalScore = getSum(scores, num);
//    int avg = getAvg(scores, num);
//    
//    
//    //5.找最大值和最小值
//    int max = getMax(scores, num);
//    int min = getMin(scores, num);
//    
//    //6.再求累加和平均值
//    int avg1 = (totalScore - max - min) / (num - 2);
//    printf("总成绩为%d,平均成绩为%d,去掉中个最高分:%d，再去掉1个最低分：%d,平均成绩是%d",                 totalScore,
//        avg,
//        max,
//        min,
//        avg1);
}
