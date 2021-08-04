#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> t;

    t.insert(5);
    t.insert(12);
    t.insert(3);
    t.insert(5); // Não adiciona, pois não pode haver elementos repitidos

    set<int>::iterator it;
    for (it = t.begin(); it != t.end(); it++) {
        cout << *it << endl;
    }

    // begin()
    // end()
    // empty()
    // size()
    // clear()
    // find()
}