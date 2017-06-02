// Shubhanshu Verma (SV)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

   int n,x;
   cin >> n >> x;

   int loc[n];
   int speed[n];
   int time[n];
   int mini,mini_index,mini_count;
   int i;
   
   for(i=0;i<n;i++){
    
        cin >> loc[i];
    
   }
   
   
   for(i=0;i<n;i++){
    
        cin >> speed[i];
    
   }

   for(i=0;i<n;i++){

      time[i] = abs(loc[i]-x)/speed[i];

   }

   mini = time[0];
   mini_index = 0;
   mini_count = 1;

   for(i=1;i<n;i++){

      if(time[i] < mini){

         mini = time[i];
         mini_index = i;
         mini_count = 1;

      }else if(time[i] == mini){

         mini_count++;

      }


   }


   if(mini_count > 1){

      cout << "-1" ;

   }else{

      cout << mini_index;

   }




   return 0;

}
