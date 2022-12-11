/**
 * @ Author: vlagard@btslivh.eu
 * @ Create Time: 2022-11-27 22:50:50
 * @ Modified by: Valentin LAGARD
 * @ Modified time: 2022-11-28 15:36:15
 * @ Description:
 */

#include "header.hpp"
#include <vector>
#include <time.h>

using namespace std;

void pseudo()
{
    vector<int> vint;

    srand(time(0));
    cout << "Contenu de \"Vint\" : ";
    for (int i = 0; i < 10; i++) {
        vint.push_back(rand() % 10 + 1);
        cout << vint.at(i) << " ";
    }
    cout << endl << "---------" << endl;
    cout << "Contenu de \"Vint\" après multiplication : ";
    for (int i = 0; i < vint.size(); i++) {
        vint[i] = vint[i] * 15;
        cout << vint.at(i) << " ";
    }
    cout << endl << "---------" << endl;
    cout << "Suppression de : ";
    for (int i = 0; i < 5; i++) {
        cout << vint.back() << " ";
        vint.pop_back();
    }
    cout << endl << "---------" << endl;
    cout << "Contenu de \"Vint\" après suppression : ";
    for (auto i = vint.cbegin(); i != vint.cend(); i++)
        cout << *i << " ";
    cout << endl << "---------" << endl;
    cout << "Contenu de \"Vint\" après modif : ";
    for (auto i = vint.cbegin(); i != vint.cend(); i++)
        cout << *i + 10 << " ";
    cout << endl;
}