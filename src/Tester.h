#pragma once

#include <Arduino.h>


namespace Tester {

enum Pin
{
  TEST_IND =	13,
  RELAY4 =		12,
  RELAY3 =		11,
  RELAY2 =		10,
  RELAY1 = 		9,
  OKC = 		8,
  RLY_IN = 		7,
  PAD = 		6,
  REMOTE = 		5,
  TEST_MODE = 	3,
  LOW_BATT =	2
};

enum Result
{
	PASSED =	1,
	FAILED =	0,
	CANCELLED = -1
}

void init(void);
void endTest(void);
void beginTest(void);

void cancelTest(void);
bool isTesting(void);
Result getResults(void);
uint8_t getPin(Pin p);

} // namespace Tester
