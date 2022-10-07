#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Turkish");
	int girileceksayi, i=0 , x, mod, secim;
	char girileceksey[5], bom[5];
	while(true){
	printf("\n oyun kurallarý [1]\noyuna basla [2]\n");
	printf("Seciminiz : ");
	scanf("%d",&secim);
	//sxscsd s df

	switch(secim){
	
	case 1: printf("bom oyununa hosgeldiniz\n oyunun kurallari sunlardir\n siz bir girerek basliyorsunuz bilgisayar 2 giriyor sira ile sayi giriyosunuz \n");
	printf("\n sonra kacta bom dediginizi sectikten sonra o sayinin katlarinda sira ile program ve siz bom diyorsunuz eger bom demeyi unutursanýz kaybedersiniz:)\n ");break;
	case 2:
	printf("oyunun nerede biticeðini belirleyiniz");
	scanf("%d",&x);
	printf("kacta bom diyiceginizi belirleyiniz");
	scanf("%d",&mod);
	printf("baslayiniz:");
	
	for(int i=0;i<x;i++){
		scanf("%s",&girileceksey);
		girileceksayi = atoi(girileceksey);
		i++;
		if((girileceksayi)%mod!=0 && girileceksayi==i ){
			
			if((girileceksayi+1)%mod!=0){
				printf("%d\n",girileceksayi+1);}
			else printf("%s\n","BOM");}
				
		else if((girileceksayi)%mod==0){
			if(strcmp(girileceksey,"BOM")){
				printf("%s\n","Kaybettin");break;
				} 
			else printf("%d\n",i+1);}
		
		else {
			printf("%s\n","Kaybettin:)");	
			break;
		}	
	}break;
	}
		}
getch();
}
