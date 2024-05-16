#include<stdio.h>
#include<stdlib.h>

int main(){

int a[1000],i,j,b,n;

system("COLOR 2");

printf("How Many Numbers \n");
scanf("%d",&n);
printf("Enter The Numbers\n");

//for loop for get numbers
for(i=0;i<n;i++){
scanf("%d",&a[i]);


}

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){

       if(a[i]>a[j]){

        b=a[i];
        a[i]=a[j];
        a[j]=b;


       }


    }
}


printf("Sorted Numbers In Ascending Order\n ");

for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}

return 0;
}
