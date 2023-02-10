#include <stdio.h>
#include <conio.h>
//Function Prototype
float addNumbers(float num1, float num2, float num3, float num4, float num5);
float findMean(float total);

//Main Function
int main(){
    float a, b, c, d, e, sum, mean;


    printf("Enter Five Grades of Student: \n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    sum = addNumbers(a, b, c, d, e);
    mean = findMean(sum);
    printf("\nThe Average of the Student is: %.2f\n", mean);

    return 0;
    getch();
}
//Function Definition
//For Adding 5 numbers
float addNumbers(float num1, float num2, float num3, float num4, float num5){
    float sum;

    sum = num1 + num2 + num3 + num4 + num5;
//return Function
    return sum;
}
//For getting the Average
float findMean(float total){
    float mean;

    mean = total / 5;
    return mean;
}
