
#include <ArduinoUnitTests.h>
#include "SHT31.h"

unittest(test_begin)
{
  SHT31 sht;

  bool b = sht.begin(0x44);
  assertEqual(b, true);

  assertNotEqual(0, sht.getTemperature());
  assertNotEqual(0, sht.getHumidity());

}

unittest_main()

