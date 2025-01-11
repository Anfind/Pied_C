#include<stdio.h>
#include<math.h>

float geoMetricMean(int start, int end){
    int sum = 1;
    for(int i = start; i <= end; i++){
        sum *= i;
    }
    return pow(1.0*sum, 1.0/(end-start+1));
}

int main(){
    int start;
    int end;
    printf("Hay nhap start :");
    scanf("%d", &start);
    printf("\nHay nhap end :");
    scanf("%d", &end);
    printf("\n%.2f", geoMetricMean(start, end));
    return 0;
}