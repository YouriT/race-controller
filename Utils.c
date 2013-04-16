//
//  Utils.c
//  OS TP
//
//  Created by Youri Tolstoy on 5/03/13.
//  Copyright (c) 2013 Youri Tolstoy. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>
#include "Utils.h"

void util_log(int logLevel, const char * str, ...)
{
    if (logLevel > LOG_LEVEL)
        return;
    va_list arg;
    va_start(arg, str);
    printf(str, arg);
    va_end(arg);
}