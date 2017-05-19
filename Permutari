#include <stdio.h>
#include <stdlib.h>

int v[90];
int n;

int valid(int k)
{
    int i;
    for(i=0;i<k;i++)
        if(v[k]==v[i])
        return 0;
    return 1;
}

void afisare(int v[])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",v[i]);
    printf(" --solutie");
    printf("\n");
}

void backtracking(int k)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        v[k]=i;
        for(j=0;j<=k;j++)
            printf("%d ",v[j]);
        printf("\n");
        if(valid(k)==1)
            if(k==n-1)
                afisare(v);
            else
                backtracking(k+1);
    }
}

int main()
{

    printf("n=");
    scanf("%d", &n);
    backtracking(0);
    return 0;
}
