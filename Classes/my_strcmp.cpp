/**
 * @ Author: LORD
 * @ Create Time: 2022-10-19 14:30:23
 * @ Modified by: vlagard@btslivh.eu
 * @ Modified time: 2022-10-19 14:45:06
 * @ Description:
 */

int my_strcmp(char *str1, char *str2)
{
    int nb = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = i; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                nb = 0;
            } else if (str1[i] > str2[j]) {
                nb = 1;
            } else {
                nb = -1;
            }
        }
    }
    return (nb);
}