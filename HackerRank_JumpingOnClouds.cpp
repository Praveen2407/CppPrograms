/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */
#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c) {

    int count=0;
    for(int i=0;i<c.size()-1;i++){
        if(c[i]== 0 ){
            count++;
            if((c[i] == 0) && (c[i+2] ==0) && (c[i+1] == 0))
                i++;
        }
    }
    return count;
}
int main(){
 
  int val,tmp;
  vector<int> v;
  cout << "How many digits to enter into vector\n";
  cin >> val;
  for(int i=0;i<val;i++){
    cin >> tmp;
    v.push_back(tmp);
  }
  int result = jumpingOnClouds(v);
  cout << result<<endl;
  
  return 0;
}
