#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem {
private:
	Victor *topAxel;
	Victor *bottomAxel;
	Encoder *topAxelEncoder;
	Encoder *bottomAxelEncoder;
	SendablePIDController *pidTopAxel;
	SendablePIDController *pidBottomAxel;
	AnalogChannel *ballDetect;
	DigitalInput *passed;
	Victor *conveyorBelt;
		
public:
	Shooter();
	void InitDefaultCommand();
	void SetRange(float distance);
	void TopAxelPID();
	void BottomAxelPID();
	void SetTopAxel(float fShooterSpeed);
	void SetBottomAxel(float fShooterSpeed);
	void MoveConveyor();
	bool IsBallPrimed();
	bool Passed();
	SendablePIDController *getTopAxelPID();
	SendablePIDController *getBottomAxelPID();
		
};

#endif