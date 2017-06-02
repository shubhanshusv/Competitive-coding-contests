#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

string r1,r2;

int wall1[100000];
int wall2[100000];
int final_wall[100000];

int main() {

	int t;
   	cin >> t;

   	int n;
   	int i,j,k;
   	int count1 = 0;
   	int count2 = 0;
   	int flag = 0;
   	int mini;
   	int t1,t2;
   	int count = 0;
   	int f = 0;
   	int x;

   	int u,l;


   	for(i=0;i<t;i++){

   		cin >> n;

   		cin >> r1 >> r2;

   		count1 = 0;

   		for(j=0;j<n;j++){

   			if(r1[j] == '*'){

   				wall1[count1] = j;
   				count1++;

   			}

   		}

   		count2 = 0;

   		for(j=0;j<n;j++){

   			if(r2[j] == '*'){

   				wall2[count2] = j;
   				count2++;

   			}

   		}


   		mini = min(count1,count2);

   		t1 = 0;
   		t2 = 0;
   		count = 0;

   		if(count1 == 0){

   			if(count2!= 0){

   				count += count2-1;

   			}


   		}else if(count2 == 0){

   			if(count1!= 0){

   				count += count1-1;

   			}

   		}else if(count2 == 1 && count1 == 1){

   			count = 1;

   		}else{

   				f = 0;

   				while(1){

   					if(t1+1 == count1 || t2 + 1 == count2){

		   				if(t1 + 1 != count1){

		   					count += count1 - t1 - 1;
		   					final_wall[f] = wall1[t1+1];
		   					f++;

		   				}

		   				if(t2 + 1 != count2){

		   					count += count2 - t2 - 1;
		   					final_wall[f] = wall2[t2+1];
		   					f++;

		   				}

		   				break;

		   			}

		   			x = min(wall1[t1 + 1],wall2[t2 + 1]);

		   			final_wall[f] = x;

		   			if(x > wall1[t1]){

		   				t1++;

		   			}

		   			if(x > wall2[t2]){

		   				t2++;

		   			}

		   			count++;
		   			f++;

		   		}

		   		l = 0;
		   		u = 0;

		   			for(k=0;k<final_wall[0];k++){

		   				if(r1[k] == '*'){

		   					u++;

		   				}

		   				if(r2[k] == '*'){

		   					l++;

		   				}

		   			}

		   			if(l > 0 && u > 0){

		   				count++;
		   				goto re;

		   			}


		   		for(j=0;j<f-1;j++){

		   			l = 0;
		   			u = 0;

		   			for(k=final_wall[j];k<final_wall[j+1];k++){

		   				if(r1[k] == '*'){

		   					u++;

		   				}

		   				if(r2[k] == '*'){

		   					l++;

		   				}

		   			}

		   			if(l > 0 && u > 0){

		   				count++;
		   				break;

		   			}


		   		}





   		}

        re:
		cout << count << endl;

   	}


   return 0;

}
