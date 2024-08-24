// 1011 Beecrowd (Esfera)
// Por Commetz
#include <stdio.h>
// Incluindo a biblioteca matemática 
#include <math.h>

int main() {

    // Declarando variável de valor inteiro (raio)
    int r;
    // Declarando variáveis de valores decimais
    double pi, volume;
    // Lendo os valores de cada variável
    scanf("%d", &r);

    // Afirmando o valor de pi
    pi = 3.14159;
    // Calculando o valor do volume da esfera
    volume = 4.0/3.0 * pi * pow(r, 3);

    // Imprimindo o valor do volume da esfera conforme requisitado
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}
