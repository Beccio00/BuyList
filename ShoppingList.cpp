//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "ShoppingList.h"

ShoppingList::ShoppingList(map<string, Product *> l) : list(l), total(0) {

    for(auto it : list)
        total += it.second->getQuantity();

}

void ShoppingList::add(Product &p) {
    bool inList = false;
    for(auto& it : list){
        if(it.first == p.getName()) {
            cout << "L'elemento " << p.getName()<< "  è già nella lista" << endl;
            inList = true;
        }
    }
    if(!inList) {
        cout << "L'elemento " << p.getName() << " è stato inserito" << endl;
        list.insert(make_pair(p.getName(), &p));
        total += p.getQuantity();
    }

}

void ShoppingList::remove(string n) {
    auto it = list.find(n);

    if(it != list.end()) {
        cout << "L'elemento " << n << " è stato eliminato" << endl;
        total -= it->second->getQuantity();
        list.erase(it);
    } else
        cout << "L'emento " << n << " non trovato" << endl;


}

void ShoppingList::modify(string pr, string ty, int q, bool a) {
    auto it = list.find(pr);

    if(it != list.end()){
        if(a)
            total -= it->second->getQuantity();

        else if(it->second->getQuantity() != q){
            total -= it->second->getQuantity();
            total += q;
        }

        it->second->setType(ty);
        it->second->setQuantity(q);
        it->second->setAcquired(a);
    }
}


