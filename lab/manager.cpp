#include <iostream>
#include<string>
using namespace std;
class manager
{
    private:
    string employee;
    int ID;
    
    
    public:
     manager()
    {
        employee;
        ID;
    }
    manager(string m,int id)
    {
        employee=m;
        ID=id;
    }
    void getD()
    {
        cout<<"enter the details\n";
        cin>>employee>>ID;
    }
    void disp()
    {
        cout<<"employee="<<employee;
        cout<<"\nID="<<ID;
    }
};

int main()
{ 
    manager m1;
    m1.disp();//default construction display
    m1.getD();//intaking details 
    m1.disp();//displaying details
    cout<<"manager2 ;\n";//construction overloading
    manager m2("dee",123);
    m2.disp();
    //cout<<"manager2 cpy;\n";
    //manager (m3=m2);
    m2.disp();
    cout<<"manager3;\n";
    manager m3(m2);
    m3.disp();
    

    return 0;
}


