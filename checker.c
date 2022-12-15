#include <stdio.h>
#include <assert.h>
#define E_OK     1
#define E_NOT_OK 0

int temperature_OutOfRange =0;
int stateofCharge_OutOfRange =0;
int chargerate_OutOfRange =0;
int outOfrange_Overallstatus;
int batteryIsOk() 
{
  if(outOfrange_Overallstatus==0)
  {
  return E_OK;
  }
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
void get_OutOfRange_Status_temprange()
{
  float temp = 20;
  if(check_temperature_range(temp) == 1)
  { 
    temperature_outrange =1;
  }

}
void get_OutOfRange_Status_stateofCharge()
{
  float soc = 70;
  if(check_StateOfCharge_range(soc) == 1)
  { 
    stateofCharge =1;
  }
}
void get_OutOfRange_Status_ChargeRate()
{
  float charge = 0.7;
  if(check_Chargerate_range(charge) == 1)
  { 
   chargerate =1;
  }
}
int main() {
  get_OutOfRange_Status_temprange();
  get_OutOfRange_Status_stateofCharge();
  get_OutOfRange_Status_ChargeRate();
  outOfrange_Overallstatus = (temperature_OutOfRange + stateofCharge_OutOfRange + chargerate_OutOfRange);
  assert(batteryIsOk()== E_OK);
}
