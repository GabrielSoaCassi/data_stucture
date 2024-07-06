#include "iostream"
#include "LinkedList.h"

IntSLList::~IntSLList(){
    for (IntSLLNode *p; !isEmpty();){
        p = topo->proximo;
        delete topo;
        topo = p;
    }
}

void IntSLList::addToTopo(int el){
    /*i prefer alter this part adding a newNode because in the book
    is more complexity to understand when we don't know much about c/c++ syntax */
    IntSLLNode *newNode = new IntSLLNode(el,topo);
    topo = newNode;
    if (resto == 0)
        resto = topo;    
}

void IntSLList::addToResto(int el){
    if (resto != 0){
        resto->proximo = new IntSLLNode(el);
        resto = resto->proximo;   
    }
    else
    topo = resto = new IntSLLNode(el);
}

int IntSLList::deleteFromTopo(){
    int el = topo ->info;
    IntSLLNode *tmp = topo;
    if(topo == resto)
        topo = resto = 0;
    else 
        topo = topo->proximo;
        delete tmp;
        return el;
}


int IntSLList::deleteFromResto(){
    int el = resto->info;
    if(topo == resto){
        delete topo;
        topo = resto = 0;
    }
    else{
        IntSLLNode *tmp;
        for (tmp = topo; tmp->proximo != resto; tmp = tmp->proximo);
        delete resto;
        resto = tmp;
        resto->proximo = 0;
    }
    return el;
}

void IntSLList::deleteNode(int el){
    if(topo != 0)
       if(topo == resto && el == topo->info){
        delete topo;
        topo = resto = 0;
       }
       else if (el == topo->info){
        IntSLLNode *tmp = topo;
        topo = topo->proximo;
        delete tmp;
       }
    else{
        IntSLLNode *pred ,*tmp;
        for(pred = topo, tmp = topo->proximo;
            tmp != 0 && !(tmp->info == el);
            pred = pred->proximo, tmp = tmp->proximo);
        if(tmp != 0){
            pred->proximo = tmp->proximo;
            if(tmp == resto)
                resto = pred;
            delete tmp;
        }
            
    }
}


bool IntSLList::isInList(int el)const{
    IntSLLNode *tmp;
    for (tmp = topo; tmp != 0 && !(tmp->info == el); tmp = tmp->proximo);
    return tmp != 0;
}

int main()
{

    IntSLList lista;
    lista.addToTopo(12);

    if(lista.isInList(12)){
        std::cout <<"To Aqui em" << std::endl; 
    }
    else{
        std::cout <<"Não to nao"<< std::endl;
    }
    

    return 0;
}
