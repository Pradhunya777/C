#include<stdio.h>
#include<conio.h>
int main(){
    FILE *file=fopen("H:\\Profound\\files\\file1.txt","r");
    char ch;
    //clrscr();

    ch=getc(file);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(file);
    }
    fclose(file);
    getch();
}
