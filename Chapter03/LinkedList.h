// intSLList.h

// lista singularmente ligada para armazenar inteiro

#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST
class IntSLLNode
{
public:
    int info;
    IntSLLNode *proximo;

    IntSLLNode()
    {
        proximo = 0;
    }

    IntSLLNode(int i, IntSLLNode *entrada = 0)
    {
        info = i;
        proximo = entrada;
    }
};

class IntSLList{
    public:
        IntSLList(){
            topo = resto = 0;
        }
        ~IntSLList();
        
        int isEmpty(){
            return topo == 0;
        }

        void addToTopo(int);
        void addToResto(int);
        int deleteFromTopo();
        int deleteFromResto();
        void deleteNode(int);
        bool isInList(int) const;

    private:
        IntSLLNode *topo , *resto;
};
#endif