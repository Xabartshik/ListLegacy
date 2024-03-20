
#include <iostream>
#include "ListLegacy.h"
#include <list>

using namespace std;

void main() {
    ListLegacy<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);

    // Копируем узел из первого списка
    Node<int>* node = list1.get_node(1);

    // Создаем второй список
    ListLegacy<int> list2{1 , 2, 3};

    list2.set_node(0, node);
    list1.print();
    list2.print();
}