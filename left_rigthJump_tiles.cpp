/**************************************
input (6,3)- 6 - size {0,1,2,3,4,5} - 3 position


**************************************/

#include <stdexcept>
#include <iostream>
using namespace std;

class Platformer 
{
    int *ary;
    int pos;
    int size; int original_pos;
public:
    Platformer(int n, int position) 
    {
        size = n;
        ary = new int[size];
        pos = position;
        original_pos = position;
        if( n > position){
            for(int i =0;i<size;i++)
                ary[i] = i;
        }
        else
            cout << "wrong data\n";
        //throw std::logic_error("Waiting to be implemented");
    }

    void jumpLeft() 
    {
        int tmp_pos = pos;
        int move = size - original_pos -1;
        for(int i=0;i<move;i++){
            
            // checking array bound issues
            /*try{
                if( tmp_pos+i+1 > size ){
                    
                    throw std::logic_error( "Array out of bound\n");
                }    
            }
            catch(const char* s){
                cout << s <<endl;
            }*/
            
            // shifting data to left side one by one
            ary[tmp_pos+i] = ary[tmp_pos+i+1];
        }
        for(int j=0;j<ary[original_pos-1];j++)
            pos--; 
    }

    void jumpRight() 
    {
        int tmp_pos = pos;
        int move = size - original_pos;
        for(int i=0;i<move;i++){
            /*try{
                if( tmp_pos+i+1 > size ){
                    
                    throw std::logic_error( "Array out of bound\n");
                }  
            }
            catch(const char* s){
                cout << s <<endl; 
            }*/
            
            ary[tmp_pos+i] = ary[tmp_pos+i+1]; // shifting data one by one
        }
        
        for(int j=0;j<ary[tmp_pos]-1;j++)
            pos++;
    }

    int position() 
    {
        if(size > original_pos){
            int x = ary[pos];
            return x;
        }
        else{
            return -1;
        } 
        
    }
};

#ifndef RunTests
int main()
{
    Platformer platformer(10, 3);
    std::cout << platformer.position() << std::endl; // should print 3

    platformer.jumpLeft();
    std::cout << platformer.position() << std::endl; // should print 1

    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 4
}
#endif
