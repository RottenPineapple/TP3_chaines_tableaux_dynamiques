/**
 * @ Author: LORD
 * @ Create Time: 2022-11-08 12:01:50
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-11-14 16:35:10
 * @ Description: extension
 */

#include "header.hpp"

int get_alpha(char const *str)
{
    int nb = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) {
            nb = 0;
        } else {
            nb = -1;
        }
    }
    return (nb);
}

void extension()
{
    int j = 0;
    char choix;
    bool verif = false;
    char extension = new char[5];
    char *str = new char[my_strlen(str) * sizeof(char) + 1];

    cout << "Entrez h pour avoir de l'aide !" << endl;
    do {
        switch (choix) {
        case 'h':
            cout << "Entrez c pour continuer, q pour quitter :)" << endl;
            break;
        case 'c':
            cout << "Quelle extension souhaitez vous vérifier ?" << endl;
            cin >> extension;
            if (get_alpha(extension) == 0) {
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] == '.' && extension[j] != '\0' && verif != false) {
                        if (str[i] == extension[j]) {
                            j++;
                            verif = true;
                        } else {
                            verif = false;
                        }
                    }
                }
            } else {
                break;
            }
            if (verif == true) {
                cout << "L'extension est bien un(e) : " << extension << endl;
            } else {
                break;
            }
            break;
        default:
            cout << "nan :(" << endl;
            break;
        }
    } while (choix != 'q');
}