//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
using namespace std;

// 插入排序
int insert_sort(int a[]) {
    int i,j;
    for(i=0;i<10;i++) {
        int min=a[i+1];
        for(j=i+2;j<10;j++) {
            if(a[j]<min) {
                min=a[j];
            }
        }
        a[i]=a[i]^a[j];
        a[j]=a[j]^a[i];
        a[i]=a[i]^a[j];
    }
    for(i=0;i<10;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}