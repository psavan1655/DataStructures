//
//  main.c
//  insertionSort
//
//  Created by Savan Patel on 01/01/20.
//  Copyright © 2020 Savan Patel. All rights reserved.
//

#include <stdio.h>

int main(){
    int a[10],i,n,j,temp,flag;
    
    printf("Enter the number of elements you want to enter => ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of a[%d] => ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        flag = 1;
        temp = a[i];
        for(j=i+1;j<n;j++){
            printf("%d   %d\n",i,j);
            if(a[i] > a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
                flag = 0;
            }
        }
        
        if(flag==1){
            break;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
