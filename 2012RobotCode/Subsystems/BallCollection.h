#ifndef BALL_COLLECTIONSIM_H
#define BALL_COLLECTIONSIM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author David
 */
class BallCollectionSim: public Subsystem {
private:

public:
	BallCollectionSim();
	void InitDefaultCommand();
	void moveRollers(float speed);
};

#endif