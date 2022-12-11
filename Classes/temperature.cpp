/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-11-27 22:28:23
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-27 22:49:00
 * @ Description:
 */

#include "header.hpp"
#include <vector>

using namespace std;

void temperature()
{
    float moyenne = 0;
    float temp_tab[] = {16.5, 17.5, 18, 18.25, 19.5, 21.3, 20.9, 21.15};
    vector<float> temp_values;

    for (int i = 0; i < 8; i++)
        temp_values.push_back(temp_tab[i]);
    for (auto i = temp_values.cbegin(); i != temp_values.cend(); i++)
        moyenne += *i;
    moyenne /= temp_values.size();
    cout << moyenne << endl;
}