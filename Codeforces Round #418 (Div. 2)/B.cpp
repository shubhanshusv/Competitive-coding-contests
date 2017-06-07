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
   cin >> n;

   int seq1[n];
   int seq2[n];
   int permu[n];
   int account1[n+1];
   int account2[n+1];
   int account[n+1];
   int i;
   int flag = 0;
   int temp1,temp;
   for(i=1;i<=n;i++){

      account[i] = 0;
      account1[i] = 0;
      account2[i] = 0;

   }



   for(i=0;i<n;i++){

      cin >> seq1[i];

      account[seq1[i]] = 1;
      account1[seq1[i]]++;

   }

   for(i=0;i<n;i++){

      cin >> seq2[i];

      account[seq2[i]] = 1;
      account2[seq1[i]]++;

   }

  
   int index[5];
   int index_count = 0;


   for(i=0;i<n;i++){

      if(seq1[i] != seq2[i]){

      	index[index_count] = i;
      	index_count++;

      }

   }

   if(index_count == 1){

   		flag = 0;

	   for(i=1;i<=n;i++){

	      if(account[i] == 0){

	      	seq1[index[0]] = i;
	      	flag = 1;
	      	break;

	      }

	   }

	   if(flag == 0){

	   		temp1 = min(seq1[index[0]],seq2[index[0]]);

	   		if(temp1 != 1){

	   			temp1--;
	   			seq1[index[0]] = temp1;

	   		}else{

	   			temp1 = max(seq1[index[0]],seq2[index[0]]);

	   			if(temp1 != n){

		   			temp1++;
		   			seq1[index[0]] = temp1;

		   		}else{

		   			temp1--;
		   			seq1[index[0]] = temp1;

		   		}

	   		}


	   }

	   for(i=0;i<n;i++){

	      cout << seq1[i] << " ";

	   }

   }else{

   		for(i=1;i<=n;i++){

   			if(account1[i] == 2){

   				temp = i;

   			}

   		}

   		if(seq1[index[0]] == temp){

   			seq1[index[0]] = seq2[index[0]];

   		}else{

   			seq1[index[1]] = seq2[index[1]];

   		}

   		for(i=0;i<n;i++){

	      cout << seq1[i] << " ";

	   }




   }




   return 0;

}
