//ATM Machine problem in C//
//Design an ATM system that allows a user to:
//Check balance
//Deposit money
//Withdraw money
//Exit
//The program should keep running until the user chooses to exit

//@todo::
//PIN verification (3 attempts)
//Minimum balance rule
//Transaction history
//Daily withdrawal limit

#include <stdio.h>

int main() {
  
    printf("Welcome to ATM \n");
    int choice;
    float balance;
    float deposit;
    float withdraw;
    balance = 1000;
    while(1){
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
          
            case 2:
                printf("Enter Your deposit Value:\n");
                scanf("%f",&deposit);
                balance=balance+deposit;
                printf("Thank You For Deposit Amount: ₹%.2f\n", deposit);
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
          
            case 3:
                printf("Enter Your Withdrawn amount:\n");
                scanf("%f",&withdraw);
                balance=balance-withdraw;
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
          
            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;

             default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
