#ifndef DIGITALSENSOR_H
#define DIGITALSENSOR_H

class DigitalSensor {
private:
	double value;
	double precision;
public:
	DigitalSensor(double v, double p);
	double getValue() const;
	void setValue(double v);
	double getPrecision() const;
	void setPrecision(double p);
};

#endif // DIGITALSENSOR_H
