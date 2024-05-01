#include<stdio.h>

double fahrenheitToCelcius(double fahrenheit){
    return(fahrenheit -32) * 5.0 / 9.0;
}
double celciusToFahrenheit(double celcius){
    return(celcius * 9.0 / 5.0) + 32;
}

int main(){
    int choice;
    double temperature,result;
    printf("1:Convert Fahrenheit to celcius: ");
    printf("\n2: Convert celcius to fahrenheit: ");
    printf("\nselect your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        result = fahrenheitToCelcius(temperature);
        printf("Temperature in celcius = %.2lf\n", result);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in celcius: ");
        scanf("%lf", &temperature);
        result = celciusToFahrenheit(temperature);
        printf("Temperature in fahrenheit = %.2lf\n", result);
    }
    else{
        printf("invalid choice");
    }
    

    return 0;
}