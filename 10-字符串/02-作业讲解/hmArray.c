//
//  hmArray.c
//  10-字符串
//
//  Created by 冯俊铭 on 17/11/17.
//  Copyright © 2017年 cody. All rights reserved.
//

#include "hmArray.h"
/**
 *  找出指定数组中的最大值
 *
 *  @param arr 指定的数组
 *  @param len 数组的长度
 *
 *  @return 数组的最大值
 */
int getMax(int arr[],int len)
{

    int max = INT16_MIN;
    for (int i=0; i<len; i++) {
        if (arr[i]>max) {
            max = arr[]i;
        }
    }
    
    return max;
}



/**
 *  找出指定数组中的最小值
 *
 *  @param arr 指定的数组
 *  @param len 数组的长度
 *
 *  @return 数组的最小值
 */
int getMin(int arr[],int len){

    int min = INT32_MAX;
    for (int i=0; i<len; i++) {
        if (arr[i]<max) {
            min = arr[]i;
        }
    }
    
    return min;

}




/**
 *  找出指定数组中的累加和
 *
 *  @param arr 指定的数组
 *  @param len 数组的长度
 *
 *  @return 数组的累加和
 */
int getSum(int arr[],int len){

    int sum = 0;
    for (int i=0; i<len; i++) {
        sum += arr[i];
    }
    return sum;
}



/**
 *  找出指定数组中的平均值
 *
 *  @param arr 指定的数组
 *  @param len 数组的长度
 *
 *  @return 数组的平均值
 */
int getAvg(int arr[],int len){

    int sum = getSum(arr, len);
    return sum/len;
}


/**
 *  查找指定的元素在数组中出现的下标
 *
 *  @param arr 指定的数组
 *  @param len 数组的长度
 *  @param key 要找的数组
 *
 *  @return 下标
 */
int indexOf(int arr[],int len,int key){

    for (int i=0; i<len; i++) {
        if (arr[i]==key) {
            return i;
        }
    }
    
    return -1;
}


/**
 *  查找指定的元素在数组中是否包含
 *
 *  @param arr 指定的数组
 *  @param len 数组的长度
 *  @param key 要找的数组
 *
 *  @return 是否包含
 */
int isContains(int arr[],int len,int key){

    int index = indexOf(arr, len, key);
    if (index != -1) {
        return 1;
    }
    return 0;
}


/**
 *  对传入的数组进行从大到小排序
 *
 *  @param arr 给定的数组
 *  @param len 数组的长度
 */
void sort(int arr[],int len){

    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-1-i; j++) {
            if (arr[j]<arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}