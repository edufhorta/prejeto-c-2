#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
void guess(){
    int num_adv;
    printf("=========== ADIVINHE ==========\n");
    printf("==    Você terá 5 chances!   ==\n");
    printf("==  escolhendo um número ... ==\n");
    srand(time(NULL));
    int num_escolhido = rand() % 100 +1;
    printf("\n  Adivinhe um número de 1 a 100:\n");

    for (int i = 0;i<5;i++){
    scanf("%d", &num_adv);
    if (i== 4){
            if (num_adv != num_escolhido){
                printf("--JOGO PERDIDO :( , O número escolhido era %d--\n", num_escolhido);
            }
            else {
                printf("***UFA!! Você ACERTOU!!!***\n");
                break;
            }
    }
    
    else{
    if (num_adv < num_escolhido){
        printf("--incorreto, tente um número MAIOR!--\n");
    }
    else if (num_adv> num_escolhido){
        printf("--Incorreto, tente um número MENOR!--\n");
    }
    else if (num_adv == num_escolhido){
        printf("***Parabéns você ACERTOU!!!***\n");
        break;
    }
    }
    
}
}


int main(){
    setlocale(LC_ALL,("portuguese"));
    guess();
    return 0;

}
