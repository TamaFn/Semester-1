
//// no 5
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double a, b, c, d;
//    double ratarata;
//    printf("masukkan 4 angka :");
//    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
//
//    if(a < b && a < c && a < d && b > a && b > c && b > d){
//        printf("%.1lf", (a+b)/2);
//    } else if(b < a && b < c && b < d && a > b && a > c && a > d){
//        printf("%.1lf", (b+a)/2);
//    } else if(a < b && a < c && a < d && c > a && c > b && c > d){
//        printf("%.1lf", (a+c)/2);
//    } else if(c < a && c < b && c < d && a > c && a > b && a > d){
//        printf("%.1lf", (c+a)/2);
//    } else if(a < b && a < c && a < d && d > a && d > b && d > c){
//        printf("%.1lf", (a+d)/2);
//    } else if(d < a && d < b && d < c && a > d && a > b && a > c){
//        printf("%.1lf", (d+a)/2);
//    } else if(b < a && b < c && b < d && c > b && c > a && c > d){
//        printf("%.1lf", (b+c)/2);
//    } else if(c < b && c < a && c < d && b > c && b > a && b > d){
//        printf("%.1lf", (c+b)/2);
//    } else if(b < a && b < c && b < d && d > b && d > a && d > c){
//        printf("%.1lf", (b+d)/2);
//    } else if(d < a && d < b && d < c && b > d && b > a && b > c){
//        printf("%.1lf", (d+b)/2);
//    } else if(c < a && c < b && c < d && d > c && d > a && d > b){
//        printf("%.1lf", (c+d)/2);
//    } else if(d < a && d < b && d < c && c > d && c > a && c > b){
//        printf("%.1lf", (d+c)/2);
//    } else {
//        printf("wrong");
//    }
//    return 0;
//}


//// no 4
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int n, nilai;
//    scanf("%d", &n);
//    // 1 dibawah merupakan nilai awal dari deret
//    // 4 dibawah merupakan beda dari deret
//    nilai = 2 * (n*n) - (2*n) + 1;
//    printf("%d", nilai);
//}




//// no 2
//#include <stdio.h>
//
//int main()
//{
//    int m, n, a;
//    scanf("%d%d", &n, &m);
//
//    if((n/5) == m){
//        printf("%d %d", m, m);
//    } else if(n/m < 1 || n/m > 5){
//        printf("-1 -1");
//    } else if(n/m == 4){
//        a = (n-m)/4;
//        printf("%d %d", n%m, a);
//    } else if(n/m >= 1 && n/m <= 3){
//        a = (n-m)/4;
//        printf("0 %d", a);
//    }
//}



// no 6
//#include <stdio.h>
//
//int main()
//{
//    int x, a, b, c;
//    char A, B, C;
//    scanf("%c", &A);
//    scanf("%c", &B);
//    scanf("%c", &C);
//    scanf("%d", &x);
//    a = A + x;
//    b = B + x;
//    c = C + x;
//
//    if(((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) && ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z')) && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))){
//        printf("Kadigas Masuk Room A");
//    } else {
//        printf("Kadigas Masuk Room B");
//    }
//    return 0;
//}


// no 3
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int n;
//    long long nilai;
//    scanf("%d", &n);
//
//    nilai =((((pow(((1+sqrt(5))/2),(n+1)) - pow(((1-sqrt(5))/2),(n+1))) / sqrt(5))) * 2) ;
//
//    if(n == 1){
//        printf("2\nBdiqz tidak ganz!");
//    } else if(n == 2){
//        printf("4\nBdiqz tidak ganz!");
//    } else if(n >= 3){
//        printf("%lld\nBdiqz tidak ganz!", nilai);
//    }
//}


//// no 1
//#include <stdio.h>
//
//int main()
//{
//    long long x1, x2, y1, y2;
//    long long jalan;
//    scanf("%lld%lld%lld%lld", &x1, &y1, &x2, &y2);
//    jalan = ((x2-x1)*(y2-y1)) + 1;
//    printf("%lld", jalan);
//}
