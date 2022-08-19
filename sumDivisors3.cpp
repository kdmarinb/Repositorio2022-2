//Programa que lee un número entero positivo desde la consola
//e imprime la suma de los números divisibles por 3
//y menores o iguales a ese número leído

#include <iostream>

int main (int argc, char **argv)
{
   int m;
   int sum = 0;

    std::cout << "Por favor, escriba un numero entero positivo: \n";
    std::cin >> m;
    std::cout << "La suma de los números divisibles por tres menores o iguales a" " " << m << " " "es:" "\n";

    for (int n = 1; n <= m; n++)
    {
        if (n%3 == 0){
            sum += n;
        }

    }
    std::cout << sum << " ";

    return 0;
}
