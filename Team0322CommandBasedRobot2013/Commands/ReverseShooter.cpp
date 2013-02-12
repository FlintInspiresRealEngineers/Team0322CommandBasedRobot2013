#include "ReverseShooter.h"

ReverseShooter::ReverseShooter() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ReverseShooter::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ReverseShooter::Execute() {
	shooter->reverseShooter();
}

// Make this return true when this Command no longer needs to run execute()
bool ReverseShooter::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ReverseShooter::End() {
	shooter->stopShooter();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReverseShooter::Interrupted() {
	End();
}
