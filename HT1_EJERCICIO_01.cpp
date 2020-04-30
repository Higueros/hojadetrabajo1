
/*	Programa 1	*/

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
int main(){
	
	int alm1[12], acm1=0;
	int alm2[12], acm2=0;
	int alm3[12], acm3=0;
	int alm4[12], acm4=0;
	int alm5[12], acm5=0;
	int alm6[12], acm6=0;
	int alm7[12], acm7=0;
	int alm8[12], acm8=0;
	int alm9[12], acm9=0;
	int alm10[12], acm10=0;
	int i, media1,media2,media3,media4,media5,media6,media7,media8,media9,media10;
	
	cout<<"\n";
	cout<<"_____________________________________"<<"\n"<<"\n";
	cout<<"   INGRESA VENTA DE LOS ALMACENES	"<<endl;
	cout<<"_____________________________________";
	cout<<"\n"<<"\n";
	cout<<"	Almacen #1	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm1[i];
		acm1+=alm1[i];
		media1 = acm1 / 12;
		
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #1: "<<media1<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #2	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm2[i];
		acm2+=alm2[i];
		media2 = acm2 / 12;	
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #2: "<<media2<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #3	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm3[i];
		acm3+=alm3[i];
		media3 = acm3 / 12;
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #3: "<<media3<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #4	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm4[i];
		acm4+=alm4[i];
		media4 = acm4 / 12;	
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #4: "<<media4<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #5	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm5[i];
		acm5+=alm5[i];
		media5 = acm5 / 12;	
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #5: "<<media5<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #6	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm6[i];
		acm6+=alm6[i];
		media6 = acm6 / 12;
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #6: "<<media6<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #7	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm7[i];
		acm7+=alm7[i];
		media7 = acm7 / 12;
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #7: "<<media7<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #8	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm8[i];
		acm8+=alm8[i];
		media8 = acm8 / 12;		
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #8: "<<media8<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #9	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm9[i];
		acm9+=alm9[i];
		media9 = acm9 / 12;		
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #9: "<<media9<<endl;
	
	cout<<"\n";
	cout<<"	Almacen #10	"<<endl;
	for(i=0;i<12;i++){
		cout<<"	Ingresa venta #"<<i+1<<":"<<endl;
		cin>>alm10[i];
		acm10+=alm10[i];
		media10 = acm10 / 12;	
}
	cout<<"\n";
	cout<<"	Media sobre ventas del almacen #10: "<<media10<<endl;
	

	cout<<"_____________________________________________________________"<<"\n"<<"\n";
	cout<<"   LISTADO DE VENTAS CUYOS ALMACENES SUPERAN LA MEDIA"<<endl;
	cout<<"_____________________________________________________________"<<"\n"<<"\n";
	
	if(acm1>media1){
		cout<<"	Almacen #1 = "<<acm1<<"\n"<<endl;
}
	if(acm2>media2){
		cout<<"	Almacen #2 = "<<acm2<<"\n"<<endl;
}
	if(acm3>media3){
		cout<<"	Almacen #3 = "<<acm3<<"\n"<<endl;
}
	if(acm4>media4){
		cout<<"	Almacen #4 = "<<acm4<<"\n"<<endl;
}
	if(acm5>media5){
		cout<<"	Almacen #5 = "<<acm5<<"\n"<<endl;
}
	if(acm6>media6){
		cout<<"	Almacen #6 = "<<acm6<<"\n"<<endl;
}
	if(acm7>media7){
		cout<<"	Almacen #7 = "<<acm7<<"\n"<<endl;;
}
	if(acm8>media8){
		cout<<"	Almacen #8 = "<<acm8<<"\n"<<endl;
}
	if(acm9>media9){
		cout<<"	Almacen #9 = "<<acm9<<"\n"<<endl;
}
	if(acm10>media10){
		cout<<"	Almacen #10 = "<<acm10<<"\n"<<endl;
}
	system("Pause");
	return 0;
}
