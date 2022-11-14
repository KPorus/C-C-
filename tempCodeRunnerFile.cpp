using namespace std;
class op{
public:
int i,j,o,p;
    int one;
    int two;
    op(){
        one=1;
        two=2;
        }
    op(int a, int b){
        one= a;
        two= b;
        }
        op operator +(op o){
            op var;
            var.one=one +o.one;
            var.two=two +o.two;
            return var;
            }
        void print(){ cout<<"one : "<<one<< " two : "<<two<<endl;}
       void input();
    };
    void op::input(){  
        cout<<"enter i:"<<endl;cin>>i;
        cout<<"enter j:"<<endl;cin>>j;
        cout<<"enter o:"<<endl;cin>>o;
        cout<<"enter p:"<<endl;cin>>p; 
        }
    int main(){
        op in;
        in.input();
        op p1(in.i,in.j);
        op p2(in.o,in.p);
        // p2.input();
        op p3;
        p3 = p2+p1;
        p3.print();
        }