//
// Created by Riccardo Becciolini on 15/09/20.
//

#include "BuyList.h"

void BuyList::add(Product &p) {
    bool inList = false;
    for(auto& it : list){
        if(it.first == p.getName()) {
            cout << "L'elemento è già nella lista" << endl;
            inList = true;
        }
    }
    if(!inList) {
        list.insert(make_pair(p.getName(), &p));
        total += p.getQuantity();
    }

}

void BuyList::remove(string& n) {
    auto it = list.find(n);

    if(it != list.end()) {
        total -= it->second->getQuantity();
        list.erase(it);
    } else
        cout << "Elemento non trovato" << endl;


}

void BuyList::modify(string &pr, string ty, int q, bool a) {
    auto it = list.find(pr);

    if(it != list.end()){
        if(a) {
            total -= it->second->getQuantity();
            total += q;
        }

        it->second->setType(ty);
        it->second->setQuantity(q);
        it->second->setAcquired(a);
    }
}
