#include <stdio.h>
#include <assert.h>
#define E_OK     1
#define E_NOT_OK 0
int batteryIsOk() 
{
  if(get_OutOfRange_Status() == 0);
  return E_OK;
  else
  return E_NOT_OK;
}
int check_temperature_range(float temperature)
{
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return 1;
  } 
  else
  {
    return 0;
  }
}
int check_StateOfCharge_range(float soc)
{
 if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    return 1;
  }
  else
  {
    return 0;
  }
}
int check_Chargerate_range(float chargeRate)
{
if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    return 1;
  }
  else
  {
    return 0;
  }
}
int get_OutOfRange_Status()
{
return 0;
}
int main() {
  assert(batteryIsOk()== E_NOT_OK);
}
