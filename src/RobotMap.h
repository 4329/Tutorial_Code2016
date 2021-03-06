// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"
//the classes from the WPILib are used in the shared pointers


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	//creates shared pointers to all of the electrical components to the robot. As of now, these pointers do not point to
	//a actual memory location. The pointers will be used to control the electrical parts of the robot in other parts of
	//the code
	static std::shared_ptr<CANTalon> Talon_R1;
	static std::shared_ptr<CANTalon> Talon_R2;
	static std::shared_ptr<CANTalon> Talon_L1;
	static std::shared_ptr<CANTalon> Talon_L2;
	static std::shared_ptr<Solenoid> Shoot_Sol;
	static std::shared_ptr<CANTalon> Intake_Talon;
	static std::shared_ptr<DoubleSolenoid> Pivot_Sol;
	static std::shared_ptr<DoubleSolenoid> Arm_Sol;

	static void init();
};
#endif
