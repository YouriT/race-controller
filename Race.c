//
//  Race.c
//  OS TP
//
//  Created by Youri Tolstoy on 5/03/13.
//  Copyright (c) 2013 Youri Tolstoy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Race.h"

CarList * initCarList()
{
    CarList * list = (CarList *)malloc(sizeof(CarList));
    return list;
}

CarList * addCarToCarList(CarList * list, CarTime * car)
{
    list->carTime = car;
    list->next = initCarList();
}

int freeCarList(CarList * carList)
{
    while (carList->next != NULL)
    {
        CarList * backup = carList;
        freeCarTime(backup->carTime);
        carList = backup->next;
        free(backup);
    }
    return 0;
}