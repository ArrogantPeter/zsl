#include <iostream>
using namespace std;
class Worker{
	public:
	string name;
	string surname="Kowalska";
	string nationality="Polska";
	//definicja metody showName
	void showName(){
		cout << "Twoje imi�: "<<name;
	};
	void showSurname();
	void showAllData();
};

void Worker::showSurname(){
cout<<"test metody showSurname";
};
void Worker::showAllData(){
		cout<<"imi� i nazwisko: "<<name<<" "<<surname<<"\nNarodowo��: "<<nationality;
	};
int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	Worker pracownik;
	pracownik.name="Krystyna";
	cout<<"Narodowo��: "<< pracownik.nationality<<endl;
	pracownik.nationality="USA";
	cout<<"Narodowo��: "<< pracownik.nationality<<endl;
	pracownik.showName();
	cout<<endl;
	pracownik.showSurname();
	cout<<endl;
	pracownik.showAllData();
	return 0;
}

