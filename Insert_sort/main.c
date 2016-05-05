//
//  main.c
//  Insert_sort
//
//  Created by 王亓泰 on 16/4/16.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[10] = {5,1,3,9,7,6,4,2,0,8};
    
    for (int i = 0; i<10; i++) {
        printf("%d\n",a[i]);
    }
    // 降序
    for (int i = 1; i < 10; i++) {
        int temp = a[i];
        for (int j = i - 1; j >= 0; j--) {
            if (temp > a[j]) {
                a[j+1] = a[j];
                if (j == 0) {
                    a[j] = temp;
                }
            } else {
                    a[j+1] = temp;
                    break;
            }
        }
    }
    
    for (int i = 0; i<10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    return 0;
}
