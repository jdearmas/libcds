#ifndef HASHTABLE_H__
#define HASHTABLE_H__

typedef struct {
    char* key;
    char* value;
} hash_entry;

typedef struct {
    int size;
    int count;
    hash_entry** entries;
} hash_table;


static hash_entry* hash_new_entry(char* key, char* value);
void hash_delete_entry(hash_entry* entry);
hash_table* hash_new_table();
void hash_delete_table(hash_table* table);

#endif
