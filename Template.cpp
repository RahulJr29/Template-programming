#include<iostream>
using namespace std;
template <class T>
class Test
{
	private: T a,b;
	public: Test(T x,T y)
			{
				a=x;
				b=y;
			}
			T add()
			{
				return a+b;
			}
			T sub()
			{
				return a-b;
			}
			T mul()
			{
				return a*b;
			}
			T div()
			{
				return a/b;
			}
			void display()
			{
				cout<<"\nNumbers are:"<<a<<" and "<<b;
				cout<<"\nTheir addition result:"<<add();
				cout<<"\nTheir subtraction result:"<<sub();
				cout<<"\nTheir multiplication result:"<<mul();
				cout<<"\nTheir division result:"<<div();
			}
};
int main()
{
	Test<int> t1(4,2);
	Test<float> t2(4.6,2.3);
	cout<<"Integer result is:\n";
	t1.display();
	cout<<"\n\n************************************************";
	cout<<"\nFloat result is:\n";
	t2.display();
	cout<<"\n\n\n";
	return 0;
}