#include "Solution1.h"
#include <cmath>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float result = -1.0f;
	if (_from == TemperatureUnits::CELSIUS) {

		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			result = (_value * 9. / 5.) + 32.;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			result = _value + 273.;
		}
	}
	else if (_from == TemperatureUnits::KELVIN)
	{
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			result = 9. / 5. * (_value - 273.) + 32.;
		}
		else if (_to == TemperatureUnits::CELSIUS)
		{
			result = _value - 273.;
		}
	}
	else if (_from == TemperatureUnits::FAHRENHEIT)
	{
		if (_to == TemperatureUnits::KELVIN)
		{
			result = 5. / 9. * (_value - 32.) + 273.;
		}
		else if (_to == TemperatureUnits::CELSIUS)
		{
			result = 5. / 9. * (_value - 32.);
		}
	}
	return round(result * 100) / 100;
}

#endif
