//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
#include <iostream>
using namespace std;

// 非递归
int binary_search(int a[],int l,int r, int target) {
    while(l<r) {
        int mid=(l+r)/2;
        if(a[mid]>target) {
            r=mid-1;
        } else if(a[mid]<target) {
            l=mid+1;
        } else {
            return mid+1;
        }
    }
    return -1;
}

// 递归
int binary_search_recursion(int a[],int l,int r, int target) {
    int mid=(l+r)/2;
    if(l>r) {
        return -1;
    }
    if(a[mid]>target) {
        return binary_search_recursion(a,l,mid-1,target);
    } else if(a[mid]<target) {
        return binary_search_recursion(a,mid+1,r,target);
    } else {
        return mid+1;
    }
}