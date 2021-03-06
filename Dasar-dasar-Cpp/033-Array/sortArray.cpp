#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t sizeArray = 10;

// menampilkan nilai
void printArray(array<int, sizeArray> &data){
  cout << "nilai array int  : ";
  for (int &loop : data){
    cout << loop << " ";
  }
  cout << endl;
}

// menampilkan huruf
void printArray(array<char, sizeArray> &data){
  cout << "nilai array char : ";
  for (char &loop : data){
    cout << loop << " ";
  }
  cout << endl;
}

int main(){
  
  array<int, sizeArray> nilai = {0,9,5,7,6,2,3,1,8,4};
  array<char, sizeArray> huruf = {'A','D','B','C','F','E','H','G','J','I'};
  
  // sebelum di sorting
  printArray(nilai);
  printArray(huruf);
  
  cout << endl;
  
  // sort(address_awal(), address_akhir());
  // contoh:
  // sort(data.begin(), data.end());
  
  // sesudah di sorting
  sort(nilai.begin(), nilai.end());
  printArray(nilai);
  
  sort(huruf.begin(), huruf.end());
  printArray(huruf);
  
  cin.get();
  return 0;
}