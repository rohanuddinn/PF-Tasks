#include <stdio.h>

int main() 
{
    int balance, withdrawal;

    printf("Enter your balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (withdrawal > 0 && withdrawal <= balance) {
        printf("Withdrawal Approved\n");
    } else {
        printf("Withdrawal Denied\n");
    }

    return 0;
}
