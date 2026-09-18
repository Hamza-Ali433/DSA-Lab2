#include <iostream>
using namespace std;
void analyze_pointer(int * ptr){
    cout<< "Adress Of pointer:"<< ptr <<endl;
     cout<< "Value stored in pointer:"<< *ptr<<endl;
}

void stack_example() {
    cout<<"Allocating on stack"<<endl;

   int b =10;
   analyze_pointer(&b);

   cout<<endl;
   cout<<"Allocating on heap"<<endl;

    int *a = new int();
    *a = 10;            
    
    analyze_pointer(a); 
    
    delete a;           
}

int main() 
{
    stack_example();
    
    return 0;
}

