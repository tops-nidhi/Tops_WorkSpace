#include<iostream>
using namespace std;

class matrix {
public:
    int r,c,a[100],i;

    void get_data() {
        cout<<"Enter number of elements:";
        cin>>r;

        // Input for a matrix
        cout<<"Enter elements for the matrix:"<<endl;
        for (i=0;i<r;i++) {
            cout<<"Enter element a("<<i+1<<"):";
            cin>>a[i];
        }
    }
    matrix operator +(matrix &m2){
        matrix m3;
        m3.r = r;
        // Perform matrix addition
        for (i=0;i<r;i++){
            m3.a[i]=a[i]+m2.a[i];
        }
        return m3;
    }

    void display_data(){
        for (i=0;i<r;i++){
            cout<<a[i]<<"   ";
        }
        cout<<endl;
    }
};

int main(){
    matrix m1,m2,m3;

    cout<<"First matrix:"<<endl;
    m1.get_data();
    m1.display_data();

    cout<<"Second matrix:"<<endl;
    m2.get_data();
    m2.display_data();

    // Add two matrices using operator overloading
    m3=m1+m2;

    cout<<"The sum of 1D matrices:"<<endl;
    m3.display_data();

    return 0;
}
