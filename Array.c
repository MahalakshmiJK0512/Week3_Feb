#include <stdio.h>

int main() {
    // Write C code here
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the value:");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size;i++){
        printf("\nThe value of array in %d index is %d",i,arr[i]);
        
    }
    
    return 0;
}
//Sum of arrays//

#include <stdio.h>

int main() {
    // Write C code here
    int i,n,sum =0;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++){
        sum += arr[i];
        
    }
    printf("The sum of array value is %d\n",sum);
    
    return 0;
}
