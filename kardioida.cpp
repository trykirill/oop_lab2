#include <iostream>
#include <limits>
#include <cmath>
#include "head.h"

namespace prog3{

using namespace std;

double Kard::radius(double angle){ 
	return 2 * par * (1 - cos(angle));
}

double Kard::area(){
	return 6 * M_PI * par*par;
}

double Kard::arc(double startAngle, double endAngle){
	if(endAngle == 0) return 0;
	if(endAngle < 180 && startAngle < 180){ 
		return 8 * par * (cos(startAngle / 2) - cos(endAngle / 2));	
	}
	 if (endAngle > 180 && startAngle < 180){
		return 8 * par - 8 * par * (cos(startAngle / 2) - cos(endAngle / 2));	
	
	}
	if (endAngle > 180 && startAngle > 180){ 
		return - 8 * par * (cos(startAngle / 2) - cos(endAngle / 2));	
	}
	return -1;
}

double Kard::max_radius(){
	return 4 * par;
}

void Kard::change_par(double newPar){
	par = newPar;
}


int processing(Kard &courv){
	double angle;
	int mode;
	do{
		cout << mode;
		cout << "please enter mode:\n"
			<< "0. задать новую кардиоиду\n"
			<<"1. Вернуть расстояние до центра в полярной системе координат в зависимости от угла для точки принадлежащей кардиоиде.\n"
			<<"2. Вернуть координаты наиболее удаленных от оси кардиоиды точек.\n"
			<<"3. Вернуть радиуса кривизны в характерных точках кардиоиды.\n"
			<<"4. Вернуть площадь описываемую кардиоидой.\n"
			<<"5. Вернуть длину дуги кардиоиды в зависимости от угла полярного радиуса.\n";
		get_int(mode, "please enter mode -> ");
		if (mode == 0) {
			double newPar;
			get_double(newPar, "enter new parameter -> ");
			courv.change_par(newPar);
		}
		else if(mode == 1){
			get_angle(angle, "enter angle -> ");
			cout  << "len to point = " << courv.radius(angle) << endl;
		}
		else if(mode == 2){
			cout << "max radius = " << courv.max_radius() << endl;;
		}
		else if(mode == 3){
			cout << "angle = 0	radius = " << courv.max_radius() << endl;
			cout << "angle = pi	radius = " << 0 <<endl;
		}
		else if(mode == 4){
			cout << "area = " << courv.area() << endl;
		}
		else if(mode == 5){
			double startAngle, endAngle;
			do{
				get_angle(startAngle, "enter start angle -> "); 
				get_angle(endAngle, "enter angle -> ");
			}while(startAngle < 0 || startAngle > 360 || endAngle < 0 || endAngle > 360  || endAngle < startAngle);
			cout << "" << courv.arc(startAngle, endAngle) << endl;
		}
	}while(mode != EOF);
		return 0;
}

void get_double(double &val, const char *txt){
	int flag = 1;
	do{
		cout << txt;
		cin >> val;
		if(cin.good()){
			flag = 0;
		}
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
	} while(flag);
}

void get_int(int &val, const char *txt ){
	int flag = 1;
	do{
		cout << txt;
		cin >> val;
		if(cin.good()){
			flag = 0;
		}
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
	} while(flag);
}

void get_angle(double &val, const char *txt ){
	int flag;
	do{
		flag = 1;
		cout << txt;
		cin >> val;
		if(cin.good()){
			flag = 0;
		}
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
	} while(flag || val > 360 || val < -360);
	val = val / 180 *  M_PI;
}
}
