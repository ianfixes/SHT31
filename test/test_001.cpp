
#include <ArduinoUnitTests.h>
#include "SHT31.h"

SHT31 sht_global;

unittest(test_constructor)
{
  SHT31 sht;
  assertNotEqual(sht, sht_global);
}

unittest(test_begin)
{
  SHT31 sht;
  assertNotEqual(sht, sht_global);

  bool b = sht.begin(0x44);
  assertEqual(b, true);

}
unittest_main()

