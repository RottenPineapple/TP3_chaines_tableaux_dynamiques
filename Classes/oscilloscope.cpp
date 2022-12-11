/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-11-27 19:42:36
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-27 22:13:51
 * @ Description: affichage de valeurs
 */

#include "header.hpp"
#include <vector>

using namespace std;

bool my_getnbr(char chara)
{
    bool verif = false;

    if ((chara >= 48 && chara <= 57) || chara == '-')
        verif = true;
    else
        verif = false;
    return (verif);
}

void oscilloscope()
{
    char mesures[100] = {"CHANNELA 0 10 20 30 40 30 20 10 0 -10 -20 -30 -40 -30 -20 -10 0"};
    char str_temp[17][4];
    vector<int> int_tab;
    int j = 0;
    int k = 0;
    int index = 1;

    for (int i = 9; mesures[i] != '\0'; i++) {
        if (my_getnbr(mesures[i])) {
            str_temp[j][k] = mesures[i];
            k++;
        } else {
            j++;
            k = 0;
        }
    }
    for (int i = 0; i < 17; i++)
        int_tab.push_back(atoi(str_temp[i]));
    for (auto i = int_tab.cbegin(); i != int_tab.cend(); i++) {
        cout << "Valeur " << index << " : " << *i << endl;
        index++;
    }
    cout << endl;
}