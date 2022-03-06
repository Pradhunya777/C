#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *file;
    int rollno;
    printf("\n enter roll no :\t");
    scanf("%d",&rollno);

    file = fopen("H:\\Profound\\files\\file1.txt","w+");

    if(file==NULL){
     printf("\n file not created...");
    }
    else{
        fprintf(file,"%d",rollno);
        printf("\n \t file created...");
        fprintf(file,"\nwelcome to files...");
        fclose(file);
        return 0;
    }
}
