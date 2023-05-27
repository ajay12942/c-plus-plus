/******************************************************************************

Define a student class with USN,NAME ,and marks of three test of a subject 
declare an array of 10 students objects using appropriate functions find the average of the two 
better marks for each student print the usn name and the avaerage marks of all the student

*******************************************************************************/
#include <iostream>
#include<string>

using namespace std;
class student{ 
    private:
        string name;
        string usn;
        int test[3]; // three test is taken in single array
      
    public:
    void inData(string nm,string r,int t1,int t2,int t3)
    {
        name=nm;
        usn=r;
        test[0]=t1;
        test[1]=t2;
        test[2]=t3;
       
        
    }
    void outData(){
        cout<<usn<<"\t\t"<<name<<"\t\t"<<bestavgof2()<<"\n";
    } //displaying the usn name and finding the average marks of all the students 
    float bestavgof2() 
	{
		float avg;
		  for (int i = 0; i < 3; i++) 
		  {
	            for (int j = i + 1; j < 3; j++)
	            {
	                int temp = 0;
	                if (test[j] > test[i]) 
	                {
	                    temp = test[i];
	                    test[i] = test[j];
	                    test[j] = temp;
	                }
	            }
		
		  	}
		avg=(float)(test[0]+test[1])/2;
		return avg;	
}//sorting the marks in dessending order and find the average of the best two marks(first two marks)
};//student class is defined 
int main()
{
  string usn,name;
  int t1,t2,t3;
  int a=2;// a impies number of student to be entered
    student stud[10];//declared an array of 10 students objects
    for(int i=1;i<=a;i++){
        cout<<"enter the usn of the student "<<i<<endl;
        cin>>usn;
        cout<<"enter the name of the student "<<i<<endl;
        cin >>name;
        cout<<"enter the marks in test 1:";
        cin>>t1;
        cout<<"enter the marks in test 2:";
        cin>>t2;
        cout<<"enter the marks in test 3:";
        cin>>t3;
        stud[i].inData(usn,name,t1,t2,t3);
    }
    cout<<"usn\t\t"<<"name\t\t"<<"best of two avg\n";
        
    for(int i=1;i<=a;i++)
    {
        stud[i].outData();
    }

    return 0;
}
