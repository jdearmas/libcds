#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"

node*
ll_new_node(){
    node* head = malloc(sizeof(node));
    head->data = "";
    head->next = NULL;
    return head;
}

node*
ll_add_next_node(node* current){
    node* next =  ll_new_node();
    current->next = next;
    return current;
}

node*
ll_add_node_start(node* current){
    node* head =  ll_new_node();
    head->next = current;
    return head;
}

void
ll_delete_node(node* current){
    node* temp = current->next;
    current->next = current->next->next;
    free(temp);
}

void
ll_delete_this_node(node* head, node* current){
    while ( head->next != current ){
        head = head->next;
    }
    ll_delete_node(current);
}

void
ll_delete_nth_node(node* head, int position){
    for( int i = 0; i < position; i++ ){
        if( head->next != NULL )
            head = head->next;
    }
    ll_delete_node(head);
}

node*
ll_delete_first_node(node* head){
    node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

void
ll_delete_last(node* head){
    struct node* temp = head;
    while(temp->next->next!=NULL){
          temp = temp->next;
    }
    temp->next = NULL;
}

void
ll_display(node* head){
    struct node *temp = head;
    printf("\n\nList elements are - \n");
    while(temp != NULL)
    {
        printf("%s --->",temp->data);
        temp = temp->next;
    }
}
