#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
char *yemekadi(char *metin)
{
    int i;
    int uzunluk =strlen(metin);
    int sayac=0;
    char *metin2 = (char *)malloc((uzunluk + 1) * sizeof(char));

    for (i = 0; i<uzunluk; i++) {
        if (isalpha(metin[i])) {
            metin2[sayac] = metin[i];
            sayac++;
        }
    }
    metin2[sayac] = '\0';
    return metin2;

}
int yemekdegeri(int *kac, int *yemek)
{ int a=*kac;

    return a+=*yemek ;
}

char* cinsiyet(secim2)
{
    switch(secim2)
    {
    case 1:
        return "Helena";
        break;
    case 2:
        return "Tom";
    }
}
int siviic(int *deger,int *su)
{
    return *deger+*su;
}
int uyu(int *a,int *deger,int *b)
{
    switch(*a)
    {
    case 1:
        if(*deger<5)
            return 0;
        if(*b>=5)
            return 1;
        if(*b<*deger)
        {
            printf("bebeginiz sallaniyor\n");
            return uyu(&a,&deger,&b+1);
        }
        break;
    case 2:
        if(*deger<10)
            return 0;
        if(*b>=10)
            return 1;
        if(*b<*deger)
        {
            printf("bebeginize kitap okunuyor\n");
            return uyu(&a,&deger,&b+1);
        }
        break;
    case 3:
        if(*deger<7)
            return 0;
        if(*b>=7)
            return 1;
        if(*b<*deger)
        {
            printf("bebeginize ninni soyleniyor\n");
            return uyu(&a,&deger,&b+1);
        }
        break;

    }

}
int tuvaletyapma(int *secim,int *t,int *secim2)
{


    switch(*secim)
    {
    case 1:
        return *t-*secim2;
        break;
    case 2:
        return *t-*secim2;
        break;
    case 3:
        return *t-*secim2;
        break;}
}
int temizle(int *a)
{
    switch(*a)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 0;
        break;
    default:
        return -1;

    }
}
int sevgi(int *dakika,int *s)
{
    if(*dakika>10)
        return *s+=4;
    else
        return *s++;
}
int mutluluk(int *d,int *mut)
{
    if(*d>7)
        return *mut+=5;
    else
        return *mut+=2;
}
void egitim(int *s,int *deg)
{ int i,j;
    char harf[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','P','r','s','t','u','v','y','z'};
    char renk[10][10]= {"mor","sari","siyah","pembe","turuncu","mavi","yesil","beyaz","kirmizi"};
    switch(*s)
    {
    case 1 :
        for(i=1; i<=*deg; i++)
        {
            printf(" %d",i);
        }printf("\nSayilari ogretildi\n");
        break;
    case 2:
        for(i=0; i<*deg; i++)
        {
            for(j=0; j<10; j++)
            {
                printf("%c",renk[i][j]);
            }printf("\t");
        }printf("\nRENKLERI OGRETILDI\n");
        break;
    case 3:
        for(i=0; i<*deg; i++)
        {
            printf("%c\t",harf[i]);
        }printf("\nHARFLERI OGRETILDI\n");
        break;
    }
}
int eglence(int *z,int *terc6,int *eg)
{
    int sayi5;
    srand(time(0));
    switch(*z)
    {
        case 1:  sayi5=rand()%5+1;
                if(terc6==sayi5)
                   return printf("Bebegi buldunuzzz eglence seviyemiz 1 artti\n");
                else
                   return printf("Bebegi bulamadiniz bebek sizi yendi eglence seviyemiz 3 artti\n");
         break;
         case 2: if(terc6==1)
                      {  int a = *eg+=3;
                          return a;}
                 else if(terc6==2)
                      {  int b = *eg+=2;
                          return b;}
                 else
                    {  int c = *eg++;
                          return c;}
              break;
        case 3: if(terc6>3)
                    return 5;
                else
                    return 3;
                break;
      default: printf("hatali deger girdiniz\n");

    }
}
int bakim(int *sayi,int *deger,int *duzey)
{
    switch(*sayi)
    {
    case 1:  return *duzey+=(int)(*deger/2);

        break;
    case 2:  return *duzey+=(int)(*deger/3);
        break;
    case 3:   return *duzey+=(int)(*deger/3);
        break;
    default: printf("hatali deger girdiniz\n");
    }
}
int saglik (int *tercih,int *a,int *sag)
{
    switch(*tercih)
    {
        case 1: return *sag+=(*a * 4);
        break;
        case 2: return *sag+=(*a * 10);
        break;
        case 3: return *sag+=(*a * 3);
        break;
        default: printf("hatali deger girdiniz\n");
    }
}
int sosyal(int *secim,int *sure,int *so)
{
    switch(*secim)
    {
    case 1: return *so+=(int)*sure/2;
    break;
    case 2:return *so+=(int)*sure/2;

     break;
    case 3: return *so+=(int)*sure/2;

    break;
    default: printf("hatali deger girdiniz\n");
}}
int main ()
{
    int i,j;
    char metin[10][100];
    int kac;
    int surup,corba,iksir=1;char metin3[10][100];int sayac=0;int tuvalet=7,bez=4,lazimlik=5;
    int karpuz=2,biftek=5,tavuk=5,salata=3,yumurta=4;
    int secim,aa,secim8,secim9,terc,terc1,terc5,terc6,terc7,terc8,terc9,tara,kopuk,dis;
    int secim3,dk,dk1,dk2,ter1;
    int yas=0;int bir=1,iki=2,uc=3;
    int a=0;char metin2[10][100];
    int y=0,u=0,t=10,s=0,so=0,ok=0,eg=0,h=0,sag=0,su=0,mut=0; //tuvalet degerini sınırda başlattım böylece oyuna tuvalet ile başlanmalı
    char fonksiyonlar[10][10]= {"yemekye","uyu","tuvalet","sevgi","sosyal","egitim","eglence","temizlik","saglik","siviic","mutluluk"};
    int deger[15]= {y,u,t,s,so,ok,eg,h,sag,su,mut};//Gerekli fonsiyonların düzeylerini belirten dizi
    deger[1]=2;deger[10]=0;deger[3]=5;deger[0]=1;deger[4]=5;deger[9]=3;deger[5]=5;deger[7]=1;deger[6]=5;deger[8]=10;deger[2]=0;
    int secim2,tercih5,tercih6,tercih7,tercih8,tercih9;
    int secim4,salla,kitap,ninni,saat,saat2,saat3,saat4,secim5,secim6,secim7,tercih,tercih1,tercih2,tercih3,tercih4;
    int sut=2,su2=3,portakalsuyu=2;
    printf("       --BEBEK BAKMA OYUNUNA HOSGELDINIZ--  \n");
    printf("Bebeginizin cinsiyeti ne olsun?\n");
    printf("1---KIZ \n2--ERKEK\n");
    scanf("%d",&secim2);//kullanıcının sectigi cinsiyeti cinsiyet fonksiyonuna atıp her iki seçenek için farklı isim çıkardım
    printf("Bebeginizin ismi %s\n",cinsiyet(secim2));
    printf("%s saglikli bir bebek \n",cinsiyet(secim2));
    printf("%s arkadaslarinin ismi Janie ve Maya\n",cinsiyet(secim2));
    printf("%s size merhaba diyor..\n",cinsiyet(secim2));
    do
    {
        if(deger[9]+su<0)//susuzluk değeri sıfırın altına düşerse bebek ölür
        {
            printf("bebeginiz susuzluktan oldu\n");
            break;
        }
        if(deger[0]+y<0)//aclik degeri sifirin altina duserse ölür
        {
            printf("Bebeginiz acliktan oldu oyun bitti\n");
            break;
        }
        if(deger[8]+sag<0)//saglik degeri sifirin altındaysa bebek ölür
        {
            printf("Bebeginiz sagligini kaybettiginden oldu oyun bitti\n ");
            break;
        }
        if(deger[1]+u<0)//uyku seviyesi sıfırın altındaysa bebek ölür
        {
            printf("bebeginiz uykusuzluktan oldu oyun bitti");
            break;
        }

        if(deger[8]+sag>15)//sağlık seviyesi belirli olan değeri geçtiğinde yaşı 1 artacak
        {
            yas+=1;
            break;
        }
        if(t+deger[2]>10)//tuvalet değeri 10 u gectigi zaman bebek altına yapar ve sağlık ve hijyen degeri düşer tuvaleti yaptırılmadığı sürece
        {
            h-=2;
            printf("\nBEBEGINIZ ALTINA YAPTI TEMIZLEYIN\n");
            sag--;

        }
        printf("\nBebeginizin yasi %d\n",yas);//Belirlenen koşula göre değeri artacak
        printf("\n%s saglik seviyesi %d\n",cinsiyet(secim2),deger[8]+sag);
        for(i=0; i<deger[8]+sag; i++)
        {
            printf("*");
        }
        printf("\n%s tokluk seviyesi %d\n",cinsiyet(secim2),deger[0]+y);
        for(i=0; i<deger[0]+y; i++)
        {
            printf("*");
        }
        printf("\n%s su seviyesi %d\n",cinsiyet(secim2),deger[9]+su);
        for(i=0; i<deger[9]+su; i++)
        {
            printf("*");
        }

        printf("\n%s uyku seviyesi %d\n",cinsiyet(secim2),deger[1]+u);
        for(i=0; i<deger[1]+u; i++)
        {
            printf("*");
        }
        printf("\n%s hijyen seviyesi %d\n",cinsiyet(secim2),deger[7]+h);
        for(i=0; i<deger[7]+h; i++)
        {
            printf("*");
        }
        printf("\n%s tuvalet ihtiyaci %d\n",cinsiyet(secim2),deger[2]+t);
        for(i=0; i<deger[2]+t; i++)
        {
            printf("*");
        }
        printf("\n%s sevgi seviyesi %d\n",cinsiyet(secim2),deger[3]+s);
        for(i=0; i<deger[3]+s; i++)
        {
            printf("*");
        }
        printf("\n%s sosyallik seviyesi%d\n",cinsiyet(secim2),deger[4]+so);
        for(i=0; i<deger[4]+so; i++)
        {
            printf("*");
        }
        printf("\n%s egitim seviyesi %d\n",cinsiyet(secim2),deger[5]+ok);
        for(i=0; i<deger[5]+ok; i++)
        {
            printf("*");
        }
        printf("\n%s eglence seviyesi %d\n",cinsiyet(secim2),deger[6]+eg);
        for(i=0; i<deger[6]+eg; i++)
        {
            printf("*");
        }
        printf("\nBebegin mutluluk seviyesi %d\n",deger[10]+mut);
        for(i=0; i<deger[10]+mut; i++)
        {
            printf("*");
        }
        printf("\n%s a ne yapmak istersiniz\n",cinsiyet(secim2)); //Bebeğin ihtiyaçları ve seviyeleri
        printf("0--Yemek yedir\n");
        printf("1--Sivi icir\n");
        printf("2--Uyut\n");
        printf("3--Tuvaletini yaptir\n");
        printf("4--%s Sevgi goster\n",cinsiyet(secim2));
        printf("5--%s Sosyallestir\n",cinsiyet(secim2));
        printf("6--%s Bir seyler ogret\n",cinsiyet(secim2));
        printf("7--%s Eglendir\n",cinsiyet(secim2));
        printf("8--%s Hijyen ihtiyacini gider\n",cinsiyet(secim2));
        printf("9--Bebegine saglik takviyesi yap\n",cinsiyet(secim2));
        printf("Oyundan cikmak icin -1 e basiniz\n");
        scanf("%d",&secim);

        switch(secim)
        {
            case 0: printf("karpuz\nbiftek\ntavuk\nsalata\nyumurta\n");
                    printf("kac tane yedireceksiniz\n");
                    scanf("%d",&kac);
                    printf("Hangi yemegi yedirmek istersiniz\n");
                    scanf("%s",&metin);
                    char *yenimetin=yemekadi(metin);//fonksiyondan gelen metini yenimetine atar
                    if(!strcmp("karpuz",metin))//eğer metinler aynıysa if(1) olur ve bu if e girer.
                    {
                        printf("bebeginiz %d %s yedi",kac,yenimetin);
                        u--;so--;ok--;eg--;s--;t++;h--;mut++;y+=yemekdegeri(&kac,&karpuz);
                        break;
                    }
                    if(!strcmp("biftek",metin))
                    {
                        printf("bebeginiz %d %s yedi",kac,yenimetin);
                        u--;so--;ok--;eg--;s--;t++;h--;mut++;y+=yemekdegeri(&kac,&biftek);
                        break;
                    }
                    if(!strcmp("tavuk",metin))
                    {
                        printf("bebeginiz %d %s yedi",kac,yenimetin);
                        u--;so--;ok--;eg--;s--;t++;h--;mut++;y+=yemekdegeri(&kac,&tavuk);
                        break;
                    }

                    if(!strcmp("salata",metin))
                    {
                        printf("bebeginiz %d %s yedi",kac,yenimetin);
                        u--;so--;ok--;eg--;s--;t++;h--;mut++;y+=yemekdegeri(&kac,&salata);
                        break;
                    }

                    if(!strcmp("yumurta",metin))
                    {
                        printf("bebeginiz %d %s yedi",kac,yenimetin);
                        u--;so--;ok--;eg--;s--;t++;h--;mut++;y+=yemekdegeri(&kac,&yumurta);
                        break;
                    }

            break;
        case 1:
            printf("1--portakal suyu\n2--sut\n3--su\n");
            scanf("%d",&secim3);
            if(secim3==1)
            {
                printf("bebeginiz portakal suyu icti su seviyesi %d kadar artti ",siviic(&portakalsuyu,&su));
                u--;y--;so--;mut--; su+=siviic(&portakalsuyu,&su);//Seçimine göre ilgili fonksiyona atılır.
                s--; eg--; h--;
                t+=siviic(&portakalsuyu,&su);
                break;
            }
            else if(secim3==2)
            {
                printf("bebeginiz sut icti su seviyesi %d kadar artti",siviic(&sut,&su));
                u--; y--; so--;mut--;su+=siviic(&sut,&su);s--;eg--;h--;
                t+=siviic(&sut,&su);//zellikle tuvalet ve su seviyesi değişir.
                break;
            }
            else if(secim3==3)
            {
                printf("bebeginiz su icti su seviyesi %d kadar artti",siviic(&su2,&su));
                u--;h--;eg--;s--;su+=siviic(&su2,&su);mut--;so--;y--;
                t+=siviic(&su2,&su);
                break;
            }
            else
                printf("gecerli bir deger girin\n");

        break;
        case 2 :

            printf("Bebeginizi nasil uyutmak istersiniz\n");
            printf("1--Sallayarak\n");
            printf("2--kitap okuyarak\n");
            printf("3--ninni soyleyerek\n");
            printf("4--bu asamadan cik\n");
            scanf("%d",&secim4);
            switch(secim4)
            {
            case 1:
                printf("Bebeginizi kac kez sallayacaksiniz\n");
                scanf("%d",&salla);
                u+=(int)salla/2;//belrili bir denkleme göre uyku seviyesi değişir
                if(uyu(&bir,&salla,&a)==0)//fonksiyondan gelen geri dönüşe göre  bebeğin uyku durumu belirlenir.
                    {printf("bebek uyumadi\n");
                    break;}
                else
                    {printf("bebeginiz uyudu\n");
                    printf("Bebeginiz kac saat uyusun ?\n");
                    scanf("%d",&saat);
                      if(saat<5)
                       {
                        y--;t++;so--;eg--;ok--; h--;mut++;su--;
                         continue;
                        }
                     else
                     {
                          y-=2;t+=2;so-=2;eg-=2;ok-=2;h-=2; mut+=2;su-=2;
                            continue;
                     }}
            break;
            case 2:
                printf("kac dakika kitap okunsun?\n");
                scanf("%d",&kitap);
                u+=(int)kitap/2;
                if(uyu(&iki,&kitap,&a)==0)
                    {printf("bebek uyumadi biraz daha kitap okuyun ya da baska yontem deneyin\n");
                    break;}
                else
                    { printf("bebeginiz uyudu\n");
                      printf("Bebeginiz kac saat uyusun ?\n");
                      scanf("%d",&saat);
                      if(saat<5)
                      {
                       y--;t++;so--;eg--;ok--; h--;mut++;su--;
                       continue;
                    }
                     else
                       {
                      y-=2;t+=2;so-=2;eg-=2;ok-=2;h-=2; mut+=2;su-=2;
                        continue;
                        }}
            break;
            case 3:
                printf("kac dakika ninni okunsun?\n");
                scanf("%d",&ninni);
                u+=(int)ninni/2;
                if(uyu(&uc,&ninni,&a)==0)
                    {printf("bebek uyumadi biraz daha ninni soyleyin ya da baska yontem deneyin\n");
                    break;}
                else
                    {printf("bebek uyudu\n");
                    printf("Bebeginiz kac saat uyusun ?\n");
                     scanf("%d",&saat);
                    if(saat<5)
                    {
                      y--;t++;so--;eg--;ok--; h--;mut++;su--;
                    continue;
                    }
                    else
                    {
                     y-=2;t+=2;so-=2;eg-=2;ok-=2;h-=2; mut+=2;su-=2;
                     continue;
                      }}
            break;
            case 4: continue;
            break;
            default :
                printf("gecerli bir yontem seciniz\n");
            }

            break;
        case 3:
            printf("1--Bebegin bezini degistir\n");
            printf("2--Bebegi tuvalete gotur\n");
            printf("3--Bebegi lazimliga gotur\n");
            printf("4--Bu asamadan vazgec\n");
            scanf("%d",&secim5);
            switch(secim5)
            {
            case 1:
                printf("bebegin tuvalet ihtiyaci %d kadar azaldi\n",tuvaletyapma(&bir,&t,&bez));//her bi seçeneğin üstte tanımlanan bir değeri var
                y--;u--;so--;eg--;ok--; su-=2;
                t-=tuvaletyapma(&bir,&t,&bez);//fonksiyondan gelen değere göre tuvalet seviyesi azalır.
                printf("bebeginiz temizlensin mi?\n");
                printf("1e/2h\n");
                scanf("%d",&tercih3);
                temizle(&tercih3);
                if(temizle(&tercih3)==0)//sadece tuvalet fonksiyonundan erişilen fonksiyona gider.
                {
                    printf("Bebeginiz temizlenmedi SAGLIK VE HIJYEN DEGERI DUSTU\n");
                    h-=2;sag--;mut--; s--;
                    break;}
                if(temizle(&tercih3)==1)
                {
                    printf("Bebeginiz temizlendi\n");
                    h++;mut++;s++;
                    break;

                }
                if(temizle(&tercih3==-1))
                    {printf("gecerli bir tercih giriniz\n");
                    break;}
              break;

            case 2:
                printf("bebeginizin tuvalet ihtiyaci %d kadar azaldi\n",tuvaletyapma(&iki,&t,&tuvalet));
                y--;t-=tuvaletyapma(&iki,&t,&tuvalet); u--;so--;eg--;ok--; su-=3;
                printf("bebeginiz temizlensin mi?\n");
                printf("1e/2h\n");
                scanf("%d",&tercih4);
                temizle(&tercih4);
                if(temizle(&tercih4)==0)
                {
                    printf("Bebeginiz temizlenmedi SAGLIK VE HIJYEN DEGERI DUSTU\n");
                    h-=2;sag--;mut--;s--;
                    break;

                }
                if(temizle(&tercih4)==1)
                {
                    printf("bebeginiz temizlendi\n");
                    h++; sag++;s++;mut++;
                    break;}
                if(temizle(&tercih4==-1))
                    printf("gecerli bir tercih giriniz\n");
                break;
            case 3:
                printf("bebeginizin tuvalet ihtiyaci %d kadar azaldi\n",tuvaletyapma(&uc,&t,&lazimlik));
                y--;t-=tuvaletyapma(&uc,&t,&lazimlik); u--;so--;eg--;ok--; su-=3;
                printf("bebeginiz temizlensin mi?\n");
                printf("1e/2h\n");
                scanf("%d",&tercih4);
                temizle(&tercih4);
                if(temizle(&tercih4)==0)
                {
                    printf("Bebeginiz temizlenmedi SAGLIK VE HIJYEN DEGERI DUSTU\n");
                    h-=2;sag--;mut--;s--;
                    break;

                }
                if(temizle(&tercih4)==1)
                {
                    printf("bebeginiz temizlendi\n");
                    h++; sag++;s++;mut++;
                    break;}
                if(temizle(&tercih4==-1))
                    printf("gecerli bir tercih giriniz\n");

            break;
            case 4:
                continue;
                break;
            default:
                printf("gecerli bir tercih giriniz\n");

            }
            break;
        case 4:
            printf("BEBEK SEVGI SAATI\n");
            printf("1--Basini oksa\n");
            printf("2--Karnini gidikla\n");
            printf("3--Bebegi op\n");
            printf("4--Bu asamadan cik\n");
            scanf("%d",&secim6);
            switch(secim6)
            {
            case 1 :
                printf("Bebeginizin basi oksaniyor\n");
                printf("Kac dakika oksansin\n");
                scanf("%d",&dk);
                if(sevgi(&dk,&s)>=3)
                  {printf("Bebeginiz oldukca mutlu bebeginizin mutluluk seviyesi %d kadar artti\n",mutluluk(&dk,&mut));//sadece bu ihtiyaçtan erişilen mutluluk fonksiyonu
                  y-=2;u-=3;so--;s+=sevgi(&dk,&s);h--;su--;t+=2;ok--;eg--;}
                else
                 {printf("Bebeginizin mutluluk seviyesi %d kadar artti\n",mutluluk(&dk,&mut));
                 y--;u--;so--;s+=sevgi(&dk,&s);h--;su--;t++;ok--;eg--;}

            break;
            case 2:
                printf("Bebeginizin karni gidiklaniyor\n");
                printf("Kac dakika gidiklansin\n");
                scanf("%d",&dk1);
                if(sevgi(&dk1,&s)>=3)
                  {printf("Bebeginiz oldukca mutlu bebeginizin mutlulugunuzun seviyesi %d kadar artti \n",mutluluk(&dk1,&mut));
                  y-=2;u-=3;so++;s+=sevgi(&dk1,&s);h--;su--;t+=2;eg--;ok--;}
               else
                  {printf("Bebeginizin mutluluk seviyesi %d kadar artti\n",mutluluk(&dk1,&mut));
                  y--;u--;so++;s+=sevgi(&dk1,&s);h--;su--;t++;eg--;ok--;}
              break;
            case 3:
              printf("Bebeginiz opuluyor\n");
              printf("Kac kez opulsun\n");
              scanf("%d",&dk2);
              if(sevgi(&dk2,&s)>=3)
                  {printf("Bebeginiz oldukca mutlu bebeginizin mutlulugunuzun seviyesi %d kadar artti\n",mutluluk(&dk2,&mut));
                    y-=2;u-=3;so++;s+=sevgi(&dk2,&s);h--;su--;t+=2;eg--;ok--;}
              else
                  {printf("Bebeginizin mutluluk seviyesi %d kadar artti\n",mutluluk(&dk2,&mut));
                    y--;u--;so++;s+=sevgi(&dk2,&s);h--;su--;t++;eg--;ok--;}
              break;
            case 4:
                continue;
                break;
            default:
                printf("Gecerli bir sevgi yontemi giriniz\n");
            }
            break;
        case 5:
            printf("BEBEK SOSYALLESME ZAMANI\n");
            printf("1--Bebegi parka gotur\n");
            printf("2--Bebegi arkadaslariyla bulustur\n");
            printf("3--Bebegi krese gotur\n");
            printf("4--Bu asamadan cik\n");
            scanf("%d",&secim7);
            switch(secim7)
            {
            case 1: printf("Bebek parka geldi\n");
                    printf("Bebek parkta kac saat dursun\n");
                    scanf("%d",&saat2);
                  printf("Bebeginiz parkta %d saat kadar durdu sosyallik seviyesi %d artti\n",saat2,sosyal(&bir,&saat2,&so));//bebeğin ne kadar parkta olduğunu ve sosyalliğinin ne kadar arttığını söyler.
                   h--;u+=2;su-=2;y-=2;mut++;ok--;t+=4;eg--;

              break;
            case 2:printf("Bebek Janie ve Maya ile bulustu\n");
                    printf("Bebek kac saat arkadaslari ile dursun\n");
                    scanf("%d",&saat3);
                     printf("Bebeginiz parkta %d saat kadar durdu sosyallik seviyesi %d artti\n",saat3,sosyal(&iki,&saat3,&so));
                   h--;u+=2;su-=2;y--;mut++;ok--;t+=4;
         break;

            case 3:printf("Bebek krese geldi\n");
                    printf("Bebek kreste kac saat dursun\n");
                    scanf("%d",&saat4);
                    printf("Bebeginiz parkta %d saat kadar durdu sosyallik seviyesi %d artti\n",saat4,sosyal(&uc,&saat4,&so));
                    h--;u+=2;su-=2;y--;mut++;ok--;t+=4;


          break;
        case 4:   continue;
            break;
                 default : printf("Gecerli bir sayi giriniz\n");}
         break;
         case 6:
                printf("Bebege bir seyler ogretme zamani\n");
                printf("1--Sayilari ogret\n");
                printf("2--Renkleri ogret\n");
                printf("3--Harfleri ogret\n");
                printf("4--Bu asamadan cik\n");

                scanf("%d",&tercih6);
                switch(tercih6)
                {
                case 1:
                    printf("Hangi sayiya kadar ogretilsin\n");
                    scanf("%d",&tercih5);
                    egitim(&bir,&tercih5);
                    if(tercih5>10)
                    {
                        y-=3;eg-=2; so-=2;
                        h--;ok+=tercih5;
                        t+=2;s--;mut--;su-=2;
                       break;
                    }
                    else
                    { y--;eg--;so--;t++;
                      ok+=tercih5;mut--;su--;h--;
                       break;}
                case 2:
                     printf("Kac tane renk ogretilsin\n");
                    scanf("%d",&tercih7);
                     if(tercih7>9)//tanımlanan renklerden fazla sayıda öğrenemez.
                    {
                        printf("bebek tek seferde o kadar renk ogrenemez\n");
                        continue;
                    }
                    egitim(&iki,&tercih7);
                    if(tercih7>5)
                    {
                        y-=3;eg-=2;so-=2;
                        h--;ok+=tercih7;
                        t+=2;s--;mut--;su-=2;
                        break;
                    }
                    else
                    { y--;eg--;so--; t++;
                      ok+=tercih7;mut--;su--;h--;
                      break;}
                case 3:
                    printf("Kac tane harf ogretilsin\n");
                    scanf("%d",&tercih9);
                      if(tercih9>20)
                    {
                        printf("bebek tek seferde o kadar harf ogrenemez\n");
                        continue;
                    }
                    egitim(&uc,&tercih9);
                    if(tercih9>10)
                    {
                        y-=3;eg-=2; so-=2;
                        h--;ok+=tercih9;
                        t+=2;s--;mut--;su-=2;

                        break;
                    }
                    else
                    { y--;eg--;so--;t--;
                      ok+=tercih9;mut--;su--;h--;
                       break;}

                case 4:   continue;
                  break;
                 default : printf("Gecerli bir tercih giriniz\n");}
              break;
             case 7:
                      printf("BEBEK EGLENCE ZAMANI\n");
                      printf("1--Oyun oynat\n");
                      printf("2--Sarki soyle ve dans ettir\n");
                      printf("3--Janie ve Maya ile bulustur\n");
                      printf("4--Bu asamadan cik\n");
                     scanf("%d",&terc);
                    switch(terc)
                   {
                      case 1: printf("Bebegin en sevdigi oyun saklambac\n");
                              printf("bebekle beraber saklambac oynamak ister misiniz\n");
                              printf("1e\n2h");
                              scanf("%d",&terc5);
                              switch(terc5)
                              {
                              case 1: printf("bebeginiz nerde tahmin edebilir misin?\n");
                              printf("1--mutfakta\n2--tuvalette\n3--koridorda\n4--odasında\n5--balkonda\n");//oyuna başladı ve nerede olduğunu tahmin etmesi gerekir.
                                      scanf("%d",&terc6);
                                      eglence(&bir,&terc6,&eg);//fonksiyona nerde oldugunu tahmin ettigi degeri attim
                                      eg+=3;y--;u--;so++;t++;s++;h--;mut++;
                             break;
                              default: printf("bebekle oyun oynanmiyor\n");
                                   continue;
                                break;}
                        break;

                       case 2: printf("hangi sarkiyi calalim\n");
                                      printf("1--Baby shark\n2--Five little monkeys\n3--Twinkle twinkle little star\n");
                                      scanf("%d",&terc7);
                                      //kullanıcının açtığı şarkıya göre eğlence düzeyi değişecek
                                      u--;so++;s++;h--;y--;ok--;t++;mut++;
                                      printf(" Eğlence seviyesi %d artti",eglence(&iki,&terc7,&eg));
                                      eg+=eglence(&iki,&terc7,eg);
                        break;
                        case 3:  printf("bebeginiz kac saat Janie ve Maya ile dursun\n");
                                 scanf("%d",&terc8);
                                 if(terc8>3)
                                 {
                                     printf("Bebek arkadaslariyla %d durdu.",terc8);
                                     u--;y-=2;so++;ok--;t+=2;s++;h--;eg+=eglence(&iki,&terc8,&eg);mut++;
                                 }else
                                 {    printf("Bebek arkadaslariyla %d durdu.",terc8);
                                      u--;y--;so++;ok--;t++;s++;h--;eg+=eglence(&iki,&terc8,&eg);mut++;
                                 }
                        break;
                         case 4:
                             continue;
                        break;
                        default : printf("Gecerli bir tercih giriniz\n");
                  }
                break;
                case 8:
                printf("BEBEGINI TEMIZLEME SAATI\n");
                printf("1--Banyo\n");
                printf("2--Sac tarama\n");
                printf("3--Dis fircalama\n");
                printf("4--Bu asamadan cik\n");
                scanf("%d",&terc1);
                switch(terc1)
                {
                case 1:
                    printf("Bebeginizi kac defa kopukleyeceksiniz ve durlayacaksiniz \n");
                    scanf("%d",&kopuk);
                    printf("Bebegininizin hijyen durumu  : %d artti\n", bakim(&bir,&kopuk,&h));
                    if(kopuk>10)//belirli değerin üstünde olması bebek oyunu için olmaz.
                    {
                        printf("Bebeginizi o kadar cok yikamaniz dogru degil oyun basa donduruldu lutfen daha uygun sayilar seciniz\n");
                        continue;

                    }
                    if(kopuk>3)
                        {sag++;u--;y--;so--;eg--;h+=bakim(&bir,&kopuk,&h);ok--;s--;t++;}
                    else
                        {h+=bakim(&bir,&kopuk,&h);ok--;eg--;t++;u--;y--;so--;s--;}


                break;
                case 2:
                    printf("Bebeginizi kac dakika tarayacaksiniz\n");
                    scanf("%d",&tara);
                    printf("Bebegininizin hijyen durumu  : %d artti\n",bakim(&iki,&tara,&h));
                     if(tara>15)//belirli değerin üstünde olması bebek oyunu için olmaz.
                    {
                        printf("Bebeginizi o kadar cok taramaniz dogru degil oyun basa donduruldu lutfen daha uygun sayilar seciniz\n");
                        continue;

                    }
                    if(tara>5)
                        {sag++;u--;y--;so--;eg--;h+=bakim(&iki,&tara,&h);s--;ok--;t++;}
                        else
                         {u--;y--;so--;eg--;h+=bakim(&iki,&tara,&h);;s--;eg--;t++;ok--;}


                    break;
                case 3 :
                    printf("bebeginizin kac dakika boyunca disi fircalansin\n");
                    scanf("%d",&dis);
                    printf("Bebegininizin hijyen durumu  : %d artti\n",bakim(&uc,&dis,&h));
                     if(dis>15)//belirli değerin üstünde olması bebek oyunu için olmaz.
                    {
                        printf("Bebeginizi o kadar cok fircalamaniz dogru degil oyun basa donduruldu lutfen daha uygun sayilar seciniz\n");
                        continue;

                    }
                    if(dis>3)
                       {sag++;u--;y--;so--;eg--;h+=bakim(&uc,&dis,&h);so--;t++;ok--;}
                       else
                         {u--;y--;so--;eg--;h+=bakim(&uc,&dis,&h);so--;t++;ok--;}
                    break;
               case 4:
                             continue;
                   break;
                        default : printf("Gecerli bir tercih giriniz\n");
                }
                break;
                case 9:
                    printf("Bebek saglik takviye zamani\n");
                    printf("1--Surup icir\n");
                    printf("2--Saglik iksiri icir\n");
                    printf("3--Corba icir\n");
                    printf("4--Bu asamadan cik\n");
                    scanf("%d",&ter1);
                    switch(ter1)
                    {
                        case 1 :printf("Bebek kac kasik surup icsin\n");
                                scanf("%d",&surup);
                                printf("Bebeginiz surup icti saglik orani %d artti\n",saglik(&bir,&surup,&sag));
                                if(surup>2)//tek seferlik alabileceği değerin sınırı var
                                {
                                    printf("bebeginiz tek seferde o kadar kasik surup icemez\n");
                                    printf("OYUN BASA DONDURULDU BASTAN UYGUN DEGERLER GİRİNİZ\n");
                                    continue;}
                                sag+=saglik(&bir,&surup,&sag);y-=(surup*2);u-=3;t++;eg--;so--;s--;ok--;
                          break;
                          case 2: printf("Bebek tek seferlik sadece bir saglik iksiri icebilir\n");
                                    //tek seferlik alabileceği değerin sınırı var ve bu yüzden sorulmadı bile
                                printf("Bebeginiz saglik iksiri icti saglik orani %d artti\n",saglik(&iki,&iksir,&sag));

                                sag+=saglik(&bir,&iksir,&sag);y-=(iksir*5);u-=4;t+=5;eg--;so--;s--;ok--;
                          break;
                          case 3:printf("Bebek kac tabak corba icsin\n");
                                scanf("%d",&corba);
                                printf("Bebeginiz corba icti saglik orani %d artti\n",saglik(&uc,&corba,&sag));
                                if(corba>2)//tek seferlik alabileceği değerin sınırı var
                                {
                                    printf("bebeginiz o kadar kasik surup icemez\n");}
                                sag+=saglik(&uc,&corba,&sag);y-=(corba*2);u-=2;t+=2;eg--;so--;s--;ok--;
                          break;
                          case 4:
                             continue;
                        break;
                        default : printf("Gecerli bir tercih giriniz\n");

                    }
                  break;
                  default : printf("LUTFEN GECERLI BIR SAYI GIRINIZ\n");
                            continue;
                            break;
            }

    }while(secim!=-1);//-1 seçilirse oyun biter.
    return 0;}
