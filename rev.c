#include<stdio.h>
#include<limits.h>

int rev(int num){
	int rev = 0;
	while(num){
		if(rev * 10 > INT_MAX || rev * 10 == INT_MAX && num%10 > 7)
			return 0;
		if(rev * 10 < INT_MIN || rev * 10 == INT_MIN && num%10<8)
			return 0;
		
		rev =rev * 10 + num%10;
		num = num/10;

	}
	return rev;
}

int main()
{
	printf("%d\n",rev(32145));
	return 0;
}

