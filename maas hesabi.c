#include <stdio.h>
int main(){
	printf("maas hesabi\n");
	int x,c;
	
	printf("sabit maasi giriniz:");
	scanf("%d",&x);
	
	printf("cocuk sayisini giriniz:");
	scanf("%d",&c);
	
	if(c=1)
	{
		x=x+x*5/100;
	}
	else	if(c=2)
		{
			x=x+x*10/100;
		}
		else if(c=3)
			{
				x=x+x*15/100;
			}
			
		
	printf("maas=%d",x);
	
	return 0;
}
