//
//  Race.h
//  OS TP
//
//  Created by Youri Tolstoy on 5/03/13.
//  Copyright (c) 2013 Youri Tolstoy. All rights reserved.
//

#ifndef OS_TP_Race_h

#include "Car.h"
#define RACE_TYPE_TRIES 0
#define RACE_TYPE_QUALIF 1
#define RACE_TYPE_MAIN 2
#define OS_TP_Race_h

typedef struct {
    
    Car * car;
    
} CarTime;

struct node {
    
    CarTime * carTime;
    struct node * next;
    
};

typedef struct node CarList;

typedef struct {
    
    CarList * carsInRace;
    int type;
    
} RaceManager;

CarList * initCarList();
CarList * addCarToCarList(CarList * list, CarTime * car);
int freeCarList(CarList * carList);


#endif
