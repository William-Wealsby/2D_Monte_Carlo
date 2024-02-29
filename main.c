#include<stdio.h>
#include<stdlib.h>


int main(void){
    int mass = 100000;
    int diff = 10;
    int iterations=mass/diff;
    int totals_list[iterations];
    double pi_list[iterations];  
    int k=0;
    const int total = 10;
    for (int total=10;total<=mass;total+=diff){
        double m=0;
        for (int i=0;i<total;i++){
            double x = (double)rand()/RAND_MAX;
            double y = (double)rand()/RAND_MAX;
            if (x*x+y*y<1){m++;}
        }
        double pi = 4*m/total;
        totals_list[k] = total;
        pi_list[k] = pi;
        k++;
    }
        
    FILE *fptr;
    fptr = fopen("pi_values.csv","w");
    for (int t=0;t<iterations;t++){
        fprintf(fptr, "%d,%f\n", totals_list[t],pi_list[t]);
    }
    fclose(fptr); 
    printf("Completed\n");
    return 0;
}
