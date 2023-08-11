#include <stdio.h>
#include <stdlib.h>

int main(){
     int n=1230,i=0;
     int tab[i];
     while((n/10)>0){
        int q=n/10;
        int r=n%10;
        n=q;
        tab[i]=r;
        i++;
     }
      int tab2[i+1];
      for(int j=0;j<=i+1;j++){
        if(j<(i+1))tab2[j]=tab[j];
        if(j==i+1)tab2[j]=nb;
      }
      int s1=0,s2=0;
      for(int j=0;j<(i+2);j++){
         if(j<(i+1)/2)s1+=tab2[j];
         if(j>=(i+2)/2)s2+=tab2[j];
      }
     return 0;
}
