//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
using namespace std;

int a[10]={3,2,10,4,1,9,6,7,8,5};

int adjust(int a[], int l, int r) {
    int pos=r,i;
    for(i=l;i<r;i++) {
        if(a[i]>a[pos]&&i<pos) {
            int swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
            pos=i;

        }
        if(a[i]<a[pos]&&i>pos) {
            int swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
            pos=i;
        }
    }
    return pos;
}

int quick_sort(int a[], int l, int r) {
    if(l>r) {
        return 0;
    }
    int target=adjust(a,l,r);
    quick_sort(a,l,target-1);
    quick_sort(a,target+1,r);
    return 0;
}

int main() {
    quick_sort(a,0,9);
    for(int i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
}