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

   	long int a,b;
   	cin >> a >> b;

   	long int i=1;
   	int flag = 0;

   	while(flag == 0){

   		if(i%2 == 0){

   			b-= i;

   			if(b < 0){
   				flag = 2;

   			}

   		}else{

   			a-= i;

   			if(a < 0){
   				flag = 1;

   			}


   		}

   		i++;


   	}

   	if(flag == 2){

   			cout << "Valera";

   	}else{

   			cout << "Vladik";

   	}







   	return 0;

}
