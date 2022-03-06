//
//  main.c
//  mai
//
//  Created by apple on 28/02/2022.
//

#include <stdio.h>
int main() {
//    int t;
//    scanf("%d",&t);
//    while (t>0){
//        int n,m=0,kt=1;
//        scanf("%d",&n);
//        if (n>101) kt=0;
//        int a[n];
//        for(int i=0;i<n;i++){
//            scanf("%d ",&a[i]);
//            printf("%d",i);
//            if (a[i]>1001) kt=0;
//            if (m<a[i] ) m=a[i];
//        }
//        if (kt==1) printf("%d\n",m);
//        for(int i=0;i<n;i++){
//            if (m==a[i] && kt==1 ) printf("%d ",i);
//        }
//        t--;
//        //printf("%d\n",kt);
//    }
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
         int tam=2*i-1;
         int dem=0;
         for(int j=1;2*j-1<=tam && dem<tam;j++){
             printf("%d",2*j-1);
         dem++;
    }
     for(int k=i-1;dem<tam;k--){
         printf("%d",2*k-1);
         dem++;
     }
     printf("\n");
    }
    
    return 0;
}
