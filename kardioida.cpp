#include <iostream>
#include <cmath>

using namespace std;

namespace kard{

class Kardioida{
public:
	double par;

double radius(double angle){ //
	return 2 * par * (1 - cos(ange));
}

double area(double par){ // площадь
	return 6 * pi * par*par;
}

double len(double par, double angle){
	return 2 * par * (1 - cos(angle)); //
}

double arc(double start, double end){ // дуга
	return 16 * (cos(end / 2) - cos(start / 2));
}

};

int processing{
	double angle, start
	do{
		cout << "please enter mode:\n"\
			<<"1.Вернуть расстояние до центра в полярной системе координат в зависимости от угла для точки принадлежащей кардиоиде.\n"			<<
			<<"2.Вернуть координаты наиболее удаленных от оси кардиоиды точек.\n"
			<<"3.Вернуть радиуса кривизны в характерных точках кардиоиды.\n"
			<<"4.Вернуть площадь описываемую кардиоидой."
			<<"5.Вернуть длину дуги кардиоиды в зависимости от угла полярного радиуса."
		mode = getInt();
		if(mode == 1){
			getDouble(angle, "enter angle -> ");
			cout << "len to point = " << corv.len(angle) << endl;
		}
		else if(mode == 2){
			cin >> 
		}
		else if(mode == 3){
			cin >>
		}
		else if(mode == 4){
			cout << "area = " << corv.area() << endl;
		}
		else if(mode == 5){
			getDouble();
			cout << "" << corv.arc() << endl;
		}




}

int creat(Kar& corv double a){
	kar.a = a;
}

double radius(double corv, double angle){ //
	return 2 * corv * (1 - cos(ange));
}

double area(double corv){ // площадь
	return 6 * pi * corv*corv;
}

double len(double corv, double angle){
	return 2 * courv * (1 - cos(angle)); //
}

double arc(double start, double end){ // дуга
	return 16 * (cos(end / 2) - cos(start / 2));
}



