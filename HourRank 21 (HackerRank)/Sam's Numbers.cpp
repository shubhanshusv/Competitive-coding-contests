// Shubhanshu Verma (SV)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long int sam_array(long int s, int m, int d, int prev);

int main(){

   long int s;
   int m,d;

   cin >> s >> m >> d;

   long int count = 0;

   int i;

   for(i=1;i<=m;i++){

      count += sam_array(s-i,m,d,i);
      //cout << count << " ";
      count = count % 1000000009;

   }

   cout << count;

   return 0;

}

long int sam_array(long int s, int m, int d, int prev){

   if(s <= 0){

      if(s == 0){

         return 1;

      }else{

          return 0;
      }

   }else{

      int i;
      long int count = 0;
      int start;
      int end;

      if(prev - d <= 0){

         start = 1;

      }else{

         start = prev - d;

      }

      if(prev + d > m){

         end = m;

      }else{

         end = prev + d;

      }

      for(i=start; i<= end;i++){

         count += sam_array(s-i,m,d,i);
         count = count % 1000000009;

      }


      return count;



   }



}
