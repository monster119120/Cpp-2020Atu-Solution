#include "class.h"

Thermometer::Thermometer(){
    tempCelsius = 0.0;
    tempFahrenheit = 0.0;
}

Thermometer::~Thermometer() {
    
}

Thermometer::Thermometer(double temp):tempCelsius(temp){

}

// set temperature
void Thermometer::SetTempCelsius(double tempCelsius){
    this->tempCelsius = tempCelsius;
    this->tempFahrenheit = 32.0 + tempCelsius*1.8;
}

void Thermometer::SetTempFahrenheit(double tempFahrenheit){
    this->tempFahrenheit = tempFahrenheit;
    this->tempCelsius = (this->tempFahrenheit - 32.0)/1.8;
}

// display temperature
double Thermometer::GetTempCelsius(){
    return this->tempCelsius;
}
double Thermometer::GetTempFahrenheit(){
    return this->tempFahrenheit;
}