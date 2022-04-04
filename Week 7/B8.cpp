int** transpose(int** matrix, int nRows, int nCols){
    int **a = new int *[nCols];
    for(int i=0; i<nCols; i++){
        a[i] = new int [nRows];
    }
    for(int i=0; i<nCols; i++){
        for(int j=0; j<nRows; j++){
            a[i][j]=matrix[j][i];
        }
    }
    return a;
}