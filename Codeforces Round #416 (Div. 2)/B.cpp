//Shubhanshu Verma (SV)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

   int n,m;
   cin >> n >> m;

   int num[n];

   int i,j;
   int l,r,x;
   int count;

   for(i=0;i<n;i++){

      cin >> num[i];

   }

   for(i=0;i<m;i++){

      cin >> l >> r >> x;

      if(l == 1 && r == n){

         if(num[x-1] == x){

            cout << "Yes" << endl;

         }else{

            cout << "No" << endl;

         }

      }else{

            count = 0;

            for(j=l-1;j<r;j++){

               if(num[j] < num[x-1]){

                  count++;


               }

            }




            if(l + count == x){

               cout << "Yes" << endl;


            }else{

               cout << "No" << endl;


            }






      }


   }



      return 0;

}
