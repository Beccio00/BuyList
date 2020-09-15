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

void BuyList::remove(Product& p) {
    list.erase(p.getName());


}
