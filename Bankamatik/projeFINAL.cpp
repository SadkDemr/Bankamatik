#include<stdio.h>
#include<locale.h>//Yazým dilini türkçe yapmak için
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



	
	printf("***************Bankamatiðimize Hoþgeldiniz***************\n");
	printf("Saat=%s\n",saat(karakter));
	printf("->1:Kartsýz Ýþlemler\n->2:Kartlý Ýþlemler Ýçin Lütfen kartýnýzý sokunuz.\n");
	scanf("%d",&islemler);
	switch(islemler)
	{
	
	case 1:
 kartsizislemler:
	printf("Kartsýz iþlemlere hoþgeldiniz.\n->1:IBAN'a para yatýr\n->2:Hesaba para yatýrma.\n");
	scanf("%d",&kartsizislem);
	switch(kartsizislem)
	{
	
	case 1:
		
		printf("IBAN'a para yatýr.\n");
		printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto kartsizislemler;
		}
		if(kacis==2){
			
		
		printf("Para yatýrmak istediðiniz IBAN numarasýný giriniz.(24 haneli olmalýdýr.)\n");
		scanf("%s",&iban);
        basamakSayisi = strlen(iban);//strlen fonksiyonu ile karakter dizisi uzunluðunu yani (basamak sayýsýný elde edip) basamakSayisi deðiþkenine atýyoruz.
 	    if(basamakSayisi==24)
       {
       	printf("Girdiðiniz IBAN numarasý doðru.\n");
       	printf("Lütfen göndereceðiniz miktarý giriniz.\n");
       	scanf("%d",&gmiktar);
       	printf("Baþarýyla Gönderilmiþtir.\n");
       	     			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto kartsizislemler;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("Lütfen gecerli bir secenek seciniz!");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto kartsizislemler;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!");
				 }
				 		
					 }//while sonu
				
				 }
	   }//IBAN na para yatýrma sonu.
       else
       {
       
       	printf(" %d Basamaklý sayý  girdiniz lütfen 24 basamaklý olan IBAN numarasýný giriniz.\n",basamakSayisi);
       
	   }
}
	   break;
	   case 2:
	   	{
	
	
printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto kartsizislemler;
		}
		if(kacis==2){
			printf("T.C kimlik numaranýzý giriniz.\n");
			   scanf("%s",&tc);
		
		if(kacis==-1){
			goto kartsizislemler;
		}
    basmaksayisi=strlen(tc);
    if(basmaksayisi==11)
    {
    	    printf("Bilgileriniz kontrol ediliyor lütfen bekleyiniz.\n");
    printf("Telefon numaranýzý giriniz.\n");
    printf("(+90)");
    scanf("%d",&no);
     while(no>0)
       {
        basamaksayisi++;  
        no/=10;         
       }
	   	if(basamaksayisi==10)
       {//telefon no doðruysa
       	printf("Lütfen telefonunuza gelen 4 haneli þifeyi yaznýz.\n");
       	scanf("%d",&cepsifre);
       	while(cepsifre>0)
       	{
		   
        basSayisi++;  
        cepsifre/=10; 
       }
       if(basSayisi==4)
       {
       	
       	printf("Girdiðiniz þifre numarasý doðrudur.\n");
	
					 }//while sonu
				    else
    {
    
    	printf("4 basamaklý olan þifrenizi %d basamaklý girdiniz.\n",basSayisi);
    	break;
	}
       //telefon no için
   }
}
       else
       {
       	printf("10 basamaklý olan telefon numaranýzý %d basamaklý girdiniz.\n",basamaksayisi);
       	break;
	   }
    	
	}
	else
	{
		printf(" 11 basamaklý olan T.C kimlik numaranýzý %d basamaklý girdiniz.\n",basmaksayisi);
		break;
	}
		geridon2:

       	printf("Kartsiz  Ýslemlere Hosgeldiniz!\nYapmak istediginiz Ýslemi Seciniz\n1:Para Cekme\t\t\t\t\t2:Para Yatirma\n\t\t\t\t\n3:Bakiye Sorgulama\t\t\t\t\n\n\n");
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
				printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("Lütfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 		
					 }//while sonu
		break;
	}//case 1 için
	break;
}//kcbakiye while sonu
break;

	case 2:
	{
		printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
				printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
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
     			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("Lütfen gecerli bir secenek seciniz!");
				 	scanf("%d",&secenek);
				 	i++;
                if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 		
					 }//while sonu
				
				 }
				 break;
			}//kcbakiye while sonu
			}
     			break;
					
					
    
	case 3:
		printf("Mevcut para miktariniz:%d\n",miktar);
			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("Lütfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon2;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 	break;
				 }
				 		
					 }//while sonu
		break;
		
		
		
	}//switch iþlem için
    }//if cep þifre sayýsý için
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
			geridon: //geri dönmek için kullandýðýmýz etiket adý

		 printf("Kartli Ýslemlere Hosgeldiniz!\nYapmak istediginiz Ýslemi Seciniz\n1:Para Cekme\t\t\t\t\t2:Para Yatirma\n3:Fatura Odeme\t\t\t\t\t4:Havale Yapma\n5:Bakiye Sorgulama\t\t\t\t6:Kart Iade\n\n\n\n");
	printf("Yapmak istediginiz islemi seciniz:\n");
	scanf("%d",&islem2);
    }
	switch(islem2){

	case 1:
		printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
		printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
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
			     			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			
     		
     		
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("Lütfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }

					 }//while sonu
			
				 }
	break;		
	}//kcbakiye while sonu
	
			}
	break;
	
	
	case 2:
				printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
				printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
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
     			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("Lütfen gecerli bir secenek seciniz!");
				 	scanf("%d",&secenek);
				 	i++;
                if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 		
					 }//while sonu
				
				 }
				 break;
			}//kcbakiye while sonu
			}
     			break;
     			
     			
    case 3:
				printf("Hesabinizda bulunan mevcut para miktari:%d\n",miktar);
				printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
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
     			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("Lütfen gecerli bir secenek seciniz!\n");
				 	scanf("%d",&secenek);
				 	i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 		
					 }//while sonu
				
				 }
				 break;
			}//kcbakiye while sonu
			}
	break;
					
					
    case 4:
	printf("Göndermek istediginiz kisinin tc kimlik numarasini giriniz:\n");
	printf("Ana menüye dönmek icin 1 tuslayýnýz.Devam etmek icin 2 tuslayýnýz!\n");
		scanf("%d",&kacis);
		while(kacis==1){
			goto geridon;
		}
		if(kacis==2){
	scanf("%d",&tcno);
	printf("Göndereceginiz para miktarini giriniz:");
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
	printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
    scanf("%d",&secenek);
    if(secenek==1){
                 goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 	printf("Lütfen gecerli bir secenek seciniz!\n");
				 	scanf("%d",&secenek);
				 		i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!");
				 }
				 		
					 }//while sonu
				
				 }
	break;
	}//kcbakiye while sonu
	
			}
	break;
	case 5:
		printf("Mevcut para miktariniz:%d\n",miktar);
		     			printf("Baþka bir iþlem yapmak ister misiniz?\nEvet(1)\tHayýr(2)");
     			scanf("%d",&secenek);
     			if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
				 }
				 else{
				 	while(secenek!=1 && secenek!=2 && i<3)
				 	{
				 						 	printf("Lütfen gecerli bir secenek seciniz!\n");
				 						 	scanf("%d",&secenek);
				 						 	i++;
if(secenek==1){
     				goto geridon;
     				
				 }
				 if(secenek==2){
				 	printf("Kartýnýzý almayý unutmayýnýz!\n");
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
	

	
	

