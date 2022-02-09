// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ShootCommand.h"

ShootCommand::ShootCommand(ShooterSubsystem *pShoot, double speed) 
{
m_speed = speed;
m_pShoot = pShoot;
AddRequirements(m_pShoot);
}

// Called when the command is initially scheduled.
void ShootCommand::Initialize() 
{

}

// Called repeatedly when this Command is scheduled to run
void ShootCommand::Execute() 
{
    m_pShoot->ShootMotor(m_speed);
    m_isFinished = true;
}
// Called once the command ends or is interrupted.
void ShootCommand::End(bool interrupted) 
{

}

// Returns true when the command should end.
bool ShootCommand::IsFinished() 
{
 return m_isFinished;
} 