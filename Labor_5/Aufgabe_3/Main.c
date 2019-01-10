#include <stdio.h>
#include <stdlib.h>

struct listenelement {
    double x;
    double y;
    struct listenelement* ptr;
};

struct listenelement* schaffe_listenelemente(void) {
    struct listenelement* root = (struct listenelement*) malloc(sizeof(struct listenelement));
    root->x = 3.1;
    root->y = 3.2;
    root->ptr = (struct listenelement*) malloc(sizeof(struct listenelement));
    root->ptr->x = 7.4;
    root->ptr->y = 1.8;
    root->ptr->ptr = NULL;
    return root;
}

void drucke(const struct listenelement* root) {
    unsigned int i = 0;
    while(root != NULL) {
        printf("Nb. %u\n", i++);
        printf("\tx: %lf\n", root->x);
        printf("\ty: %lf\n", root->y);
        root = root->ptr;
    }
}

int main(void) {
    struct listenelement* root = schaffe_listenelemente();
    drucke(root);
    return 0;
}
