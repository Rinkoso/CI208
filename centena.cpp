/*Escreva um programa que leia uma seqüência números inteiros por meio do teclado (até
que seja digitado 0) e, para cada um dos números, mostre seu dígito das centenas. Este valor deve
ser obtido através da função centena, que recebe como parâmetro um número inteiro n e retorna o
dígito das centenas em n.*/
#include <iostream>
#define Parametrodedivdecentena 100
using namespace std;
int centena (int n)
{
    return (n/Parametrodedivdecentena);
}
int main()
{
    int n, op;
    cin >> n;
    while (n != 0)
    {
        n = centena (n);
        cout << n << endl;
        cin >> n;
    }
    return 0;
}
