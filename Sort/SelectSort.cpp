//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
using namespace std;

// 选择排序
int select_sort(int a[]) {
    int i,j;
    for(i=0;i<10;i++) {
        int min=a[i];
        int pos=i;
        for(j=i+1;j<10;j++) {
            if(a[j]<min) {
                min=a[j];
                pos=j;
            }
        }
        a[pos]=a[pos]^a[i];
        a[i]=a[i]^a[pos];
        a[pos]=a[pos]^a[i];
    }
    for(i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}