#include <stdio.h>

int main() {
    int balance = 5000;  
    int withdraw;

    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw);

    if (withdraw <= 0) {
        printf("Invalid amount! Please enter a positive value.\n");
    }
    else if (withdraw > balance) {
        printf("Insufficient balance! Transaction failed.\n");
    }
    else {
        balance -= withdraw; 
        printf("Transaction successful! Remaining balance = %d\n", balance);
    }

    return 0;
}