#include "date.h"

int comp(struct Date d1, struct Date d2)
{
if(d1.Y == d2.Y)
{
if(d1.M == d2.M)
{
if(d1.D == d2.D)
return 0;
else if(d1.D < d2.D)
return -1;
else return 1;
}
else if(d1.M < d2.M)
return -1;
else return 1;
}
else if(d1.Y < d2.Y)
return -1;
else return 1;
}
