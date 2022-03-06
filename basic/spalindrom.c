#include<stdio.h>
#include<string.h>
int main(){
   isPalindrome("abba");
   isPalindrome("abbccbba");
   isPalindrome("geeks");
   return 0;
}

void isPalindrome(char str[]){
    int l=0;
    int h=strlen(str)-1;

    while(h>1)
    {
        if(str[l++]!=str[h--])
        {

            printf("\n\t%s is not palindrome\n",str);
            return;
        }
    }
    printf("\n\t%s is palindrom\n",str);
}
