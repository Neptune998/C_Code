#include<stdio.h>
struct node
{
    int price;//we can't declare a member here bcoz memory is not alloted
    int qty;
    int dis;

}s;

void main()
{
    s.price=100;
    s.qty=20;
    s.dis=2;


    printf("%d",s.price);
    printf("%d",s.qty);
    printf("%d",s.dis);


}
