#include "ManualAim.h"
#include "../SubSystems/TurretBase.h"

ManualAim::ManualAim() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires (turret);
}

// Called just before this Command runs the first time
void ManualAim::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ManualAim::Execute() {
	float xAxis = oi->getOpStickXAxis();
//	float power = (xAxis)/2; 
	
//10 is an estimate for the number of degrees to move the turret
	// the turret->UsePIDOutput (power) is for the competition robot
#if defined(COMPETITION)
	turret->UsePIDOutput(power);
	
#elif defined(SIMULATE)
	float powerSim = (xAxis) * 1.5; 
	turret->TurnRelative(powerSim);

#endif
}

// Make this return true when this Command no longer needs to run execute()
bool ManualAim::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ManualAim::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ManualAim::Interrupted() {
}
