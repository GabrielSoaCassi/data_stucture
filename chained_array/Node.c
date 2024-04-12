#include <stdio.h>
#include <stdlib.h>
// Node is a form to create a list without define a size for it
// the logical about add thing to node is  Have a structure Called usually Node with two properties 
// a data and next , data could be anything next need be a Node type ex 
 struct Node{
    int data;
    struct Node* next;
};


// now to push some value to our node
// we need a pointer for a memory address and that need be  NULL because it doesn't have any value previously
// now in our function we receive de reference to memory addres in our function it's a pointer to pointer because the head is a pointer e not a value
// and a new value we like to add in our list.
// and the algorithm for push something into this is :
// create a new pointer for node using malloc not  a null pointer because we need to guard the addres for the head pointer]
// pass the value for the new pointer and the next value receive the reference to head pointer *
// and the head pointer receive a new_node
void push(struct Node** head_ref , int newvalue){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    printf("this is new reference i create to another new value %p \n",new_node);
    new_node->data = newvalue;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
    printf("this is my head_ref after receive new node %p \n",head_ref);
}

void printList(struct Node* node){
    while(node != NULL){
        printf("Elemento : %d\n",node->data);
        node = node->next;
    }
}

int main(){
    struct Node* head= NULL;
    printf("That my addres memory i guard to %p \n",&head);
    push(&head,23);
    push(&head,24);
    printList(head);

    getchar();
    return 0;
}
