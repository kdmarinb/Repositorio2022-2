
//Programa que lee un número entero positivo desde la consola e
//imprime los numeros divisibles por 3
//y menores o iguales a ese número que se leyó

#include <iostream>

int main (int argc, char **argv)
{
    int m;
    std::cout << "Por favor, escriba un numero entero positivo: \n";
    std::cin >> m;
    std::cout << "Los números divisibles por tres menores o iguales a" " " << m << " " "son:" "\n";

    for (int n = 1; n <= m; n++)
    {
        if (n%3 == 0){

            std::cout << n << " ";
        }
    }
        std::cout << "\n";

    return 0;
}
