/**************************

                            Solicita N valores e apresenta o par de numeros
                            consecutivos que possui o maior intervalo

***************************/

#include <stdio.h>

int main()
{
    int n, num1, num2, aux=1, intervalo=0, num_maior_intervalo1, num_maior_intervalo2;
    
    //define quantos numeros ira pedir (valor de N)
    printf("Informe quantos valores deseja digitar: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){ 
        
        printf("Digite o %d número: ", aux);
        scanf("%d", &num1);
        
        aux++; //serve para informar qual o numero a ser digitado (1o numero, 2o numero)
        i++;
        
        printf("Digite o %d numero: ", aux); //aqui está o aux sendo usado 
        scanf("%d", &num2);
        
        aux++; //incrementa o aux
        
        if((num1-num2) > intervalo){
                
                intervalo = num1-num2;
                num_maior_intervalo1 = num1;
                num_maior_intervalo2 = num2;
                
        } else if((num2-num1) > intervalo){  //testa a subtração com a ordem os números invertida tbm
                
                intervalo = num2-num1;
                num_maior_intervalo1 = num2;
                num_maior_intervalo2 = num1;
                
        } else if(num2 == num1){  //sao iguais
                
                num_maior_intervalo1 = num2;
                num_maior_intervalo2 = num1;
        }

    } 
    
    if (intervalo == 0){
        printf("Todos os numeros sao iguais!");
    } else {
        printf("%d e %d, pois o intervalo entre eles é %d", num_maior_intervalo1, num_maior_intervalo2, num_maior_intervalo1 - num_maior_intervalo2);
    }
    
    return 0; //se colocar a função como void não precisa do return 0
    
}