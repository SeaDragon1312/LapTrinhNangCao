void printArrow(int n, bool left)
{
    if(left){
        for(int i=n; i>=1; i--){
            cout<<string(i-1,' ')<<string(i,'*')<<endl;
        }
        for(int i=2; i<=n; i++){
            if(i<0) i=-i;
            cout<<string(i-1,' ')<<string(i,'*')<<endl;        }
    }
    else{
        for(int i=n; i>=1; i--){
            cout<<string(2*(n-i), ' ')<<string(i,'*')<<endl;
        }
        for(int i=2; i<=n; i++){
            cout<<string(2*(n-i), ' ')<<string(i,'*')<<endl;
        }
    }
}
