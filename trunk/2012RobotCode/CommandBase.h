#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"

#include "Subsystems/BallCollection.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Turret.h"
#include "Subsystems/Vision.h"

#include "Subsystems/BallCollectionSim.h"
#include "Subsystems/DriveTrainSim.h"
#include "Subsystems/ShooterSim.h"
#include "Subsystems/TurretSim.h"

#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static BallCollection *ballCollection;
	static DriveTrain *driveTrain;
	static Shooter *shooter;
	static Turret *turret;
	static Vision *vision;
	
	static OI *oi;
};

#endif
