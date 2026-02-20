#include <stdio.h>

int main() {
    int income; 
    float cgpa;
    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    printf("Enter Family Income: ");
    scanf("%d",&income);
    
    if(cgpa >= 3.5){
        if(income < 50000){
            printf("Scholarship: 100%");
        }
        else{
            printf("Scholarship: 50%");
        }
    }
    else if(cgpa >= 3.0 && income < 40000){
        printf("Scholarship: 25%");
    }
    else{
        printf("No Scholarship");
    }
    return 0;
}
    
