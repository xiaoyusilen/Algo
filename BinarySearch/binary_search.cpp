//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
#include <iostream>
using namespace std;

// 非递归
int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    while(~scanf("%d", &target)){
        int high = 9;
        int low = 0;
        int mid;
        bool flag = false;
        while(high >= low) {
            mid = (high+low)/2;
            if (a[mid] > target) {
                high = mid - 1;
            }
            else if (a[mid] < target) {
                low = mid + 1;
            }
            else {
                printf("%d\n", mid+1);
                flag = true;
                break;
            }
        }
        if(!flag) {
            printf("-1\n");
        }
    }
}

// 递归
//int getmid(int start, int end, int target, int a[]) {
//    int mid = (start+end)/2;
//    if(start>end) {
//        return -1;
//    }
//    if(a[mid]>target) {
//        return getmid(start,mid-1,target,a);
//    }
//    else if(a[mid]<target) {
//        return getmid(mid+1,end,target,a);
//    }
//    else {
//        return mid+1;
//    }
//}
//
//int main() {
//    int a[] = {1,2,3,4,5,6,7,8,9,10};
//    int target;
//    while(~scanf("%d", &target)) {
//        int result = getmid(0,9,target,a);
//        printf("%d\n", result);
//    }
//}