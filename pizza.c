#include <stdio.h>

int main ()

{

	int pizza_type = 0;

	char size,card,loyalty,online;

	int amount = 0;

	float tot = 0;

	float discount,net;

	int pizza_cla_la = 0;

	int pizza_cla_me = 0;

	int pizza_sign_la = 0;

	int pizza_sign_me = 0;

	/*float class_large = 1720.00;

	float class_med = 975.00;

	float sign_large = 1820.00;

	float sign_med = 1000.0*/



	while(pizza_type != -1)

	{

		printf("Enter the pizza type:");

		scanf("%d",&pizza_type);



		if(pizza_type == -1)

			break;



		printf("Enter the pizza size:");

		scanf(" %c",&size);



		printf("Enter the number of pizzas needed:");

		scanf("%d",&amount);



		if(pizza_type == 1 && size =='L')

		{

			pizza_cla_la = amount;

		}

		else if(pizza_type == 1 && size == 'M')

		{

			pizza_cla_me = amount;

		}

		else if(pizza_type == 2 && size == 'L')

		{

			pizza_sign_la = amount;

		}

		else if(pizza_type == 2 && size == 'M')

		{

			pizza_sign_me = amount;

		}



		else

			printf("Invalid");







		if (!(pizza_type == 1 || pizza_type == 2) ||!( size == 'L' || size == 'M'))

		{

			printf("Invalid input");

		}



		tot=tot+(pizza_cla_la*1720.00)+(pizza_sign_la*1820.00)+(pizza_cla_la*975.00)+(pizza_sign_me*1000.00);



		 pizza_cla_la = 0;

		 pizza_cla_me = 0;

		 pizza_sign_la = 0;

		 pizza_sign_me = 0;





	}



	printf("Are you paying by credit card(Y/N)?");

	scanf(" %c",&card);

	printf("Are you a loyalty customer(Y/N)?");

	scanf(" %c",&loyalty);

	printf("Is this an online order(Y/N)?");

	scanf(" %c",&online);



	if (card == 'Y')

	{

		discount = tot * 20/100;

	}

	else if(loyalty == 'Y')

	{

			discount = tot * 15/100;

	}

	else if (online == 'Y')

	{

		discount = tot * 5/100;

	}

	else

	{

		discount = 0;

	}



	net = tot - discount;



	printf("Total bill amount:%.2f\n",tot);

	printf("Discount:%.2f\n",discount);

	printf("Net Amount:%.2f\n",net);





	return 0;

}

