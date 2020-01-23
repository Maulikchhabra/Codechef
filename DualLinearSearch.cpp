#include<stdio.h>
int main(){
int a[10],i,j,b;
printf("enter elements\n");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
/*for(i=0;i<10;i++){
  printf("%d",a[i]);
}*/
printf("enter the number u want to search\n");
scanf("%d",&b);
for(i=0;i<10;i++){
  if(a[i]==b)
  {printf("number found at ");
   printf("%d\n",i);
}

}
for(i=9;i>=0;i--){
  if(a[i]==b){
    printf("number found at ");
    printf("%d\n",i);
  }
}
return 0;
}
