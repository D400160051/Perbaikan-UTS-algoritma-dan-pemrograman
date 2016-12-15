#include <stdio.h>
unsigned char i=0;
int main(){
    printf("HURUF | DESIMAL | HEKSADESIMAL\n");
    printf("==============================\n");


    for(i=65; i<255; i++){
        printf("%c     | %d    | 0x%x\n",i,i,i);
    }
    printf("==============================\n");
    return 0;
}
