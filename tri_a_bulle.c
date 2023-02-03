#include<stdio.h>
void permutation(int *a,int *b )
{  
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int tri_a_bulle(int tab[],int taille,int *p){
   int i,j;
   p=tab;
   for(i=taille-1;i>0;i--){
        for(j=0;j<i;j++){
            
            if(*(p+j)>*(p+j+1)){
                permutation(p+j,p+j+1);
                
            }
        }
    }
    return 0;
}
int main()
{
    printf("hello");
    int tab[10];
    int i;
    int *p=tab;
    int n=sizeof(tab)/sizeof(tab[0]);
    for(i=0;i<n;i++){
       
        printf("\nn°%d :",n);
        scanf("%d",p+i);
        printf("%d",*(p+i));
    }
   
    tri_a_bulle(tab,n,p);
    
    for(i=0;i<n;i++){
        printf("\n n°%d: %d\n",i,*(p+i));
    }
    return 0;
}