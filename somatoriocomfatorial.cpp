#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
   long long soma = 0, fatorial = 1;

    cout << "Digite o limite superior do somatório (n):  ";
    cin >> n;

    for (int i= 1; i <= n; i++){
        fatorial *= i;
    soma += fatorial * i;
   }
    cout << "Resultado do somatório: " << soma << endl;
    cout << "Resultado do fatorial de " << n << " : " << fatorial << endl;
    return 0;
}
