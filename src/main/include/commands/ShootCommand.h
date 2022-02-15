// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include "subsystems/ShooterSubsystem.h"
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

/**
 * An example command.
 *
 * Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class ShootCommand
 : public frc2::CommandHelper<frc2::CommandBase, ShootCommand> {
 public:
  ShootCommand(ShooterSubsystem *pShoot, double speed);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;
 private: 
 double m_speed;
 bool m_isFinished =false;
 ShooterSubsystem * m_pShoot;
};
