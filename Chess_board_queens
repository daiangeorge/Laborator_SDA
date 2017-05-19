#include <stdio.h>
#include <stdlib.h>
#define MAXN 10
int x[ MAXN ]; /* solution vector */
int n; /* chessboard size */
int solNb;  /* solution number */
enum { FALSE, TRUE };

int conditii( int k )
/* check the continuation conditions - the k-th queen threatens none of the queens: 1, 2, ..., k-1 */
{
    int i;
    int valid=TRUE;
    for(i=1; i<=k-1; i++)
        if( (x[k]==x[i]) || (k-i==x[k]-x[i]) )
            valid=FALSE;
    return valid;
}


void displaySolution()
/* display the chessboard configuration */
{

    solNb++;
    printf( "\nSolution %d:\n", solNb );
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            if( j != x[i])
                printf(".");
            else
                printf("R");
        printf("\n");
    }
    /// TODO
}

void recQueens( int k )
/* find all possible arrangements of n queens on a chessboard such that no queen
   threatens another */
{
    int j;
    for ( j = 1; j <= n; j++ )
    {
        x[ k ] = j;
        if ( conditii( k ) )
        {
            if ( k < n )
                recQueens( k + 1 );
            else
                displaySolution();
        }
    }
}
int main()
{
    printf( "\nNumber of queens=" );
    scanf( "%d", &n );
    solNb = 0;
    recQueens( 1 );
    printf( "\nEnd." );
    return 0;
}

