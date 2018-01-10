//
//  main.c
//  04-字符串排序
//
//  Created by 冯俊铭 on 17/12/28.
//  Copyright © 2017年 cody. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char *countries[] =
    {
        "Njadjdjadja;",
        "Aadaadjdaadja",
        "WFSAFASjdjadja;",
        "ADSFjdjadja;",
        "FSDFAjdjadja;",
        "GFGHFjdjadja;",
        "FGHdjdjadja;",
        "VDSdjdjadja;",
        "DGDSjdjadja;",
        "FDSGjdjadja;",
        "GVDSGVSjdjadja;",
        "NVSXVdjaXVXdja;",
        "NVXadja;",
    };
    
//    //1先计算数组的长度
//    int len = sizeof(countries) / sizeof(countries[0]);
//    
//    //2使用冒泡排序
//    for (int i=0; i<len - 1; i++) {
//        for (int j=0; j<len-1-i; j++) {
//            
//            int res = strcmp(countries[j], countries[j+1]);
//            
//            if (res>0) {
//                char* temp = countries[j];
//                countries[j] = countries[j+1];
//                countries[j+1] = temp;
//            }
//        }
//    }
//    
//    //3打印结果
//    for (int i=0; i<len; i++) {
//        printf("%s\n",countries[i]);
//    }
    
    //1计算数组长度
    int len = sizeof(countries) / sizeof(countries[0]);
    //使用选择排序
    for (int i=0; i<len-1; i++) {
        for (int j=i+1; j<len; j++) {
            unsigned long len1 = strlen(countries[i]);
            unsigned long len2 = strlen(countries[j]);
            
            if (len1 < len2) {
                char* tmp = countries[i];
                countries[i] = countries[j];
                countries[j] = tmp;
            }
        }
    }
    
    //3打印结果
    for (int i=0; i<len; i++) {
        printf("%s\n",countries[i]);
    }
    
}
