// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

//this robot is based of the FRC game aerial assist
//Kurtis D

#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/Autonomous.h"
#include "Subsystems/Arm.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Pivot.h"
#include "Subsystems/Shooter.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
#include "Timer.h"

class Robot : public IterativeRobot {
public:
	//a smart pointer to the autonomous command is created as it is needed to be called in the Robot.cpp file
	std::unique_ptr<Command> autonomousCommand;
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();

//creates shared pointers to all of the subsystems as they will be used later on in the code
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    static std::shared_ptr<DriveTrain> driveTrain;
    static std::shared_ptr<Shooter> shooter;
    static std::shared_ptr<Intake> intake;
    static std::shared_ptr<Pivot> pivot;
    static std::shared_ptr<Arm> arm;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    static std::shared_ptr<Timer> timer;

    //defines the functions that run the Robot
    //they are virtual as these functions are from the IterativeRobot class(they have the same name), but are different
    //the virtual statement overrides the original function
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};
#endif
