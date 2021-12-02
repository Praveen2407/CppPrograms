/***********************************
Find the max sum in an array
{1,3,2,5} = 3+5=8

*********************************/

#include <stdexcept>
#include <iostream>
#include <vector>
#include <set>

int findMaxSum(const std::vector<int>& numbers)
{
    set<int> s;
    int max =0;
    if(numbers.size() > 1){
        for(int i=1;i<numbers.size()-1;i++){
            
            for(int j=0+i;j<numbers.size();j++){
                int sum =0;
            
                sum = numbers[i] + numbers[j];
                s.insert(sum);
            }
        }
   
        int ary[numbers.size()];
        
        set<int>::iterator it = s.begin(); 
    
        for(it = s.begin();it!=s.end();it++){
            int i =0;
            ary[i++]=*it;   
        }  

   
        max = ary[0];
    }
    
    return max;
    
    //throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 5, 9,7,11 };
    std::cout << findMaxSum(v);
}
#endif
