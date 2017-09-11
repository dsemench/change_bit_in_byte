/*
** created by dsemench 11.09.2017
*/

void	change_in_zero(int &nbr, int n) {// take number in decimal and which n bit need to change
	nbr &= (~(1 << n));// short example
	/*	long way
	int tmp = 0;

	tmp = ~(1 << n);// we move 1 in bit where we want to change
	nbr = nbr & tmp;// use AND to change
	*/
}

void	change_in_one(int &nbr, int n) {// take number in decimal and which n bit need to change
	nbr |= (1 << n);// short example
	/*	long way
	int tmp = 0;

	tmp = 1 << n;// we move 1 in bit where we want to change
	nbr = nbr | tmp;// use OR to change bit
	*/
}
