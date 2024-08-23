// 1008 Beecrowd (Salário)
// Por Commetx
#include <stdio.h>

int main() {

    // Declarando as variáveis de valores inteiros "número de um funcionário" e "horas trabalhadas"
    int n, t;
    // Declarando as variáveis de valores deciamis "valor que recebe por horas" e "salário"
    double h, s;
    // Lendo as 3 variáveis "n", "t" e "h";
    scanf("%d %d %lf", &n, &t, &h);

    // Afirmando o valor do salário 
    s = h * t;

    // Exibindo a mensagem conforme o requisitado 
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", s);

    return 0;
}
