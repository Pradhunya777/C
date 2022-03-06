#include<iostream>
#include<string.h>
using namespace std;
int main(){

    strcpy(str1,"DOG");
    strcpy(str2,"CAT");

    if(str1[0]==D&&str1[1]==O&&str1[2]==G){
        strcpy(str1,"CAT");
    }
    return 0;
}
