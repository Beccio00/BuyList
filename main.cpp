#include <iostream>
#include "User.h"

using namespace std;

int main() {
    User person;

    map<string, Product*> list1;
    map<string, Product*> list2;

    list1.insert(make_pair("banana", new Product("banana", "frutta", 8)));
    list1.insert(make_pair("pasta", new Product("pasta", "primi", 2)));

    list2.insert(make_pair("ananas", new Product("ananas", "frutta", 1)));
    list2.insert(make_pair("pizza", new Product("pizza", "secondo", 4)));

    ShoppingList myList1(list1);
    ShoppingList myList2(list2);

    person.addList(&myList1);
    person.addList(&myList2);

    Product fagioli("fagioli", "legumi", 5);

    myList1.add(fagioli);

    myList1.remove("banana");


    myList1.remove("aragosta");

    person.printTotal(&myList2);

    myList2.modify( "pizza", "primo", 3, true);

    person.printTotal(&myList2);

    person.removeList(&myList1);

}
