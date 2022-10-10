/*Distance between Mrrpur & Ashulia*/
#include<stdio.h>
int main (){
    float distance, meter, feet, inches, centimeter;

    printf("Enter the distance between Mirpur & Ashulia= ");
    scanf("%f",&distance);

    meter=1000*distance;
    feet=100*distance;
    inches=10000*distance;
    centimeter=100000*distance;

    printf("Distance in meter=%.2f\n", meter);
    printf("Distance in feet=%.2f\n", feet);
    printf("Distance in inches=%.2f\n", inches);
    printf("Distance in centimeter=%.2f\n", centimeter);

    return 0;
}
