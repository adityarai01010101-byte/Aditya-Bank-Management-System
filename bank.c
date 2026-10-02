#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int otp, userotp, Choice;
    float Balance = 10000.00;
    float Amount = 0;

    srand(time(0));

    for (;;) {

        printf("\nWELCOME TO ADITYA BANK\n");
        printf("What Service do you want?\n");
        printf("1. DEPOSIT MONEY\n");
        printf("2. WITHDRAW MONEY\n");
        printf("3. CHECK BALANCE\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &Choice);

        switch (Choice) {

            case 1:
                printf("ENTER THE AMOUNT: ");
                scanf("%f", &Amount);

                if (Amount > 0) {
                    Balance += Amount;
                    printf("DEPOSIT SUCCESSFUL!\n");
                    printf("YOUR ACCOUNT BALANCE IS: %.2f\n", Balance);
                } else {
                    printf("INVALID AMOUNT!\n");
                }

                break;

            case 2:
                printf("\nFOR WITHDRAWAL, WE WILL SEND AN OTP TO YOUR REGISTERED MOBILE NUMBER.\n");

                otp = rand() % 9000 + 1000;

                printf("YOUR OTP IS: %d\n", otp);
                printf("ENTER YOUR OTP: ");
                scanf("%d", &userotp);

                if (otp != userotp) {
                    printf("WRONG OTP!\n");
                    break;
                }

                printf("ENTER THE AMOUNT: ");
                scanf("%f", &Amount);

                if (Amount <= 0) {
                    printf("INVALID AMOUNT!\n");
                }
                else if (Amount <= Balance) {
                    Balance -= Amount;
                    printf("TRANSACTION SUCCESSFUL!\n");
                    printf("YOUR BALANCE IS: %.2f\n", Balance);
                }
                else {
                    printf("INSUFFICIENT BALANCE!\n");
                }

                break;

            case 3:
                printf("\nCHECK YOUR REGISTERED MOBILE NUMBER FOR OTP.\n");

                otp = rand() % 9000 + 1000;

                printf("YOUR OTP IS: %d\n", otp);
                printf("ENTER OTP: ");
                scanf("%d", &userotp);

                if (otp != userotp) {
                    printf("INVALID OTP!\n");
                    break;
                }

                printf("YOUR ACCOUNT BALANCE IS: %.2f\n", Balance);

                break;

            case 4:
                printf("\nTHANK YOU FOR CHOOSING ADITYA BANK!\n");
                return 0;

            default:
                printf("INVALID CHOICE! TRY AGAIN.\n");
        }
    }

    return 0;
}


