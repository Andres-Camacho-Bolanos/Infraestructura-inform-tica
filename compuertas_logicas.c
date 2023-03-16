#include<stdio.h>
#include<stdbool.h>
void validacion (bool unam,bool carrera){
    
    if (unam && carrera){
        printf("\nPertences a la unam, te encuentras inscrito en la carrera 308 (informatica) y en el grupo 2296");
    }else if (unam  && carrera == false ){
        printf("\nPerteneces a la UNAM pero no estas inscrito en la carrera de informatica y  no perteneces al grupo 2296");
    }else{
        printf("\nNo perteneces a la UNAM\n");
    }
}  
int main(){
   
   validacion(); //Pasar como argumentos  1 o 0 donde true=1 y false=0, o bien las palabras true o false
}
