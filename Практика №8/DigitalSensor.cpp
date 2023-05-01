#include "DigitalSensor.h"

DigitalSensor::DigitalSensor(double v, double p) {
	value = v;
	precision = p;
}

double DigitalSensor::getValue() const {
	return value;
}

void DigitalSensor::setValue(double v) {
	value = v;
}

double DigitalSensor::getPrecision() const {
	return precision;
}

void DigitalSensor::setPrecision(double p) {
	precision = p;
}
