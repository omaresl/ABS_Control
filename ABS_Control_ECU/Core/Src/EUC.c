/*Codigo de la funcion de Diana*/
/*Enhanced Understeering Control*/ 

#include <stdio.h> 

void func(void);

int main(){
    int velocity = 120;

    if(velocity == 130){
         printf("The intervention of the vehicle is activated ");
    }    
            else if(velocity <=130){
            printf("The intervention of the vehicle is not activated yet");
    }
}  