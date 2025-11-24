#include<bits/stdc++.h>
#include<thread>
#include<chrono>

using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}


int main(){
   cout << "What is the size of the Array ?" << "\n";
   int n; 
   cin >> n;
   int array[n];
   cout << "Insert all the items of your array";
   for(int i = 0; i < n ; i++){
	   cin >> array[i];
   }
   int x;
   cout << "what item are you looking for ?"<< "\n";
   cin >> x;
   if(linearSearch(array, n, x) == -1){
	  cout << "This item is not exist" ;
	  this_thread::sleep_for(chrono::seconds(2));
   }
   else{
	  cout << "The index of this item is : " << linearSearch(array, n, x);
	  this_thread::sleep_for(chrono::seconds(2));
   }
 }
