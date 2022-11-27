/**
 * @ Author: LORD
 * @ Create Time: 2022-10-04 15:36:57
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-11-16 14:44:49
 * @ Description: capitalize and decapitalize
 */

#include "header.hpp"

void capitalize_decapitalize()
{
    char a;

    std::cout << "Tapez un caractère : ";
    std::cin >> a; 
    if (a >= 97 && a <= 122) {
        a -= 32;
        std::cout << "Vous avez saisi une minuscule." << std::endl;
        std::cout << "La majuscule correspondante est " << a;
    } else if (a >= 65 && a <= 90) {
        a += 32;
        std::cout << "Vous avez saisi une majuscule." << std::endl;
        std::cout << "La minuscule correspondante est " << a;
    } else {
        std::cout << "Vous n'avez pas saisi une lettre" << std::endl;     
    }
}