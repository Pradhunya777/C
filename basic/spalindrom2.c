#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[10],s2[10];
    int cmp;
    printf("\n\t Enter a String = ");
    scanf("%s",s1);

     //strcpy copies the string from s1 to s2;
    strcpy(s2,s1);

     //strrev reverses the string s1;
    strrev(s1);

     //strcmp compares two strings s1 & s2 and stores the integer result in cmp variable;
    cmp=strcmp(s1,s2);

    if(cmp==0){
        printf("\n\t String is palindrome");
    }
    else{
        printf("\n\t string is not palindrom");
    }
    return 0;
}
