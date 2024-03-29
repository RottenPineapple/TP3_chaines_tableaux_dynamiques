/**
 * @ Author: LORD
 * @ Create Time: 2022-11-08 12:01:50
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-27 21:54:35
 * @ Description: extension
 */

#include "header.hpp"

int extension()
{
    int i = 0;
    int j = 0;
    bool verif_dot = false;
    bool verif_ext = false;
    char *extension = new char[5];
    char *str = new char[10];

    std::cout << "Quelle extension souhaitez-vous vérifier ?" << std::endl;
    std::cin >> extension;
    if (my_strlen(extension) > 5)
        return (84);
    std::cout << "Quel fichier souhaitez-vous vérifier ?" << std::endl;
    std::cin >> str;
    for (int k = 0; str[k] != '\0' && verif_dot != true; k++) {
        if (str[k] == '.')
            verif_dot = true;
    }
    if (verif_dot != true) {
        std::cout << "Le fichier ne contient pas d'extension." << std::endl;
        return (84);
    }
    for (; str[i] != '.'; i++);
    i++;
    for (; str[i] != '\0'; i++) {
        if (extension[j] == str[i]) {
            verif_ext = true;
        } else {
            verif_ext = false;
            i = my_strlen(str);
        }
        j++;
    }
    if (verif_ext == true) {
        std::cout << "L'extension correspond bien au fichier que vous avez entré. :)" << std::endl;
    } else {
        std::cout << "L'extension ne correspond pas. :'(" << std::endl;
    }
    return (0);
}