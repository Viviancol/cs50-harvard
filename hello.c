#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //solicita nome ao usuário
    string nome = get_string("Qual é o seu nome? \n");
    printf("hello, %s \n", nome);
}
