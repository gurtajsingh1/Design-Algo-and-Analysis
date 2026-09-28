#include<stdio.h>

  ///declared the items of the array

struct Item{
int weight;
int profit;
float pwr;
  };

int main(){

struct Item a[] =  {
  {10 ,40 , 4},
  {10 ,30 , 3},
  {20 , 60 , 3}
};

int n = 3;
int capacity = 20;
int totalprofit = 0;

for(int i = 0 ; i< n ; i++){
  a[i].pwr = (float)a[i].profit/a[i].weight;
}

for(int i = 0 ; i< n-1 ; i++){
  for(int j = i+1 ; j< n ;j++){
    if(a[i].pwr < a[j].pwr){
     struct Item temp = a[i];
     a[i] = a[j];
     a[j] = temp;

    }
  }
}
for(int i =0 ; i< n ; i++){
  if(capacity <= a[i].weight){
    capacity -= a[i].weight;
    totalprofit += a[i].profit;

  }
   else{
totalprofit += a[i].pwr * capacity;
capacity = 0;
break;
         }
        
}
 printf("%d" , totalprofit );
 return 0;
}