#include<stdio.h>
#include<locale.h>//Yaz�m dilini t�rk�e yapmak i�in
#include <string.h>


#define saat(karakter)  __TIME__ 

int main()

{

	while(1){
	setlocale(LC_ALL,"Turkish");
	
	int islemler,kartsizislem,gmiktar,no,cepsifre=0,ibanno,kcbakiye,miktar=2000,islem,i,sifre,girilen,tcno,secenek,kacis,islem2,geridon2;
	int basamakSayisi;
	int basmaksayisi ;
	int basamaksayisi=0;
	int basSayisi=0;
    char iban [100];
    char tc [100];



	
	printf("***************Bankamati�imize Ho�geldiniz***************\n");
	printf("Saat=%s\n",saat(karakter));
	printf("->1:Karts�z ��lemler\n->2:Kartl� ��lemler ��in L�tfen kart�n�z� sokunuz.\n");
	scanf("%d",&islemler);
	switch(islemler)
	{
	
	case 1:
 kartsizislemler:
	printf("Karts�z i�lemlere ho�geldiniz.\n->1:IBAN'a para yat�r\n->2:Hesaba para yat�rma.\n");
	scanf("%d",&kartsizislem);
	switch(kartsizislem)
	{
	
	case 1:
		
		printf("IBAN'a para yat�r.\n");
		printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto kartsizislemler;
		}
		if(kacis==2){
			
		
		printf("Para yat�rmak istedi�iniz IBAN numaras�n� giriniz.(24 haneli olmal�d�r.)\n");
		scanf("%s",&iban);
        basamakSayisi = strlen(iban);//strlen fonksiyonu ile karakter dizisi uzunlu�unu yani (basamak say�s�n� elde edip) basamakSayisi de�i�kenine at�yoruz.
 	    if(basamakSayisi==24)
       {
       	printf("Girdi�iniz IBAN numaras� do�ru.\n");
       	printf("L�tfen g�nderece�iniz miktar� giriniz.\n");
       	scanf("%d",&gmiktar);
       	printf("Ba�ar�yla G�nderilmi�tir.\n");
       	     			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto kartsizislemler;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("L�tfen gecerli bir secenek seciniz!");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto kartsizislemler;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!");
				 }
				 		
					 }//while sonu
				
				 }
	   }//IBAN na para yat�rma sonu.
       else
       {
       
       	printf(" %d Basamakl� say�  girdiniz l�tfen 24 basamakl� olan IBAN numaras�n� giriniz.\n",basamakSayisi);
       
	   }
}
	   break;
	   case 2:
	   	{
	
	
printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto kartsizislemler;
		}
		if(kacis==2){
			printf("T.C kimlik numaran�z� giriniz.\n");
			   scanf("%s",&tc);
		
		if(kacis==-1){
			goto kartsizislemler;
		}
    basmaksayisi=strlen(tc);
    if(basmaksayisi==11)
    {
    	    printf("Bilgileriniz kontrol ediliyor l�tfen bekleyiniz.\n");
    printf("Telefon numaran�z� giriniz.\n");
    printf("(+90)");
    scanf("%d",&no);
     while(no>0)
       {
        basamaksayisi++;  
        no/=10;         
       }
	   	if(basamaksayisi==10)
       {//telefon no do�ruysa
       	printf("L�tfen telefonunuza gelen 4 haneli �ifeyi yazn�z.\n");
       	scanf("%d",&cepsifre);
       	while(cepsifre>0)
       	{
		   
        basSayisi++;  
        cepsifre/=10; 
       }
       if(basSayisi==4)
       {
       	
       	printf("Girdi�iniz �ifre numaras� do�rudur.\n");
	
					 }//while sonu
				    else
    {
    
    	printf("4 basamakl� olan �ifrenizi %d basamakl� girdiniz.\n",basSayisi);
    	break;
	}
       //telefon no i�in
   }
}
       else
       {
       	printf("10 basamakl� olan telefon numaran�z� %d basamakl� girdiniz.\n",basamaksayisi);
       	break;
	   }
    	
	}
	else
	{
		printf(" 11 basamakl� olan T.C kimlik numaran�z� %d basamakl� girdiniz.\n",basmaksayisi);
		break;
	}
		geridon2:

       	printf("Kartsiz  �slemlere Hosgeldiniz!\nYapmak istediginiz �slemi Seciniz\n1:Para Cekme\t\t\t\t\t2:Para Yatirma\n\t\t\t\t\n3:Bakiye Sorgulama\t\t\t\t\n\n\n");
	printf("Yapmak istediginiz islemi seciniz:\n");
	scanf("%d",&islem);
	switch(islem)
	{
	case 1:
	{
		printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
		printf("Cekmek istediginiz para miktarini giriniz:\n");
		scanf("%d",&kcbakiye);
			while(kcbakiye>0)
			{
			
		if(kcbakiye>2000)
		{
			printf("Yetersiz bakiye!Lutfen gecerli bir miktar giriniz:\n");
			scanf("%d",&kcbakiye);
		}
			miktar=miktar-kcbakiye;
			printf("Mevcut yeni para miktariniz:%d\n",miktar);
				printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("L�tfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 		
					 }//while sonu
		break;
	}//case 1 i�in
	break;
}//kcbakiye while sonu
break;

	case 2:
	{
		printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
				printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto geridon2;
		}
		if(kacis==2){
				printf("Hesabiniza yatirmak istediginiz para miktarini giriniz:\n");
				scanf("%d",&kcbakiye);
				while(kcbakiye>0)
				{
				
				miktar=miktar+kcbakiye;
     			printf("Mevcut yeni para miktariniz:%d\n",miktar);
     			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("L�tfen gecerli bir secenek seciniz!");
				 	scanf("%d",&secenek);
				 	i++;
                if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 		
					 }//while sonu
				
				 }
				 break;
			}//kcbakiye while sonu
			}
     			break;
					
					
    
	case 3:
		printf("Mevcut para miktariniz:%d\n",miktar);
			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("L�tfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 	break;
				 }
				 		
					 }//while sonu
		break;
		
		
		
	}//switch i�lem i�in
    }//if cep �ifre say�s� i�in
}

}
}
	}
	   	


break;

       case 2:
    {
	
       	sifre = 1881;
	printf("Lutfen sifreyi giriniz: ");
	scanf("%d",&girilen);
	i=1;
	while(girilen!=sifre && i<3){
	

		printf("\nSifre: ");
		scanf("%d",&girilen);
		i++;
	}
	
	if(girilen!=sifre){
		printf("Sifre Deneme Hakkini Doldurdunuz!\n");
	}
	else{
	
		printf("Sifreniz Kabul Edildi");
			geridon: //geri d�nmek i�in kulland���m�z etiket ad�

		 printf("Kartli �slemlere Hosgeldiniz!\nYapmak istediginiz �slemi Seciniz\n1:Para Cekme\t\t\t\t\t2:Para Yatirma\n3:Fatura Odeme\t\t\t\t\t4:Havale Yapma\n5:Bakiye Sorgulama\t\t\t\t6:Kart Iade\n\n\n\n");
	printf("Yapmak istediginiz islemi seciniz:\n");
	scanf("%d",&islem2);
    }
	switch(islem2){

	case 1:
		printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
		printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto geridon;
		}
		if(kacis==2){
		printf("Cekmek istediginiz para miktarini giriniz:\n");
		scanf("%d",&kcbakiye);
		while(kcbakiye>0)
		{
		
		
		if(kcbakiye>2000)
		{
			printf("Yetersiz bakiye!Lutfen gecerli bir miktar giriniz:\n");
			scanf("%d",&kcbakiye);
		}
	
		
	
		
			miktar=miktar-kcbakiye;
			printf("Mevcut yeni para miktariniz:%d\n",miktar);
			     			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			
     		
     		
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("L�tfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }

					 }//while sonu
			
				 }
	break;		
	}//kcbakiye while sonu
	
			}
	break;
	
	
	case 2:
				printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
				printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto geridon;
		}
		if(kacis==2){
				printf("Hesabiniza yatirmak istediginiz para miktarini giriniz:\n");
				scanf("%d",&kcbakiye);
				while(kcbakiye>0)
				{
				
				miktar=miktar+kcbakiye;
     			printf("Mevcut yeni para miktariniz:%d\n",miktar);
     			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("L�tfen gecerli bir secenek seciniz!");
				 	scanf("%d",&secenek);
				 	i++;
                if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 		
					 }//while sonu
				
				 }
				 break;
			}//kcbakiye while sonu
			}
     			break;
     			
     			
    case 3:
				printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
				printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto geridon;
		}
		if(kacis==2){
					printf("Fatura tutarini giriniz:\n");
				scanf("%d",&kcbakiye);
		while(kcbakiye>0)	
		{
				
					if(kcbakiye>2000)
		{
				
			printf("Yetersiz bakiye!Lutfen gecerli bir miktar giriniz:\n");
			scanf("%d",&kcbakiye);
			if(kcbakiye<=2000)
			{
			miktar=miktar-kcbakiye;
			printf("Mevcut yeni para miktariniz:%d\n",miktar);		
           }
       
			return 0;
		}
		if(kcbakiye<=2000)
		{
			
			miktar=miktar-kcbakiye;
printf("Mevcut yeni para miktariniz:%d",miktar);		
}
     			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("L�tfen gecerli bir secenek seciniz!\n");
				 	scanf("%d",&secenek);
				 	i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 		
					 }//while sonu
				
				 }
				 break;
			}//kcbakiye while sonu
			}
	break;
					
					
    case 4:
	printf("G�ndermek istediginiz kisinin tc kimlik numarasini giriniz:\n");
	printf("Ana men�ye d�nmek icin 1 tuslay�n�z.Devam etmek icin 2 tuslay�n�z!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto geridon;
		}
		if(kacis==2){
	scanf("%d",&tcno);
	printf("G�ndereceginiz para miktarini giriniz:");
	scanf("%d",&kcbakiye);
	while(kcbakiye>0)
	{
	
	miktar=miktar-kcbakiye;
	if(kcbakiye>2000)
		{
			printf("Yetersiz bakiye!Lutfen gecerli bir miktar giriniz:\n");
			scanf("%d",&kcbakiye);
		}
						
	printf("Mevcut yeni para miktariniz:%d\n",miktar);
	printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
    scanf("%d",&secenek);
    if(secenek==1){
                 goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("L�tfen gecerli bir secenek seciniz!\n");
				 	scanf("%d",&secenek);
				 		i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!");
				 }
				 		
					 }//while sonu
				
				 }
	break;
	}//kcbakiye while sonu
	
			}
	break;
	case 5:
		printf("Mevcut para miktariniz:%d\n",miktar);
		     			printf("Ba�ka bir i�lem yapmak ister misiniz?\nEvet(1)\tHay�r(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("L�tfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kart�n�z� almay� unutmay�n�z!\n");
				 }
				 		
					 }//while sonu
				
				 }
		break;
		
		case 6:
			printf("Kartinizi almayi unutmayiniz\n");
   
}
     		break;	
     				
   }
	
       	
       	
       	
       	
       	
   

     

}
		
}
}
	

	
	

