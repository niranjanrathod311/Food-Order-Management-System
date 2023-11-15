#include <stdio.h>
#include <conio.h>
#include <string.h>

//Structure to store data
struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000] ;

int order_count = 0, served_count = 0, waiting_now = 0;

int order ();
int receive ();
int display ();
void items ();


int main ()
{
    printf("\n");
    printf ("\t\t     Welcome To Brothers' Cafe \n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");
        printf("Enter your choice : \n");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 2");
                printf ("We are closed come by again\n\n");
                printf ("Project submitted by Team ERROR NOT FOUND\n\n");
                printf ("Our hearty gratitude to honorable professor\n\n");
                printf ("           Ms. Hetal Jethani       \n");
                printf ("\n DEVELOPED BY Niranjan Rathod\n\n");
                return 0;
            }
        }
    }
}


int order ()
{
    int n, in, qu;
    printf ("Please enter your name :  ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;

    printf("\n");
    items();
    
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    
    level: //fot goto function

    printf ("How many items you want to order? : ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the size of burger: 1. 200gm  2. 300gm\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 12 :{
        printf ("Enter the size of Veg. Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (150*qu);

        else if (i==2) p[order_count].cost += (210*qu);

        else  p[order_count].cost += (280*qu);

        break;
    }
    case 13 :{
        printf ("Enter the type of Momos: 1. Steames  2. Fried\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (160*qu);

        break;
    }
    case 14 :{
        printf ("Enter the size of grilled sandwich : 1. Veg.  2. Cheese  3. Toast\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 15 :{
        printf ("Enter the size of Noodles: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 17 : {
        printf ("250 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (180*qu);
        break;
    }
    case 18 : {
        printf ("250 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (65*qu);
        break;
    }
    case 19 : {
        printf ("250 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 20 : {
        printf ("250 mg of Indian Masala Tea\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (60*qu);
        break;
    }
    case 21 :{
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %d Rs. .\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}

int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}

int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}

void items ()
{
    printf("................................*{MENU}*..................................\n");

    printf("Item Code#   Description-------------------Size--------------------Price(Rs.)\n");

    printf("[11]---------Burger---------------------200/300gm------------------130/180\n");
    printf("[12]---------Veg. Pizza-----------------12/14/16inch---------------150/210/280\n");
    printf("[13]---------Momos----------------------Steamed/Fried--------------140/160\n");
    printf("[14]---------Grilled Sandvich-----------Veg./Cheese/Toast----------70/140/250\n");
    printf("[15]---------Noodles--------------------Half/Full------------------130/250\n");
    printf("[16]---------Pasta----------------------Half/Full------------------120/240\n");
    printf("[17]---------Oreo Shake-----------------250mg----------------------180\n");
    printf("[18]---------Cold Coffee----------------250mg----------------------65\n");
    printf("[19]---------Cappuccino-----------------250mg----------------------70\n");
    printf("[20]---------Indian Masala Tea----------250mg----------------------60\n");
    printf("[21]---------Coke-----------------------250/500mg------------------20/30\n\n");

}