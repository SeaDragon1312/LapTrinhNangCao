double* getSquare (double number){
    double *square = new double (number);
    *square = (*square)*(*square);
    return square;
}