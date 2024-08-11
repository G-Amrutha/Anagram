//816117625
//Amrutha Ginkala

#include <iostream>
#include<string.h>

using namespace std;

bool anagrams(string str1, string str2) {
     int len,len1,len2;
	 bool found = false;
	 len1 = str1.length();
	 len2 = str2.length();
	 if(len1 == len2) {
	     len = len1;
		    for(int i=0;i<len;i++) {
		     found = 0;
			 for(int j=0;j<len;j++) {
			     if(str1[i] == str2[j]) {
			         found = true;
			         break;
			         }
				 }
				 if(!found) {
				     return false;
				 }
			 }
		return true;
		}
	 else {
	 return false;
	 }
}

int main(){

string str1,str2;

cout<<"Enter first string : ";

cin >> str1;

cout<<"Enter second string : ";

cin >> str2;

bool isAnagrams = anagrams(str1,str2);

if(isAnagrams) {
	
     cout<<"Strings are anagrams of each other";
	 }
	     else {
		 cout<<"Strings are not anagrams of each other";
		 }

return 0;

}
