#include<stdio.h>
#include<math.h>
int main()
{ 
 float balance,amount1,amount2,ch;
 int choice;
 printf("\nbalance ");
 scanf("%f",&balance);
 printf("\n1.balance inquiry 2.cash withdrawal 3.cash deposit");
 printf("\nchoice:");
 scanf("%d",&choice);
 switch (choice) {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;
        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount1);
            if (amount1 <= balance) {
                balance -= amount1;
                printf("Transaction successful. Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;
        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount2);
            balance += amount2;
            printf("Deposit successful. Updated balance: %.2f\n", balance);
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    
}    
  