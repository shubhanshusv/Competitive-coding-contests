// Shubhanshu Verma

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;


int main(){

   
	long int t;
	cin >> t;

	long long int a,b,m;

	long int i,j,count;

	for(i=0;i<t;i++){

		cin >> a >> b >> m;

		count = 0;

		if(a%m != 0){

			if(a + (m - a%m)  <= b){

				a = a + (m - a%m);

			}

		}


		if(a%m == 0){

			count++;

		}

		if(b%m != 0){

			b = b - b%m;

		}

		if(b%m == 0 && b > a){

			count++;

		}

		if(a < b){

			count+= (b-a)/m   - 1;


		}



		cout << count << endl;

	}

   return 0;

}
