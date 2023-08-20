#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
{
    //solicitar altura ao usuário
    n = get_int("digite altura: ");
}
while (n < 1 || n > 8);

//loop para acicionar linhas
for (int i = 0; i < n; i++)
{
    //loop para espaço vazio e hashtag
    for (int j = n; j > 0; j--)
    {
        if (i < j - 1)
    {
        printf(" ");
    }
    else
    {
        printf("#");
    }
  }
  printf("\n");
 }
}
