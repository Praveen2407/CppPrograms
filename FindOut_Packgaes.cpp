#include <iostream>

using namespace std;


int minimal_number_of_packages(int items, int available_large_packages, int available_small_packages)
{
    int large = available_large_packages;
    int small = available_small_packages;
    static int used=0;
    
    int max = (large*5) + small;
    
    if((items <= 0) || (items > max))
        return -1;
    while(items > 0){
        if((items < 5) && (small > 0)){
            used = items;
            items =0; 
            small= small -items;
        }
        
        if((items == 5) && (large > 0)){
            large--;
            used++;
            items =0;
        }
        if((items > 5) &&( large > 0)){
            large--;
            used++;
            items = items -5;
        }
        if((items > 5) && ( large == 0) && (small > 0)){
            small = small - items;
            used += items;
            items = 0;
        }
        
    }
    return used;
  //  exit(0);
}

#ifndef RunTests
int main()
{
    cout << minimal_number_of_packages(16, 2, 10)<< endl;
    return 0;
}
#endif
