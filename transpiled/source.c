#include <stdio.h>

int data[600000];
int* p = data;

int main(void)
{
	p[0] = 14;
	
	while(*p)
	{
		p[2] = (p[0] + p[2]);
		p[1] = (p[0] + p[1]);
		p[0] = 0;
		
		p += 2;
		p[2] = (p[2] + 10);
		p[1] = (p[1] + 14);
		p[-2] = (p[0] + p[-2]);
		p[0] = 1;
		p[3] = (p[3] + 14);
		p[4] = (p[0] + p[4]);
		p[-1] = ((p[0] * -1) + p[-1]);
		p[0] = 0;
		
		p += 2;
		p[3] = (p[0] + p[3]);
		p[1] = ((p[0] * -1) + p[1]);
		p[0] = 0;
		
		p += -3;
		
		while(*p)
		{
			
			p += 4;
			p[4] = (p[0] + p[4]);
			p[3] = (p[0] + p[3]);
			p[0] = 0;
			
			p += 4;
			p[-4] = (p[0] + p[-4]);
			p[0] = 0;
			p[-8] = (p[-8] + -1);
			
			p += -8;
		}
		
		
		p += 5;
		p[-3] = ((p[0] * -1) + p[-3]);
		p[0] = 0;
		
		p += -3;
		p[6] = (p[0] + p[6]);
		p[0] = 0;
		p[8] = (p[8] + 1);
		
		p += 5;
		
		while(*p)
		{
			p[0] = (p[0] + -1);
			p[5] = (p[5] + 1);
			p[1] = (p[1] + -1);
			
			p += 1;
			
			while(*p)
			{
				
				p += 1;
			}
			
			
			p += 2;
			
			while(*p)
			{
				p[3] = (p[3] + 1);
				
				p += 2;
				p[-4] = (p[0] + p[-4]);
				p[0] = 0;
				
				p += -1;
			}
			
			
			p += -4;
		}
		
		
		p += 6;
		p[-6] = (p[0] + p[-6]);
		p[0] = 0;
		
		p += -1;
		p[0] = 0;
		p[-2] = (p[-2] + -1);
		
		p += -4;
		p[0] = 0;
		
		p += -2;
		p[1] = (p[0] + p[1]);
		p[0] = 0;
		
		p += -2;
		p[0] = 0;
		
		p += 3;
		p[-7] = (p[0] + p[-7]);
		p[0] = 0;
		
		p += -8;
		p[3] = (p[0] + p[3]);
		p[2] = (p[0] + p[2]);
		p[0] = 0;
		
		p += 3;
		p[-3] = (p[0] + p[-3]);
		p[0] = 0;
		p[-1] = (p[-1] + 21);
		
		p += -3;
		p[4] = (p[0] + p[4]);
		p[3] = (p[0] + p[3]);
		p[0] = 0;
		
		p += 4;
		p[1] = (p[1] + 14);
		p[-4] = (p[0] + p[-4]);
		p[0] = 1;
		p[2] = (p[2] + 7);
		p[3] = (p[3] + 38);
		p[4] = (p[0] + p[4]);
		p[-1] = ((p[0] * -1) + p[-1]);
		p[0] = 0;
		
		p += 2;
		p[3] = (p[0] + p[3]);
		p[1] = ((p[0] * -1) + p[1]);
		p[0] = 0;
		
		p += -3;
		
		while(*p)
		{
			
			p += 4;
			p[4] = (p[0] + p[4]);
			p[3] = (p[0] + p[3]);
			p[0] = 0;
			
			p += 4;
			p[-4] = (p[0] + p[-4]);
			p[0] = 0;
			p[-8] = (p[-8] + -1);
			
			p += -8;
		}
		
		
		p += 5;
		p[-3] = ((p[0] * -1) + p[-3]);
		p[0] = 0;
		
		p += -3;
		p[6] = (p[0] + p[6]);
		p[0] = 0;
		p[8] = (p[8] + 1);
		
		p += 5;
		
		while(*p)
		{
			p[0] = (p[0] + -1);
			p[5] = (p[5] + 1);
			p[1] = (p[1] + -1);
			
			p += 1;
			
			while(*p)
			{
				
				p += 1;
			}
			
			
			p += 2;
			
			while(*p)
			{
				p[3] = (p[3] + 1);
				
				p += 2;
				p[-4] = (p[0] + p[-4]);
				p[0] = 0;
				
				p += -1;
			}
			
			
			p += -4;
		}
		
		
		p += 6;
		p[-6] = (p[0] + p[-6]);
		p[0] = 0;
		
		p += -1;
		p[0] = 0;
		p[-2] = (p[-2] + -1);
		
		p += -4;
		p[0] = 0;
		
		p += -2;
		p[1] = (p[0] + p[1]);
		p[0] = 0;
		
		p += -2;
		p[0] = 0;
		
		p += 3;
		p[-7] = (p[0] + p[-7]);
		p[0] = 0;
		p[-6] = (p[-6] + 8);
		
		p += -6;
		p[1] = ((p[0] * 8) + p[1]);
		p[0] = 0;
		
		p += 1;
		p[-1] = ((p[0] * 5) + p[-1]);
		p[0] = 0;
		
		p += -3;
		
		while(*p)
		{
			
			p += 2;
			p[2] = (p[0] + p[2]);
			p[1] = (p[0] + p[1]);
			p[0] = 0;
			
			p += 1;
			p[-1] = (p[0] + p[-1]);
			p[0] = 0;
			p[-3] = (p[-3] + -1);
			
			p += -3;
		}
		
		
		p += 2;
		p[0] = 0;
		
		p += -3;
		p[5] = (p[0] + p[5]);
		p[0] = -1;
		
		p += 2;
		p[4] = (p[0] + p[4]);
		p[0] = 0;
		
		p += 3;
		
		while(*p)
		{
			p[5] = (p[0] + p[5]);
			p[0] = 0;
			
			p += 1;
			p[5] = (p[0] + p[5]);
			p[0] = 0;
			p[4] = (p[4] + -1);
			
			p += 4;
		}
		
		
		p += 1;
		
		while(*p)
		{
			p[1] = (p[1] + 12);
			
			p += 1;
			p[1] = ((p[0] * 15) + p[1]);
			p[0] = 0;
			
			p += -1;
			p[5] = (p[0] + p[5] + -1);
			p[0] = 0;
			
			p += 5;
		}
		
		p[-1] = (p[-1] + 1);
		
		p += -1;
		
		while(*p)
		{
			p[0] = (p[0] + -1);
			p[-5] = (p[-5] + 1);
			
			p += -5;
		}
		
		p[-1] = (p[-1] + -1);
		
		p += -1;
	}
	
	p[1] = (p[1] + 6);
	
	p += 1;
	putchar(((p[0] * 11) + p[1]));
	p[1] = ((p[0] * 11) + p[1]);
	p[0] = 0;
	
	p += 1;
	p[0] = 0;
	p[-1] = (p[-1] + 7);
	
	p += -1;
	putchar(((p[0] * 11) + p[1]));
	p[1] = ((p[0] * 11) + p[1]);
	p[0] = 0;
	
	p += 1;
	p[0] = 0;
	p[-1] = (p[-1] + 6);
	
	p += -1;
	putchar(((p[0] * 9) + p[1]));
	p[1] = ((p[0] * 9) + p[1]);
	p[0] = 0;
	
	p += 1;
	p[0] = 0;
	p[-1] = (p[-1] + 11);
	
	p += -1;
	putchar(((p[0] * 12) + p[1]));
	p[1] = ((p[0] * 12) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar((p[-1] + 3));
	p[0] = 0;
	p[-1] = (p[-1] + 3);
	
	p += -1;
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	p[0] = 6;
	putchar(((p[0] * 9) + p[1]));
	p[1] = ((p[0] * 9) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar(p[-1]);
	putchar(p[-1]);
	putchar(p[-1]);
	p[0] = 0;
	p[-1] = (p[-1] + 5);
	
	p += -1;
	putchar(((p[0] * 8) + p[1]));
	p[1] = ((p[0] * 8) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar(p[-1]);
	putchar(p[-1]);
	putchar(p[-1]);
	p[0] = 0;
	p[-1] = (p[-1] + 8);
	
	p += -1;
	putchar(((p[0] * 8) + p[1]));
	p[1] = ((p[0] * 8) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar((p[-1] + 1));
	putchar(p[-1]);
	putchar(p[-1]);
	p[0] = 0;
	p[-1] = (p[-1] + 5);
	
	p += -1;
	p[1] = ((p[0] * 6) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar(((p[0] * 8) + p[-1]));
	p[-1] = ((p[0] * 8) + p[-1]);
	p[0] = 0;
	
	p += -1;
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(1);
	putchar(0);
	p[0] = 4;
	putchar(((p[0] * 6) + p[1]));
	p[1] = ((p[0] * 6) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar(p[-1]);
	putchar(p[-1]);
	putchar(p[-1]);
	putchar(p[-1]);
	putchar(p[-1]);
	putchar(p[-1]);
	p[0] = 0;
	p[-1] = (p[-1] + 11);
	
	p += -1;
	putchar(((p[0] * 12) + p[1]));
	p[1] = ((p[0] * 12) + p[1]);
	p[0] = 0;
	
	p += 1;
	putchar((p[-1] + 3));
	p[0] = 0;
	p[-1] = (p[-1] + 3);
	
	p += -1;
	putchar(0);
	p[0] = 3;
	putchar(((p[0] * 6) + p[1] + 1));
	p[1] = ((p[0] * 6) + p[1] + 1);
	p[0] = 0;
	
	p += 1;
	putchar((p[-1] + 11));
	p[0] = 0;
	p[-1] = (p[-1] + 11);
	
	p += -1;
	putchar(0);
	putchar(0);
	p[0] = 3;
	putchar(((p[0] * 6) + p[1] + 1));
	p[1] = ((p[0] * 6) + p[1] + 1);
	p[0] = 0;
	
	p += 1;
	putchar((p[-1] + 11));
	p[0] = 0;
	p[-1] = (p[-1] + 11);
	
	p += -1;
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	putchar(0);
	p[0] = -1;
	p[4] = (p[4] + 8);
	
	p += 4;
	p[1] = ((p[0] * 8) + p[1]);
	p[0] = 0;
	
	p += 1;
	p[-1] = ((p[0] * 5) + p[-1]);
	p[0] = 0;
	
	p += -1;
	p[1] = ((p[0] * 8) + p[1]);
	p[0] = 0;
	
	p += 1;
	p[-1] = ((p[0] * 6) + p[-1]);
	p[0] = 0;
	
	p += -1;
	p[1] = ((p[0] * 5) + p[1]);
	p[0] = 0;
	
	p += 1;
	
	while(*p)
	{
		putchar(p[2]);
		putchar(p[3]);
		putchar(p[4]);
		p[2] = p[2];
		p[3] = p[3];
		p[4] = p[4];
		p[5] = (p[0] + p[5] + -1);
		p[0] = 0;
		
		p += 5;
	}
	
	p[0] = (p[0] + 1);
	
	while(*p)
	{
		p[0] = (p[0] + -1);
		p[-5] = (p[-5] + 1);
		
		p += -5;
	}
	
}
