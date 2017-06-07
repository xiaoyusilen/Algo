//
// Created by xiaoyusilen on 2017/6/3.
//

#include <cstdio>
#define N 10000
using namespace std;

int a[N]={0};

int adjust(int a[], int l, int r) {
    int pos=r,i;
    for(i=l;i<r;i++) {
        if(a[i]>a[pos]&&i<pos) {
            a[i]=a[i]^a[pos];
            a[pos]=a[pos]^a[i];
            a[i]=a[i]^a[pos];
            pos=i;
        }
        if(a[i]<a[pos]&&i>pos) {
            a[i]=a[i]^a[pos];
            a[pos]=a[pos]^a[i];
            a[i]=a[i]^a[pos];
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
    int n;
    while(~scanf("%d",&n)) {
        int i;
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        quick_sort(a,0,n-1);
        for(i=0;i<n;i++) {
            printf("%d ", a[i]);
        }
    }
}