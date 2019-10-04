#ifndef LINKEDLIST_H__
#define LINKEDLIST_H__

struct node{
    char* data;
    struct node* next;
};

typedef struct node node;

node*    ll_new_node();
node*    ll_add_next_node(node* current);
node*    ll_add_node_start(node* current);
void     ll_delete_node(node* current);
void     ll_delete_this_node(node* head, node* current);
void     ll_delete_middle_node(node* head, int position);
node*    ll_delete_first_node(node* head);
void     ll_delete_last(node* head);
void     ll_display(node* head);

#endif
