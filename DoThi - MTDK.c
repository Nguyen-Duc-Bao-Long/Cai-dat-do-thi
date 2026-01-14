#include<stdio.h>

#define N 11 //Do thi 11 dinh
int Matrix[N+1][N+1];

//Khoi tao ma tran
void createMatrix(){
    for (int i=1; i <= N; i++){
        for (int j=1; j <= N; i++){
            Matrix[i][j] = 0;
        }
    }
}

//Them canh (trong so = 1)
void addEdges(int i, int j){
    Matrix[i][j] = 1;
    Matrix[j][i] = 1;
}

//In ra ma tran
void printMatrix() {
    printf("Ma tran:\n");
    for(int i=1; i <= N; i++) {
        for(int j=1; j <= N; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}

int main (){
    createMatrix;
    addEdges(1,2);
    addEdges(1,6);
    addEdges(1,7);
    addEdges(1,8);
    addEdges(1,9);
    addEdges(1,10);
    addEdges(2,3);
    addEdges(2,11);
    addEdges(3,4);
    addEdges(4,5);
    addEdges(4,6);
    addEdges(5,6);
    addEdges(10,11);

    printMatrix();
    return 0;
}