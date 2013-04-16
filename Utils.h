//
//  Utils.h
//  OS TP
//
//  Created by Youri Tolstoy on 5/03/13.
//  Copyright (c) 2013 Youri Tolstoy. All rights reserved.
//

#ifndef OS_TP_Utils_h
#define OS_TP_Utils_h
#define LOG_LEVEL 1
#define LOG_LEVEL_VERBOSE 1
#define LOG_LEVEL_DEBUG 2
#define LOG_LEVEL_NORMAL 3

void util_log(int logLevel, const char * str, ...);

#endif
