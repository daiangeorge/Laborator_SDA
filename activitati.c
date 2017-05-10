#include <stdio.h>
typedef struct{
	int s, f; //timpii de start si final
	char nume[100]; //denumire
}activitate;
activitate activitati[100];

void select_activitati(int x[], int* nr_activitati){
	int n = 100 ,k = 0 , m;
	x[0] = 0;
	*nr_activitati = 1;
	int n = 100 ,k = 0 , m;
	for(m=1; m<n; m++)
    {
        if(activitati[m].s>=activitati[x[k]].f)
        {
	    k=k+1;
            *nr_activitati+=1;
           x[k]=m;
        }
    }
}

void afisare(int x[], int nr){
	printf("Am selectat %d activitati\n", nr);
	int i;
	for ( i = 0; i < nr; i++){
		printf("(%2d) %2d : %2d %s", x[i], activitati[x[i]].s, activitati[x[i]].f, activitati[x[i]].nume);
	}
}

int main(){
	FILE* f = fopen("date_activitati.txt", "r");
	int n;
	int i;
	fscanf(f,"%d", &n);
	for ( i = 0; i < n; i++){
		fscanf(f,"%d%d", &activitati[i].s, &activitati[i].f);
		fgets(activitati[i].nume, 100, f);
	}
	fclose(f);

	int x[100];
	int nr_activitati = 0;
	select_activitati(x, &nr_activitati);
	afisare(x, nr_activitati);
	return 0;
}
