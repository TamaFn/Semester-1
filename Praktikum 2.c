/*No 3 
#include <stdio.h>

int
main()
{
	int O, i, j, N, I, J, n, days, date;
	int pucuk;
	
	do
	{
		scanf("%d", &O);
		
	    if(O==1)
	    {
		    scanf("%d", &N);
		    
		    int b[] = {100, 100, 100, 3, 3, 5, 5, 7, 7, 9, 9, 11, 11, 13, 13, 15, 15};
	        n = 1;
		
		    for (i = 1; i <= N+1 ; i++, n++)
            {
        	
                for (j = 1; j <= N+1 ; j++)
                {
                    if (i == 1 || i == 2 || i == N+1 || j == 1 || j == N+1)
				    {
					    printf("#  ");
				    }           
                
                    else if (i==N-1 && j==(N-5))
                    {
                	    printf("FRO");
				    }
				
				    else if (i==N-1 && j==(N-4))
				    {
					    printf("M :");
				    }
				
				    else if (i==N-1 && j==(N-3))
				    {
					    printf(" 05");
				    }
				
				    else if (i==N-1 && j==(N-2))
				    {
					    printf("119");
				    }
				
				    else if (i==N-1 && j==(N-1))
				    {
					    printf("407");
				    }
				
				    else if (i==N-1 && j==N)
				    {
					    printf("6  ");
				    }
                
                
                    else if (i==b[n] || i==b[n]+1)
                    {
                	    if (j>=b[n] && j<=N+1-b[n]+1)
                	    {
                	    	printf("#  ");
					    }
					
					    else
					    {
						    printf("   ");
					    }
					
				    }
                
				    else
				    {
					    printf("   ");
				    }
			
                }
              printf("\n");
            }
	    }
	
	   else if (O==2)
	   {
		  scanf("%d%d", &I, &J);
		  
		  switch (I)
		  {
		  	  case 1:
              printf("JANUARI\n");
              break;
              
              case 2:
              printf("FEBRUARI\n");
              break;
              
              case 3:
              printf("MARET\n");
              break;
              
              case 4:
              printf("APRIL\n");
              break;
              
              case 5:
              printf("MEI\n");
              break;
              
              case 6:
              printf("JUNI\n");
              break;
              
              case 7:
              printf("JULI\n");
              break;
              
              case 8:
              printf("AGUSTUS\n");
              break;
              
              case 9:
              printf("SEPTEMBER\n");
              break;
              
              case 10:
              printf("OKTOBER\n");
              break;
              
              case 11:
              printf("NOVEMBER\n");
              break;
              
              case 12:
              printf("DESEMBER\n");
              break;
              
              default :
              	return 0;
		  }
		  
		  if(I==1 || I==3 || I==5 || I==7 || I==8 || I==10 || I==12)
		  {
		  	  days = 31;
		  }
		  
		  else if(I==2)
		  {
		  	  days = 28;
		  }
		  
		  else
		  {
		  	  days = 30;
		  }
		  
		  printf("+--+--+--+--+--+--+--+\n");
		  printf("| M| S| S| R| K| J| S|\n");
		  printf("+--+--+--+--+--+--+--+\n");

		  for(j=1 ; j<J ; j++)
		  {
			  printf("|  ");
		  }
		  
		  printf("|");
				   
		  for(date=1; date<=days ; date++)
		  {
			 if (date<10)
			 {
				printf(" %d", date);
			 }
					  
			 else if (date>=10)
			 {
				printf("%d", date);
			 }
			 
			 if ( ( date + J - 1 ) % 7 > 0 )
			 {
                printf("|");
             }
                      
             else
			 {
                printf("|\n+--+--+--+--+--+--+--+\n|");
             }
		  }
		  
		  if(days+J-1==28)
		  {
		      printf("  |  |  |  |  |  |  |");
		      printf("\n+--+--+--+--+--+--+--+\n|  |  |  |  |  |  |  |\n+--+--+--+--+--+--+--+\n");
		  }
		  
		  else if(days+J-1<=35)
		  {
		  	  for(n=1 ; n<35-days-J+2; n++)
		  	  {
		  	  	  printf("  |");
			  }
			  
			  printf("\n+--+--+--+--+--+--+--+\n|  |  |  |  |  |  |  |\n+--+--+--+--+--+--+--+\n");
		  }
		  
		  else if(days+J-1>35)
		  {
		  	  for(n=1 ; n<42-days-J+2; n++)
		  	  {
		  	  	  printf("  |");
			  }
			  
			  printf("\n+--+--+--+--+--+--+--+\n");
		  }
	}
	} while (O==1 || O==2);
	
return 0;

}


*/
/*No 2
#include <stdio.h>

int
main()
{
	int N, i, j;
	
	scanf ("%d", &N);
	
	long long a[N];
	
	for (i=0 ; i<N ; i++)
	{
		scanf("%lld", &a[i]);
	}
	
	for (j=0 ; j<N ; j++)
	{
		printf("POTTER SEMANGAT\n");
    }
}

*/

/* No 5 
#include <stdio.h>
#include <string.h>

int
main()
{
	int x, y, i, j, k, z, ybig;
	
	scanf("%d%d", &x, &y);
	
	char a[10*x][5*x];
	
	for (i=0 ; i<x ; i++)
	{
		scanf("%s", a[i]);
	}
	
	for (j=0 ; j<x ; j++)
	{
	    strcpy(a[x+j], a[j]);
	}
	
	if (y>x)
	{
		z = y/x;
		ybig = y - (z*x);
		
		for (k=ybig ; k<ybig+x ; k++)
	   {
		  printf("%s ", a[k]);
	   }
	}
	
	else
	{
		for (k=y ; k<y+x ; k++)
	   {
		  printf("%s ", a[k]);
	   }
	}

}
*/ 

// no 5 // 
/*
#include <iostream>
#include <string.h>

using namespace std;

int main(){

	int a,b;
	cin >> a >> b;
	string c[a];
	for (int i = 0; i < a; i++)
	{
		cin >> c[i];
	}
	string temp = c[0];                       
    for (int i = 0; i < a-b; i++)
    {
        c[i] = c[i+b];
    }
    c[a-b] = temp;

	for (int i = 0; i < a; i++)
	{
		cout << c[i] << " ";
	}
}
*/


/* No 4

#include <stdio.h>

int
main()
{
	int M, N, i, j, k, x, z;
	long long jumlah, highest;
	
	scanf("%d%d", &M, &N);
	
	int a[M];
	
	for (i=0 ; i<M ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	highest = 0;
	jumlah = 0;
	x = M-N+1;
	k = 0;
	z = 0;
	
	for (j=0 ; j<x ; j++)
	{
		while (k<N)
	    {
		    jumlah = jumlah + a[z];
		    z++;
		    k++;
	    }  
	    
	    if(jumlah>=highest)
	    {
		    highest = jumlah;
	    }
	    
	    else
	    {
	    	highest = highest;
		}
	
	    jumlah = 0;
	    k = 0;
	    z = z - (N-1);
	}
	
	printf("%lld\n", highest);
}

/* No 6

#include <stdio.h>

int
main()
{
	int X, i, j, k, n;
	
	scanf("%d", &X);
	
	char a[X][50];
	
	for (i=0 ; i<X ; i++)
	{
		scanf("%s", a[i]);
	}
	
	for (j=0 ; j<X ; j++)
	{
		
		for (n=0 ; n<50 ; n++)
		{
			if(a[j][n]<74 && a[j][n]!=0)
		    {
			    a[j][n]= a[j][n] + ( 35 + 2*(a[j][n] - 66));
		    }
		
		    else if (a[j][n]>82)
		    {
			    a[j][n] = a[j][n] - ( 14 - (a[j][n] - 83));
		    }
		
		    else
		    {
			    a[j][n]=a[j][n];
		    }   
		}
	}
	
	for (k=0 ; k<X ; k++)
	{
		printf("%s\n", a[k]);
	}
}



