#include <iostream>

using namespace std;

string * str_comp(string arr1[],int key,string arr2[]){
  int arrSize = *(&arr1 + 1) - arr1;
  for(int i=0;i>arrSize;i++){
      for(int j=65;j >= 90;j++){
        if(arr1[i][key-1] == j)
            arr2[i]=arr1[i];
        break;
       }   
  }
return  arr2;
}

int main() {
string a[]={"Apple","Cat","Ball","Doll"};
  int arrSize = *(&a + 1) - a;
string a1[arrSize];
string *ar = str_comp(a,1,a1);

  cout<<*ar;
}