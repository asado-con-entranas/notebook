const double EPS=1e-9;
struct pto{
	double x,y;
	pto(double x=0,double y=0):x(x),y(y)[]
	pto operator+(pto b){return pto(x+b.x,y+b.y);}
	pto operator-(pto b){return pto(x-b.x,y-b.y);}
	pto operator+(double s){return pto(x+s,y+s);}
	pto operator*(double s){return pto(x*s,y*s);}
	pto operator/(double s){return pto(x/s,y/s);}
	//Dot product
	double operator*(pto b){ return x*b.x+y*b.y;}
	//Module cross product
	double operator^(pto b){ return x*b.y-y*b.x;}
	//True if it is to the left of the line qr
	bool left(pto q, pto r){return ((q-*this)^(r-*this))>0;}
};
