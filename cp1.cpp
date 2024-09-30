#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<set>

typedef long long ll;

#define DIM 2 //Defining dimension as 2
typedef ll tPoint[DIM]; //Defining point as an array of 2 long long integers

typedef struct tVertexStructure *tVertex;

struct tVertexStructure{
    int vNumber;
    tPoint coords;
    bool ear;
    tVertex next, prev;
    //TODO: Add incident edge
};

tVertex vertices = NULL;

#define NEW(p, type)\
    if((p = (type*)malloc(sizeof(type))) == NULL){\
        fprintf(stderr, "NEW: Out of memory\n");\
        exit(EXIT_FAILURE);\
    }

#define ADD(head, p)\
    if (head == NULL){\
        p->next = p;\
        p->prev = p;\
        head = p;\
    }\
    else{\
        p->next = head;\
        p->prev = head->prev;\
        head->prev->next = p;\
        head->prev = p;\
    }   

#define FREE(p) if(p) {free((char*)p); p = NULL;}
    
using namespace std;

int main(){

    
}