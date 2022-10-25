#ifndef HEAD_H
#define HEAD_H
namespace prog3{

void get_double(double &val, const char *txt);
void get_angle(double &val, const char *txt);
void get_int(int &val, const char *txt );

class  Kard{
	double par;
public:
	Kard(){
		do{
			get_double(par, "enter par a  -> ");
		}while(par <= 0);
	}
	void change_par(double newPar); // изменение параметра в формуле кардиоиды
	double radius(double ange); //растояние от центра до точки заданной в полярных координатах
	double area(); // площадь
	double arc(double startAnge, double endAnge); // длинна дуги заданной в полярных
	double dots(); //
	double max_radius();
};

int processing(Kard &corv);
}
#endif
