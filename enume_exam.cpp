#include <iostream>

using namespace std;
enum CardianDirections
{
	North = 25,
	South,
	East,
	West	
};

int main()
{
	cout<<"Направления и их значения:"<<endl;
	cout<<"North: "<<North<<endl;	
	cout<<"South: "<<South<<endl;
	cout<<"East: "<<East<<endl;
	cout<<"West: "<<West<<endl;
	
	CardianDirections windDirection = South;
	cout<<"windDirection = "<<windDirection<<endl;
	return 0;
}
