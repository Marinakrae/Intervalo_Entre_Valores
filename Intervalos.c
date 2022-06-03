#include <stdio.h>
int main()
{
    int n, num1, num2, intervalo=0, num_maior_intervalo1, num_maior_intervalo2, i = 1;
    //define quantos numeros ira pedir (valor de N)
    printf("Informe quantos valores deseja digitar: ");
    scanf("%d", &n);
    //inicia com o primeiro numero fora do laco
    printf("Digite o %d numero: ", i);
    scanf("%d", &num1);
    for(i = 2; i <= n; i++){
        //dentro do laco entre com os proximos valores
        printf("Digite o %d numero: ", i);
        scanf("%d", &num2);
        if((num1-num2) > intervalo){ //testa a subtracao do primeiro e o segundo numero
        
            intervalo = num1-num2;
            num_maior_intervalo1 = num1;
            num_maior_intervalo2 = num2;
            
        } else if((num2-num1) > intervalo){ //testa a subtracao com a ordem os numeros invertida tambem
        
            intervalo = num2-num1;
            num_maior_intervalo1 = num2;
            num_maior_intervalo2 = num1;
            
        } else if(num2 == num1){  //sao iguais
        
            num_maior_intervalo1 = num2;
            num_maior_intervalo2 = num1;
            
        }
        //faz a substituicao dos valores para que num1 passe a valer num2
        num1 = num2;
    } 
    if (intervalo == 0){
        printf("Todos os numeros sao iguais!");
    } else {
        printf("Os valores sao %d e %d, pois o intervalo entre eles e %d", num_maior_intervalo1, num_maior_intervalo2, num_maior_intervalo1 - num_maior_intervalo2);
    }
    return 0;
}
