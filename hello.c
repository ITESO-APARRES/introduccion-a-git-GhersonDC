#include <stdio.h>

int main(void){
    printf("Hola mundo");
    Mensaje();
    return 0;
}

void decirHola(char* nombre){
    printf("Hola %s, Como estas?",nombre);
}
void Mensaje(){
    printf("Otro mensaje")   
}
