#include<stdio.h>
#include<stdbool.h>

union Animal{
	struct Anfibio{	//0
		int patas;
		float pele;
		bool cauda;
	}an;
	struct Aves {		//1
		float bico;
		float voo;
		float canto;
	}av;
	struct Mamiferos{	//2
		int dentes;
		float cerebro;
		float velocidade;
	}ma;
	struct Repteis { 	//3
		bool veneno;
		float agua;
		float ovo;
	}re;
};

int main (void){	
	union Animal a, b, c, d, e, f;
	a.an.patas=7;
	a.an.pele=0.07;
	a.an.cauda=true;

	b.av.bico=2;
	b.av.voo=15;
	b.av.canto=41.76;
	
	c.ma.dentes=134;
	c.ma.cerebro=1.1;
	c.ma.velocidade=360;
	
	d.re.veneno=false;
	d.re.agua=3.6;
	d.re.ovo=5.0;

	e.ma.dentes=2;
	e.ma.cerebro=0.0001;
	e.ma.velocidade=9000;
	
	f.re.veneno=true;
	f.re.agua=120;
	f.re.ovo=120;

	return 0;
}
