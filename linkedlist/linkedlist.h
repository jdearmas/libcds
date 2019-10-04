#ifndef LINKEDLIST_H__
#define LINKEDLIST_H__

struct node{
    char* data;
    struct node* next;
};

typedef struct node node;

node*    ll_new_node();
static node*    ll_add_next_node(node* current);
static node*    ll_add_node_start(node* current);
static void     ll_delete_node(node* current);
static void     ll_delete_this_node(node* head, node* current);
static void     ll_delete_nth_node(node* head, int position);
static node*    ll_delete_first_node(node* head);
static void     ll_delete_last(node* head);
void     ll_display(node* head);

#endif
