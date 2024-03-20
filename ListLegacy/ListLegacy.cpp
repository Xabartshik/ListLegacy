
#include <iostream>
#include "ListLegacy.h"
#include <list>

using namespace std;

void main() {
    // Создание списка с помощью конструктора по умолчанию
    ListLegacy<int> list1;
    // Добавление элементов в список
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    ListLegacy<int> list2 = list1;
    // Печать списка
    list1.print();
    list2.print();
    list1.merge(list2, false);
    cout << list1.to_string() << endl;
    list2.print();
    list2.insert(0, 10);
    list2.print();
    list2.insert(0, list1, false);
    list2.print();
    list1.print();
    list1.pop_back();
    list1.pop_front();
    list1.print();
    list2.sort();
    list2.print();
    list2.unique();
    list2.print();
    cout << list2[1] << endl;
    list2[1] = 100;
    cout << list2[1] << endl;
}