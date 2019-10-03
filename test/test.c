#include "hashtable.h"
#include <stdio.h>

int main(){
    hash_table* table = hash_new_table();
    hash_delete_table(table);
    return 0;
}
