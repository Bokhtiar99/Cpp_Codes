/*#include <iostream>
using namespace std;
class Sand
{
	public: Sand()
		{
			cout << "Sand ";
		}
		~Sand()
		{
			cout << "~Sand ";
		}
};
class Rock
{
	public: Rock()
		{
			cout << "Rock ";
		}
		~Rock()
		{
			cout << "~Rock ";
		}
};
class Hill: public Sand
	{
		Rock data_;
		public: Hill()
			{
				cout << "Hill " << endl;
			}
			~Hill()
			{
				cout << "~Hill ";
			}
	};

int main()
{
	Hill h;
	return 0;
}*/

/*#include<iostream>
using namespace std;
class gfg
{
public:
		~gfg()
		{
			cout << "I love coding";
		}
	public: gfg()
		{
			cout << "I am at your service";
		}
};
int main()
{
gfg mygfg;
}*/

/*#include <iostream>
using namespace std;
class X
{
	public: void foo()
	{
		cout << "X::f ";
	}
	virtual void go()
	{
		cout << "X::g ";
	}
};
class Y: public X
	{
		public: virtual void foo()
			{
				cout << "Y::f ";
			}
		virtual void go()
			{
				cout << "Y::g ";
			}
	};
int main()
{
	X x;
	Y y;
	X& rx = y;
	rx.foo();
	rx.go();
	return 0;
}*/

#include <iostream>
using namespace std;

class GFG
{
public:
	GFG()
	{
		cout << "Hi from GFG. ";
	}
} g;

int main()
{
	cout << "You are in Main";
	return 0;
}
