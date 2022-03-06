#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int choice, r, n1, n2, no, rem, rev = 0, temp;
float area;

int main()
{
    do{

        printf("\n *********MENU *******");
        printf("\n\t 1. Area Of Circle");
        printf("\n\t 2. Comparison - 3 nos");
        printf("\n\t 3. Palindrome");
        printf("\n\t 4. Exit");

        printf("\n\t Enter your choice:\t");
        scanf("%d", &choice);

        switch(choice){

        case 1:

            printf("\n\t Enter radius:");
            scanf("%d", &r);

            printf("\n\t Radius: %d", r);
            area = 3.14f * r * r;
            printf("\n\t Area : \t%f", area);

            break;

        case 2:
            printf("\n\t Enter two numbers:");
            scanf("%d%d", &n1, &n2);
            if(n1 > n2){

                printf("\n\t N1 is greater.");
            }
            else{

                printf("\n\t N2 is greater.");
            }

            break;

        case 3:

            printf("\n\t Enter a number : \t");
            scanf("%d", &no);
            temp = no;
            while(no > 0){

                rem = no % 10;
                rev = rev * 10 + rem;
                no = no / 10;
            }
            printf("\n\t Reversed number : \t%d", rev);
            if(temp == rev){
                printf("\n\t No is Palindrome");
            }
            else{
                printf("\n\t No is NOT Palindrome");
            }

            break;

        case 4:
            //exit(0);
            break;

        default:
            printf("\n\t Invalid choice");
            break;
        }
    }while(choice != 4);
    return 0;
}
