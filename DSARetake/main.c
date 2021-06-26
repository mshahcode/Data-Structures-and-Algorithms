#include <stdio.h>
#include <stdlib.h>
#include "PointList.h"

int main()
{
    /*
    PointList* plist = PL_new();
    plist = PL_add(plist, P_new(1, 2, 3));
    plist = PL_add(plist, P_new(4, 5, 6));
    PL_print(plist, "two");
    */

    /*
    P_show(PL_last(plist)->pos,"last point");
    */

    /*
    PointList *plist = PL_nOrigins(5);
    PL_print(plist, "zero");
    */
    PointList *plist = PL_new();
    plist = PL_append(plist, P_new(1, 2, 3));
    plist = PL_append(plist, P_new(4, 5, 6));
    PL_print(plist, "two");
    printf("Address of element index 1 : %p\n", PL_index(plist, 1));
    printf("%d size\n", PL_size(plist));
    plist = PL_setPoint(plist, 1, P_new(50,60,70));
    PL_print(plist, "new two");


    return 0;
}