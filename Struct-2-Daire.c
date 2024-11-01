#include <stdio.h>

#define pi 3.14

struct Koordinat{
	int x;
	int y;
};

struct Daire{
	double yaricap;
	struct Koordinat koordinat; //Struct içinde baþka bir struct tanýmlanabilir
};

void ciz(struct Daire d){
	printf("Dairenin yaricapi r:%f x:%d y:%d \n", d.yaricap, d.koordinat.x, d.koordinat.y);
	
	float cevre=2*pi*d.yaricap;
	float alan=pi*d.yaricap*d.yaricap;
	printf("Alan=%f Cevre=%f \n",alan,cevre);
}

main(){
	
	struct Daire d;
	d.yaricap=4.5;
	d.koordinat.x=2;
	d.koordinat.y=3;
	
	ciz(d);
	
	
}
