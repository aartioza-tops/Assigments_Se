/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw)*/
#include<stdio.h>

main()
{
	int area,l,w,h;

	
	printf("\n enter lenght of prism  : ");
	scanf("%d",&l);
	printf("\n enter width of prism  : ");
	scanf("%d",&w);
	printf("\n enter height of prism  : ");
	scanf("%d",&h);
	
	area=2*((w*l)+(h*l)+(h*w));
	

	printf(" area of ractangle prism %d",area);
	
}
