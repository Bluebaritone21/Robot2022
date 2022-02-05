// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/LoadIntakeCommand.h"

LoadIntakeCommand::LoadIntakeCommand(LoaderSubsystem* pLoader) 
{
  // Use addRequirements() here to declare subsystem dependencies.
  m_pLoader = pLoader;

  AddRequirements(pLoader);
}

// Called when the command is initially scheduled.
void LoadIntakeCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void LoadIntakeCommand::Execute()
{
  m_pLoader->IntakeLoader(m_speed);
}

// Called once the command ends or is interrupted.
void LoadIntakeCommand::End(bool interrupted) {}

// Returns true when the command should end.
bool LoadIntakeCommand::IsFinished() {
  return false;
}
