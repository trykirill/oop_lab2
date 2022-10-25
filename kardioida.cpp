#include <iostream>
#include <limits>
#include <cmath>
#include "head.h"

namespace prog2{

using namespace std;

double Kard::radius(double angle){ 
	return 2 * par * (1 - cos(angle));
}

double Kard::radiusCr(double angle){
	return 8/3*par*sin(angle/2);
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

void Kard::dots(double dotX[], double dotY[]){
	dotY[0] = 4 * par;
	dotY[1] = 0;
	dotX[0] = par*(2*cos(120*M_PI/180) - cos(240*M_PI/180));
	dotX[1] = par*(2*sin(120*M_PI/180) - sin(240*M_PI/180));
}

void Kard::change_par(double newPar){
	par = newPar;
}


int processing(Kard &courv){
	double angle;
	int mode;
	do{
		cout << "[-1]  exit\n"
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
			double dotY[2];
			double dotX[2];
			courv.dots(dotY, dotX);
			cout << "Ox: {"<<dotX[0]<<", "<<dotX[1]<<"}, "<<" {"<<dotX[0]<<", "<<-dotX[1]<<"}\n";
			cout << "Oy: {"<<dotY[0]<<", "<<dotY[1]<<"}, "<<" {"<<dotY[0]<<", "<<dotY[1]<<"}\n";
		}
		else if(mode == 3){
			get_angle(angle, "enter angle -> ");
			cout << "radius = " << courv.radiusCr(angle) << endl;
		}
		else if(mode == 4){
			cout << "area = " << courv.area() << endl;
		}
		else if(mode == 5){
			double startAngle, endAngle;
			do{
				get_angle(startAngle, "enter start angle -> "); 
				get_angle(endAngle, "enter end angle -> ");
			}while(startAngle < 0 || startAngle > 360 || endAngle < 0 || endAngle > 360  || endAngle < startAngle);
			cout << "len = " << courv.arc(startAngle, endAngle) << endl;
		}
	}while(mode != -1);
		return 0;
}

void get_double(double &val, const char *txt){
	int flag = 1;
	const char * err = "";
	do{
		cout << err;
		cout << txt;
		cin >> val;
		if(cin.good()){
			flag = 0;
		}
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
		err = "wronge data!\n";
	} while(flag);
}

int  get_int(int &val, const char *txt ){
	int flag = 1;
	do{
		cout << txt;
		cin >> val;
		if(cin.good()) flag = 0;
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
	} while(flag);
	return 0;
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
