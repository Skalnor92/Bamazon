#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { clothes, electronics, tools, toys } category;
typedef struct {
int itemnum;
category category;
char name[MAX_ITEM_CHARS];
char size;
int quantity;
double cost;
int onsale;
} item;

static item *db[MAX_ITEMS];
static item *purchased[MAX_PURCHASE];
static int purchased_items = 0;

int read_db(char *filename);
int write_db(char *filename);
