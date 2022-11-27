/**
 * @ Author: LORD
 * @ Create Time: 2022-10-19 11:29:13
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-11-16 14:46:17
 * @ Description: heehee
 */

#include "header.hpp"

void show_bts()
{
    int i = 0;
    const char *adr_chaine = {"BtsSNIR2"};

    for (; i < 3; i++)
        std::cout << adr_chaine[i];
    i = 0;
    std::cout << std::endl;
    while (adr_chaine[i] != '\0')
        std::cout << adr_chaine[i++];
    std::cout << std::endl;
}

void show_bts2()
{
    int i = 0;
    const char *adr_chaine = {"BtsSNIR2"};

    for (; i < 3; i++)
        std::cout << *(adr_chaine + i);
    i = 0;
    std::cout << std::endl;
    while (*(adr_chaine + i) != '\0')
        std::cout << *(adr_chaine + i++);
    std::cout << std::endl;
}