// matrix code
#include <stdio.h>
#include <stdlib.h>

int matrixOne[2][2];
int matrixTwo[2][2];
int result[2][2];
int mul[2][2];
int r,k,c;

void getData();
void printData();
void addMatrix();
void mulMatrix();

int main()
{
    getData();
    printData();
    addMatrix();
    mulMatrix();
    return 0;
}

void getData(){

    printf("\n\t Enter elements for matrixOne: \t");

    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){
                scanf("%d", &matrixOne[r][c]);
            }
    }

    printf("\n\t Enter elements for matrixTwo: \t");

    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){
                scanf("%d", &matrixTwo[r][c]);
            }
    }
}

void printData(){

    printf("\n\t Elements of matrixOne: \t");

    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){
                printf("\t%d", matrixOne[r][c]);
            }
    }

    printf("\n\t Elements of matrixTwo: \t");

    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){
                printf("\t%d", matrixTwo[r][c]);
            }
    }
}

void addMatrix(){

    printf("\n\t Summation result: \t");

    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){
                result[r][c] = matrixOne[r][c] + matrixTwo[r][c];
                printf("\t%d", result[r][c]);
            }
    }
}
void mulMatrix(){
    printf("\n\t multiplication result: \t");
    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){
                    mul[r][c]=0;
            for(k=0;k<2;k++){
                mul[r][c]+=matrixOne[r][c] * matrixTwo[r][c];

            }
        }
    }

    for(r = 0; r < 2; r++){

            printf("\n");
            for(c = 0; c < 2; c++){


                printf("\t%d", mul[r][c]);
            }
            printf("\n");
        }

}

