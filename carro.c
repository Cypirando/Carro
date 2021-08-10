#include <stdio.h>
 
int main(void){
    int i,j,k,g, tempo=100000000;
    for(i=0; i<10; i++){
        for (j=0; j<i; j++){
            printf("\t");
        }
        printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
        printf("\n");
        for (k=0; k<i; k++){
            printf("\t");
        }
        printf("\xDFO\xDF\xDF\xDF\xDFO\xDF");
        for(g=0;g<tempo;g++){
        }
        system("cls");        
    }
    getch();
}
