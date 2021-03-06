 // RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/Autonomous.h"
#include "Commands/Extend_Retract_Arm.h"
#include "Commands/InTake.h"
#include "Commands/OutTake.h"
#include "Commands/Move.h"
#include "Commands/Shoot.h"
#include "Commands/Up_Down_Pivot.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    _operator.reset(new XBOX360_Controller("Operator", 0));
    
    _driver.reset(new XBOX360_Controller("Driver", 1));
    

    // SmartDashboard Buttons
    SmartDashboard::PutData("Extend_Retract_Arm", new Extend_Retract_Arm());
    SmartDashboard::PutData("Up_Down_Pivot", new Up_Down_Pivot());
    SmartDashboard::PutData("Shoot", new Shoot());
    SmartDashboard::PutData("Move", new Move());
    SmartDashboard::PutData("Autonomous", new Autonomous());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    SmartDashboard::PutData("InTake", new InTake());
    SmartDashboard::PutData("OutTake", new OutTake());

    //uses the Xbox360_controller class, which inherents from the joystick class to add buttons, so the Scheduler
    //knows to run a command when a button is pressed
    //parameters include: which button is being pressed, the command that should run when that button is pressed,
    //and how that button needs to be pressed in order to call the function
    _operator->Assign_ButtonCommand(XBOX360_BUTTON::XBOX360_A, new Up_Down_Pivot(),ButtonAction::ButtonAction_Pressed);
    _operator->Assign_ButtonCommand(XBOX360_BUTTON::XBOX360_X, new InTake(),ButtonAction::ButtonAction_Held);
    _operator->Assign_ButtonCommand(XBOX360_BUTTON::XBOX360_Y, new OutTake(),ButtonAction::ButtonAction_Held);
    _operator->Assign_ButtonCommand(XBOX360_BUTTON::XBOX360_B, new Extend_Retract_Arm(), ButtonAction::ButtonAction_Pressed);
    _operator->Assign_ButtonCommand(XBOX360_BUTTON::XBOX360_LEFT_BUMPER, new Shoot(), ButtonAction::ButtonAction_Pressed);
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<XBOX360_Controller> OI::getDriver() {
   return _driver;
}

std::shared_ptr<XBOX360_Controller> OI::getOperator() {
   return _operator;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
