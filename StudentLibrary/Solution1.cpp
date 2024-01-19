#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"

#ifdef COMPILE_EXERCICE_1

//* Fahrenheit to Kelvin K = 5 / 9 (°F - 32) + 273

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float result = 0.0;
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::FAHRENHEIT) {
		result = 9 / 5 * (_value)+32;
	}
	else if(_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT) {
		result = 9 / 5 * (_value - 273) + 32;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT) {
		result = 9 / 5 * (_value - 273) + 32;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS) {
		result = 5 / 9 * (_value - 32);
	}
	else if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN) {
		result = _value + 273;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS) {
		result = _value - 273;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::KELVIN) {
		result = 5 / 9 * (_value - 32) + 273;
	}
	return result;
}

#endif
