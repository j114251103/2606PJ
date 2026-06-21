// main 分支 - commit: c1_init
#include <stdio.h>
#include <stdlib.h>

typedef struct Container {
    int id;
    struct Container* next;
} Container;

// 新增貨櫃到鏈結串列
void add_container(Container** head, int id) {
    Container* new_node = (Container*)malloc(sizeof(Container));
    new_node->id = id;
    new_node->next = *head;
    *head = new_node;
}