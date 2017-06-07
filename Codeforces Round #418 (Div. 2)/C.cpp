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

   int n,i;
   cin >> n;

   string s;

   cin >> s;

   int alpha[26];

   for(i=0;i<26;i++){

      alpha[i] = 0;

   }

   for(i=0;i<n;i++){

      alpha[s[i] - 97]++;

   }

   long int q;
   cin >> q;

   int m;
   char c;

   int track[1000];
   int count,temp,j;

   for(i=0;i<q;i++){

      cin >> m >> c;

      if(alpha[c - 97] == 0){

         cout << m << endl;


      }else{

         count = 0;
         temp = 0;
         j = 0;

         while(j != n){

            temp = 0;
            while(s[j] != c && j != n){

               temp--;
               j++;

            }

            track[count] = temp;
            count++;

            if(j == n){

               break;

            }
            temp = 0;
            while(s[j] == c && j != n){

               temp++;
               j++;

            }

            track[count] = temp;
            count++;


         }

         for(i=0;i<count;i++){

            cout << track[i] << " ";


         }







      }





   }

   return 0;

}
