//Programa que lea de la pantalla un número entero
//positivo e imprima un cuadrado con ese número de = por cada lado

#include <iostream>

int main (int argc, char **argv)
{
    int l;

    std::cout << "Por favor, digite un numero entero positivo: \n";
    std::cin >> l;
    std::cout << "El cuadrado de tamaño" << " " << l << " " <<"es: \n";

    for (int n = 0; n<l; n++) {
        for (int m = 0; m<l; m++) {
            if ((n == 0) || (m == 0) || (n == l-1) || (m == l-1)) {
                std::cout << "#";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout <<"\n";
    }
    return 0;
}
