#include <stdio.h>

int main() {
    float weight_kg, height_cm, bmi;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight_kg);
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);
    height_cm /= 100;
    bmi = weight_kg / (height_cm  * height_cm);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi < 25) {
        printf("You are normal.\n");
    } else if (bmi < 30) {
        printf("You are overweight.\n");
    } else if (bmi < 35) {
        printf("You are obese.\n");
    }

    return 0;
}