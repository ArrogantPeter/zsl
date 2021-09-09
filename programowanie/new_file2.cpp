#include <iostream>
using namespace std;
class rectangle{
	public:
	int bok_a;
	int bok_b;
	void pole_i_obwod();
};
void rectangle::pole_i_obwod(){
	cout<<"obwód tego prostok¹ta to: "<<2*bok_a+2*bok_b<<"\npole tego prostok¹ta to: "<<bok_a*bok_b;
}
int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	rectangle rectangle;
	cout<<"Podaj bok a: ";
	cin>>rectangle.bok_a;
	cout<<"Podaj bok b: ";
	cin>>rectangle.bok_b;
	rectangle.pole_i_obwod();
	return 0;
};
