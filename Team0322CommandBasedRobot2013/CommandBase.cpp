#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
DriverStationLCDSystem* CommandBase::driverStationLCDSystem = NULL;
ChassisSensors* CommandBase::chassisSensors = NULL;
AutonomusModeSwitches* CommandBase::autonomusModeSwitches = NULL;
Chassis* CommandBase::chassis = NULL;
Shooter* CommandBase::shooter = NULL;
ShooterTurret* CommandBase::shooterTurret = NULL;
PneumaticControlSystem* CommandBase::pneumaticControlSystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	driverStationLCDSystem = new DriverStationLCDSystem();
	chassisSensors = new ChassisSensors();
	autonomusModeSwitches = new AutonomusModeSwitches();
	chassis = new Chassis();
	shooter = new Shooter();
	shooterTurret = new ShooterTurret();
	pneumaticControlSystem = new PneumaticControlSystem();
	oi = new OI();
}