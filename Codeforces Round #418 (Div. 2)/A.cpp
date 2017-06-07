// Shubhanshu Verma (SV)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

   int n,k;
   cin >> n >> k;

   int seq1[n];
   int seq2[k];
   int i;
   int flag = 0;

   for(i=0;i<n;i++){

      cin >> seq1[i];

   }

   for(i=0;i<k;i++){

      cin >> seq2[i];

   }

   if(k > 1){

      cout << "Yes";

   }else{

      for(i=0;i<n;i++){

         if(seq1[i] == 0){

            seq1[i] = seq2[0];
            break;

         }


      }

      flag = 0;

      for(i=1;i<n;i++){

         if(seq1[i] < seq1[i-1]){

            flag = 1;
            break;

         }


      }

      if(flag == 0){

         cout << "No";

      }else{

         cout << "Yes";

      }


   }
   


   return 0;

}
