#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zeros = 0;
   int ones = 0;
   int twos =0;

   for(int i=0;i<n;i++){
      if(arr[i] == 0) zeros++;
      else if(arr[i] == 1) ones++;
      else if(arr[i] == 1) twos++;
   }
   for(int i=0;i<n;i++){
      if(zeros){
         arr[i] = 0;
         zeros--;
      }
      else if(ones){
         arr[i] = 1;
         ones--;
      }     
      else{
         arr[i] = 2;
         twos--;
      } 

   }
}