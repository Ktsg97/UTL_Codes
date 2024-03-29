#include<iostream>
using namespace std;

template <typename T>
class Array
{
 private:
	T *ptr;
	int size;
 public:
	Array(T arr[],int s);
	void print();
};

template <typename T>
Array<T>::Array(T arr[],int s)
{
 ptr= new T[s];
 size = s;
 for (int i=0;i < size;i++)
	ptr[i] = arr[i];
}

template<typename T>
void Array<T>::print()
{
 for (int i= 0;i<size;i++)
 	cout<<" "<<*(ptr+i);
 	cout <<endl;
}
 	
int main()
{
 int arr[5]={1,2,3,4,5};
 Array<int> a(arr,5);
 a.print(); 
 float ar[]={1.1,2.2,3.3,4.4,5.5};
 Array<float> b(ar,5);
 b.print();
 char rr[5]={'A','B','C','D','E'};
 Array<char> c(rr,5);
 c.print(); 
 return 0;
}

