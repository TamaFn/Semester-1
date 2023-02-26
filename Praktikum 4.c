/*No 1 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Sepatu{
    char kode[310];
    char jenis;
    bool check;
};

int main (){
    int N;
    char tempo;
    scanf("%d/n", &N);
    
    struct Sepatu arr[N];
    
    int i, j, k;
    for (i=0; i<N; i++){
        scanf("%s", arr[i].kode);
        scanf("%c", &tempo);
        scanf("%c", &arr[i].jenis);
        arr[i].check=true;
    }
    
    char temp;
    int a=0, b=0, c=0, d=0, counter=0, sum[N]; 
    for (i=0; i<N; i++){
//        printf("%c\n", arr[i].jenis);
        for (j=0; j<strlen(arr[i].kode); j++){
            temp=arr[i].kode[j];
            if (temp>='0' && temp<='9'){
                if (counter==0){
                    a=temp-48;
//                    printf("%d\n", a);
                    counter++;
                }else if (counter==1){
                    b=temp-48;
//                    printf("%d\n", b);
                    counter++;
                }else if (counter==2){
                    c=temp-48;
//                    printf("%d\n", c);
                    counter++;
                }else if (counter==3){
                    d=temp-48;
//                    printf("%d\n", d);
                }
            }    
        }
        sum[i]=0;
//        printf("%d sumi\n", sum[i]);
        sum[i]= (d*1000)+(c*100)+(b*10)+a;
//        printf("%d sumi\n", sum[i]);
        a=0;
        b=0;
        c=0;
        d=0;
        counter=0;
    }
    
    int counter2=0;
    for (i=0; i<N; i++){
        if (arr[i].check == true){
            for (j=i; j<N; j++){
                if (arr[j].check == true){
                    if (sum[i] == sum[j] && arr[i].jenis != arr[j].jenis){
//                        printf("penanda");
                        counter2++;
                        arr[j].check=false;
                        break;
                    }
                }
            }
        arr[i].check=false;    
        }
    }
//    printf("%d", counter2);
    if (counter2 > 0){
        printf("%d", counter2);
    }else {
        printf("Ini, apa, itu, apa, gabisa jual\n");
    }
}
*/

/* No 2
#include <stdio.h>
#include <string.h>

int main() {
    char list[100][100], search[100][100], temp;
    int T, N[100], K[100], i, j, l;

    scanf("%d", &T);

    for (i = 0; i < T; ++i) {
        scanf("%d", &N[i]);
        scanf("%c", &temp);
        for (j = 0; j < N[i]; ++j) {
            fgets(&list[j], 100, stdin);
        }
        scanf("%d", &K[i]);
        scanf("%c", &temp);
        for (j = 0; j < K[i]; ++j) {
            fgets(&search[j], 100, stdin);
        }

        int isFound = 0;
        for (j = 0; j < K[i]; ++j) {
            for (l = 0; l < N[i]; ++l) {
                if (strcmp(search[j], list[l]) == 0) {
                    isFound = 1;
                    printf("Yay ada di laci ke-%d (/^^)/\n", ++l);
                    break;
                }
            }
            if (isFound != 1) {
                printf("Ga ketemuu (--;)\n");
            }
            isFound = 0;
        }
    }
}
*/

/*No 3
#include <stdio.h>
#include <string.h>

struct Party{
    char nama;
    long long health;
    int attack;
    int armor;
};

void partystatus(long long *darah, int T, int N, struct Party *ally, int serang, int tahan){
    int j,k,l, allycount;
    for (j=0; j<T; j++){
        if (j%N == 0){
            for (k=0; k<N; k++){
                if (serang>=ally[k].armor && *darah>0){
                    ally[k].health=ally[k].health-(serang-ally[k].armor);
                }
                }
                if (ally[0].attack>=tahan && ally[0].health > 0){
                    *darah=*darah-(ally[0].attack-tahan);
                }
            }
        else {
            allycount=j%N;
            if (ally[allycount].attack>=tahan && ally[allycount].health > 0){
                *darah=*darah-(ally[allycount].attack-tahan);
            }
        }
    }
}

int main(){
    long N, T;
    long long darah;
    int  serang, tahan;
    char temp;
    
    scanf("%ld", &N);
    scanf("%ld", &T);
    
    struct Party ally[N];
    
    scanf("%lld", &darah);
    scanf("%d", &serang);
    scanf("%d", &tahan);
    
    int i;
    for (i=0; i<N; i++){
        scanf("%c", &temp);
        scanf("%c", &ally[i].nama);
        scanf("%lld", &ally[i].health);
        scanf("%d", &ally[i].attack);
        scanf("%d", &ally[i].armor);
    }
    
    partystatus(&darah, T, N, ally, serang, tahan);
    
    printf("Monster Status\n");
    if (darah<=0){
        printf("health = 0\n");
    }
    else {
        printf("health = %lld\n", darah);
    }
    
    printf("\nParty Status\n");
    
    for (i=0; i<N; i++){
        printf("========================\n");
        printf("Name: %c\n", ally[i].nama);
        printf("Attack: %d\n", ally[i].attack);
        printf("Armor: %d\n", ally[i].armor);
        if (ally[i].health<=0){
            printf("Status: Dead\n");
        }
        else {
            printf("Status: Alive\n");
        }
    }
}
*/

/* No 5 

#include <stdio.h>
#include <string.h>

struct Kartu{
    char nama[1001];
    int serang;
};

void swap(int t, struct Kartu *arr, int x, int y){
    char temp[1001];
    int tempi;
    
    strcpy(temp,arr[x].nama);
    tempi = arr[x].serang;
    
    strcpy(arr[x].nama,arr[y].nama);
    arr[x].serang = arr[y].serang;
    
    strcpy(arr[y].nama,temp);
    arr[y].serang = tempi;
}

int main (){
    int t, x, y;
    char tempo;
    scanf("%d", &t);
    struct Kartu arr[t];
    
    int i;
    for (i=0; i<t; i++){
        scanf("%c",&tempo);
        scanf("%[^\n]%*c",arr[i].nama);
        scanf("%d", &arr[i].serang);
    }
    
    char perintah;
    while (i>-1){
        scanf("%c", &perintah);
        if (perintah=='p'){
            for (i=0; i<t; i++){
                printf("%s ",arr[i].nama);
                printf("%d\n", arr[i].serang);
            }
        }
        if (perintah=='s'){
            scanf("%d", &x);
            scanf("%d", &y);
            if(x>=t || y>=t){
                printf("Index diluar batas\n");
            }
            else if (x==y){
                printf("Index tidak boleh sama\n");
            }
            else {
                swap(t, arr, x, y);
            }
        }
        if (perintah=='x'){
            break;
        }
    }
}
*/

/* No 6
#include <stdio.h>
#include <string.h>

struct Teman {
    char nama[100];
    char nrp[100];
    char angkatan[100];
    char umur[100];
    char asal[100];
} nomor[100];

int main()
{
    int n;
    char cari[100];

    scanf("%d", &n);

    int i;

    for(i=0; i<n; i++){
        scanf("%s", nomor[i].nrp);
        gets(nomor[i].nama);
        scanf("%s", nomor[i].angkatan);
        scanf("%s", nomor[i].umur);
        scanf("%s", nomor[i].asal);
    }

    scanf("%s", cari);

    for(i=0; i<n; i++){
        if(strcmp(cari, nomor[i].nrp) == 0 || strcmp(cari, nomor[i].nama) == 0 || strcmp(cari, nomor[i].angkatan) == 0 || strcmp(cari, nomor[i].umur) == 0 || strcmp(cari, nomor[i].asal) == 0)
        {
            printf("Nama:       %s\n", nomor[i].nama);
            printf("NRP :        %s\n", nomor[i].nrp);
            printf("Angkatan:    %s\n", nomor[i].angkatan);
            printf("Umur:        %s\n", nomor[i].umur);
            printf("Asal:        %s\n", nomor[i].asal);

        }
    }

}

*/

/* No 4

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int matriks1[100][100], matriks2[100][100], hasil[100][100];
  int i, j, k, m, n, q, jumlah = 0;
  scanf("%d",&m);
  scanf("%d",&n);
  scanf("%d",&q);
 
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        scanf("%d", &matriks1[i][j]);
      }
    }
    
    for(i = 0; i < n; i++){
      for(j = 0; j < q; j++){
        scanf("%d", &matriks2[i][j]);
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < n; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        printf("%d\t",hasil[i][j]);
      }
      printf("\n");
    }
  return 0;
}

*/


