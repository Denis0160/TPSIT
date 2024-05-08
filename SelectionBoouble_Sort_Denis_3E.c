/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int vettore[]={8,2,7,3,1};
   int dim=5;
   
    for(int i=0; i<dim-1;i++) {
      int min=i;
      for (int j=i+1;j<dim;j++) {
         if (vettore[j]<vettore[min])
            min=j;
      }
      int t=vettore[min];
      vettore[min]=vettore[i];
      vettore[i]=t;
    }

   for(int i=0;i<dim;i++) {
      printf("%d\n",vettore[i]);      
   }   
   
   int dim2=5;
   int vettore2[]={4,9,2,1,3};
   
    for(int i=0;i<dim2-1;i++){
        
    for(int k=0;k<dim2-1-i;k++) {
         if(vettore2[k]>vettore2[k+1]) {
          int temp=vettore2[k];
          vettore2[k]=vettore2[k+1];
          vettore2[k+1]=temp;
         }
    }
    }
         
    for(int i=0;i<dim2;i++){
    printf("\n%d",vettore2[i]);
    }
 }




