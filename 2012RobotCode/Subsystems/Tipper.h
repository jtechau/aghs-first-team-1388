#ifndef TIPPER_H
#define TIPPER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ag291863
 */
class Tipper: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Tipper();
	void InitDefaultCommand();
};

#endif
