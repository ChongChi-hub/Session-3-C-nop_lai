#include <stdio.h>

int main()
{
    float math, literature, english, sum, avg;
    printf("Enter math score: ");
    scanf("%f", &math);
    
    printf("Enter literature score: ");
    scanf("%f", &literature);
    
    printf("Enter english score: ");
    scanf("%f", &english);
    
    sum = math + literature + english;
    avg = sum / 3.0;
    
    printf("Total score: %.2f\n", sum);
    printf("Average score: %.2f", avg);

    return 0;
}
