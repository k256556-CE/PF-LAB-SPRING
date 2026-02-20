#include<stdio.h>
#include<string.h>

int main(){
    char username[20], password[20], otp[10];

    printf("Enter Username: ");
    scanf("%s",username);

    if(strcmp(username,"admin")==0){

        printf("Enter Password: ");
        scanf("%s",password);

        if(strcmp(password,"1234")==0){

            printf("Enter OTP: ");
            scanf("%s",otp);

            if(strcmp(otp,"9999")==0){
                printf("Login Successful");
            }
            else{
                printf("Invalid OTP");
            }
        }
        else{
            printf("Incorrect Password");
        }
    }
    else{
        printf("Invalid Username");
    }

    return 0;
}
