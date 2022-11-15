/**
 * @ Author: LORD
 * @ Create Time: 2022-10-19 11:29:13
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-11-14 16:34:12
 * @ Description: heehee
 */

#include "header.hpp"

void show_bts()
{
    int i = 0;
    const char *adr_chaine = {"BtsSNIR2"};

    for (; i < 3; i++)
        cout << adr_chaine[i];
    i = 0;
    cout << endl;
    while (adr_chaine[i] != '\0')
        cout << adr_chaine[i++];
    cout << endl;
}

void show_bts2()
{
    int i = 0;
    const char *adr_chaine = {"BtsSNIR2"};

    for (; i < 3; i++)
        cout << *(adr_chaine + i);
    i = 0;
    cout << endl;
    while (*(adr_chaine + i) != '\0')
        cout << *(adr_chaine + i++);
    cout << endl;
}

void show_bts3()
{
    int i = 0;
    const char *adr_chaine = {"BtsSNIR2"};
    char const *copie = adr_chaine;

    cout << endl;
    while (*copie != '\0')
        cout << copie++;
    cout << endl;
}