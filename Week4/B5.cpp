 bool isPrime (int number)
 {
     int r=sqrt(number);
     if(number<=1) return false;
     if(number==2||number==3) return true;
     if(number%2==0) return false;
     for(int i=2; i<=r; i++){
         if(number%i==0) return false;
     }
     return true;
 }
