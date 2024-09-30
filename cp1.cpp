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
};

tVertex vertices = NULL;

using namespace std;

int main(){
    
}