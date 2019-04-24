const double EPS=1e-9;
struct pto{
	double x,y;
	typedef pto vec;
	pto(double x=0,double y=0):x(x),y(y){}
	pto operator+(pto b){return pto(x+b.x,y+b.y);}
	pto operator-(pto b){return pto(x-b.x,y-b.y);}
	pto operator+(double s){return pto(x+s,y+s);}
	pto operator*(double s){return pto(x*s,y*s);}
	pto operator/(double s){return pto(x/s,y/s);}	
	double operator*(pto b){return x*b.x+y*b.y;} //Dot product	
	double operator^(pto b){return x*b.y-y*b.x;} //Module Cross product
	bool operator==(pto a){return abs(x-a.x)<EPS && abs(y-a.y)<EPS;}	
	bool operator<(const pto &a)const{return x<a.x-EPS ||(abs(x-a.x)<EPS
		&& y<a.y-EPS);}
	//True if it is to the left of the line qr
	bool left(pto q, pto r){return ((q-*this)^(r-*this))>0;}
	double norm(){return sqrt(x*x+y*y);}
	double norm_sq(){return x*x+y*y;}	
};
double dist(pto a, pto b){return (b-a).norm();}
double angle(pto a, pto o, pto b){
	pto oa=a-o, ob=b-o;
	return atan2(oa^ob, oa*ob);}
//Rotate p by theta rads CCW w.r.t. origin (0,0)	
pto rotate(pto p, double theta){
	return pto(p.x*cos(theta)-p.y*sin(theta),
	 p.x*sin(theta)+p.y*cos(theta));
}
