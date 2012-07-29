/*
	Copyright 2010, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (the "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * Timer.h
 *
 *  Created on: Jan 8, 2010
 *      Author: sumeet
 */

#ifndef TIMER_H_
#define TIMER_H_
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Logger.h"
using namespace std;
class Timer {
	timespec st;
	Logger logger;
public:
	Timer();
	virtual ~Timer();
	void start();
	void end();
	static long long getCurrentTime();
	static long long getTimestamp();
	long elapsedMicroSeconds();
	long elapsedMilliSeconds();
	long elapsedNanoSeconds();
	int elapsedSeconds();
};

#endif /* TIMER_H_ */