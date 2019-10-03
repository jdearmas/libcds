#include <stdlib.h>
#include <string.h>

#include "hashtable.h"

static hash_entry*
hash_new_entry(char* key, char* value) {
    hash_entry* entry = malloc(sizeof(hash_entry*));
    entry->key = strdup(key);
    entry->value = strdup(value);
    return entry;
}

void
hash_delete_entry(hash_entry* entry) {
    free(entry->key);
    free(entry->value);
    free(entry);
    return;
}

hash_table*
hash_new_table() {
    hash_table* table = malloc(sizeof(hash_table));
    table->size = 128;
    table->count = 0;
    table->entries = calloc((size_t)table->size,sizeof(hash_entry*));
    return table;
}

void
hash_delete_table(hash_table* table) {
    for(int i = 0; i < table->size; i++){
        hash_entry* entry = table->entries[i];
        if (entry != NULL) hash_delete_entry(entry);
    }
    free(table->entries);
    free(table);
}
