#include<iostream>
using namespace std;
 class avg{
public:
    int a,b,c ,avr[8];
    int av(){
        
        for(int j=1;j<=8;j++)
        {
            cout<<"student Roll :"<<j<<"\n";
    cout<<"enter the marks for cse:";
    cin>>a;
    cout<<"enter the marks for eee :";
    cin>>b;
    cout<<"enter the marks for math :";
    cin>>c;

    avr[j]=(a+b+c)/3;

        }
     return avr[8];
    }

    avg(){
        
    av();
    
    };
 };



int main(){
    avg o;
    for (int i=1;i<=8;i++){
    cout<<"the avarage matks of student_"<<i<<" is "<< o.avr[i]<<endl;
    }
    return 0;
}