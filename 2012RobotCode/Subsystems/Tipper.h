#ifndef TIPPER_H
#define TIPPER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "TipperBase.h"

/**
 *
 *
 * @author Sheridan
 */
class Tipper: public TipperBase {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *tipperMtr;
public:
	
//	typedef enum tipperMode {
//		extend,
//		retract
//	};
	
	Tipper();
	void InitDefaultCommand();
	void Tipper::MoveTipper(tipperMode mode);
};

#endif
