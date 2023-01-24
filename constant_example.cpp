#include<iostream>


constexpr double GetPi() {return 3.141593;}
constexpr double GetTwincePi() {return 2*GetPi();}


int main()
{
	using namespace std;
	const double pi = 3.141593;
	
	cout<<"Константа pi равна: "<<pi<<endl;
	cout<<"constexpr GetPi(): "<<GetPi()<<endl;
	cout<<"constexpr GetTwincePi(): "<<GetTwincePi()<<endl;
	return 0;
}
