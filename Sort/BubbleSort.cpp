//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
using namespace std;

// 冒泡排序
int bubble_sort(int a[]) {
    int i,j;
    for(i=0;i<10;i++) {
        for(j=i+1;j<10;j++) {
            if(a[i]>a[j]) {
                int swap;
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    for(i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

// 优化方案一
int bubble_sort1(int a[]) {
    int i,j;
    for(i=0;i<10;i++) {
        bool flag=true;
        for(j=i+1;j<10;j++) {
            if(a[i]>a[j]) {
                int swap;
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
                flag=false;
            }
        }
        if(flag) {
            break;
        }
    }
    for(i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

// 优化方案二
int bubble_sort2(int a[]) {
    int i,j,k,l,x=10;
    for(i=0;i<10;i++) {
        bool flag=true;
        for(j=0;j<x;j++) {
            if(a[j]>a[j+1]) {
                int swap;
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
                k=j;
                flag=false;
            }
        }
        x=k;
        if(flag) {
            break;
        }
    }
    for(i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}