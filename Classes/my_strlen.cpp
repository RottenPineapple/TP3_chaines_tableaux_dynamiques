/**
 * @ Author: LORD
 * @ Create Time: 2022-10-05 15:45:17
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-10-05 15:46:22
 * @ Description: retourne la longueur de la string en paramètre
 */

int my_strlen(char const *str)
{
    int i = 0;
    
    for (; str[i] != '\0'; i++);
    return (i);
}