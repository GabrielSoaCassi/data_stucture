// DoublyLinkedList.h

// lista Duplamente ligada para armazenar inteiro

#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

template <class T>
class DLLNode{
    public:
        DLLNode(){
            proximo = prev = 0;
        }
        DLLNode(const T& el, DLLNode *n = 0, DLLNode *p = 0){
            info = el; proximo = n; prev = p;
        }
        T info;
        DLLNode * proximo, *prev;
};

template <class T>
class DoublyLinkedList{
    public:
        DoublyLinkedList(){
            topo = resto = 0;
        }
    void addToDLLResto (const  T&);
    T deleteFromDLLResto();
    protected:
    DLLNode<T> *topo , *proximo;
};
template <class T>
void DoublyLinkedList<T>::addToDLLResto(const T& el){
    if(resto != 0){
        resto = new DLLNode<T>(el,0,resto);
        resto->prev->proximo = resto;
    }
    else topo = resto = new DLLNode<T>(el);
}

template <class T>
T DoublyLinkedList<T>::deleteFromDLLResto(){
    T el = resto->info;
    if(topo == resto){
        delete topo;
        topo = resto = 0;
    }
    else{
        resto = resto->prev;
        delete resto->proximo;
        resto->proximo = 0; 
    }
    return el;
}
#endif