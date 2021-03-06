// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "Pivot.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Pivot::Pivot() : Subsystem("Pivot") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    pivot_Sol = RobotMap::Pivot_Sol;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    //pivot_Sol now points to the same memory location that Pivot_Sol points to
}

void Pivot::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

//functions are similar to the arm functions

void Pivot::Down() {
	pivot_Sol->Set(pivot_Sol->kForward);
	//Set() changes the value of a solenoid
	//kForward is that value
	//lForwards activates the solenoid
}

void Pivot::Up() {
	pivot_Sol->Set(pivot_Sol->kReverse);
	//kReverse deactivates the solenoid
}

void Pivot::Up_Down() {
	//Get()returns either kForward, kReverse, or kOff
	if (pivot_Sol->Get() == pivot_Sol->kForward) {
		Up();
	}
	else { Down(); }
}
