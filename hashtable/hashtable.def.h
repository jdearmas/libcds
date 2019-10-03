typedef struct {
    char* key;
    char* value;
} hash_entry;

typedef struct {
    int size;
    int count;
    hash_entry** entries;
} hash_table;

