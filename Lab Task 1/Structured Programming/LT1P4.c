/*Tempareture of a city in Fahrenheit degrees*/
#include<stdio.h>
int main(){
    float celcius, fahrenheit;

    printf("Enter the fahrenheit tempareture= ");
    scanf("%f", &fahrenheit);

    celcius=((fahrenheit-32)*5/9);

    printf("Enter the celcius=%.2f", celcius);


    return 0;
}
