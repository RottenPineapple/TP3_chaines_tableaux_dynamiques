/**
 * @ Author: LORD
 * @ Create Time: 2022-05-12 14:17:42
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-28 15:33:14
 * @ Description: main file
 */

#include "header.hpp"
#include <stdlib.h>

using namespace std;

int main(int ac, char **av)
{
    if (ac != 2) {
        return (84);
    } else {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            cout << "Choix exo : 1, 2" << endl;
        } else {
            switch (av[1][0]) {
                case '1':
                    capitalize_decapitalize();
                    break;
                case '2':
                    nb_occurences();
                    break;
                case '3':
                    show_bts();
                    cout << endl;
                    show_bts2();
                    cout << endl;
                    break;
                case '4':
                    extension();
                    break;
                case '5':
                    oscilloscope();
                    break;
                case '6':
                    temperature();
                    break;
                case '7':
                    pseudo();
                    break;
                case '8':
                    nom_prenom();
                    break;
                default:
                    break;
            }
        }
    }
    return (0);
}