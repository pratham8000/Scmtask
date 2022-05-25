/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class rectangle{
    protected:
    int x ,y;
    public:
    rectangle()
    {
        x=5 , y =2;
        
    }
    rectangle(int p , int q)
    {
        x = p , y = q;
    }
        void area()
        {
            std::cout << (x*y) << std::endl;
        }
    
};


clas cuboid  :public rectangle
{
    public: int w;
    cuboid ()
    {
        w=10;
        
    }
    cuboid(int p) : rectangle(p,p);
    {
        w = p;
    }
        cuboid(int p , int r) : rectangle(p,q)
    
        { 
            w = r;
        }
    
}
void area ()