/**
 
 1.数组的排序
 
 2.选择排序
 
 
 **/

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int arr[] = {12,1,3,24,346,4,564,7,547,46,25,87,88,46,8,100};
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    //选择排序
    for (int i=0; i<len-1; i++) {
        for (int j=i+1; j<len; j++) {
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    for (int i=0; i<len; i++) {
        printf("%d\n",arr[i]);
    }
    
}
