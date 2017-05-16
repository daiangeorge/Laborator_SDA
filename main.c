#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NDEBUG

typedef enum {
    false, true
} bool;

int binary_search(int *a, int p, int q, int k) {
    int  m=(p+q)/2;
    if (p > q)
    {
    return -1;
    }
    else
    {
        if (a[m]==k)
            return k;
        else if (a[m] > k) return binary_search(a,p,m-1,k);
        else if (a[m] < k) return binary_search(a,m+1,q,k);
    }
    return -1;

}

int main() {
    int i,j,q,t;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int to_be_found[] = {20, 5, 7, 13};
    bool expected[] = {false, true, true, false};

    int n = (int) (sizeof(numbers) / sizeof(int));
    int test_count = (int) (sizeof(to_be_found) / sizeof(int));
    for (i = 0; i < test_count; i++) {
    q=binary_search(numbers,0,n,to_be_found[i]);
    if(q != (-1)){
        for(j=0;j<n;j++)
        {
        if(numbers[j]==to_be_found[i])
        printf("%d ",j);
        }
    }
    else
    {
        if(to_be_found[i]<numbers[0])
        {
        t=1;
        while(to_be_found[i]<numbers[t] && t<n)
            t=t+1;
         printf("\nElementul %d ar fi pe pozitia %d \n",to_be_found[i],t);
        }
        else if(to_be_found[i]>numbers[0])
        {
            t=1;
            while(to_be_found[i]>numbers[t] && t<n)
                t=t+1;
         printf("\nElementul %d ar fi pe pozitia %d \n",to_be_found[i],t);
        }
    }
}
    return 0;
}
