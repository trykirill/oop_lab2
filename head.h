#ifndef HEAD_H
#define HEAD_H
namespace prog2{

void get_double(double &val, const char *txt);
void get_angle(double &val, const char *txt);
int get_int(int &val, const char *txt );

class  Kard{
	double par;
public:
	Kard(){
		do{
			get_double(par, "enter par -> ");
		}while(par <= 0);
	}
	Kard(int val){
		par = val;
	}
	void change_par(double newPar); // изменение параметра в формуле кардиоиды
	double radius(double ange); //растояние от центра до точки заданной в полярных координатах
	double area(); // площадь
	double arc(double startAnge, double endAnge); // длинна дуги заданной в полярных
	void dots(double dotX[], double dotY[]); //
	double radiusCr(double angle);
};

int processing(Kard &corv);
}
#endif
