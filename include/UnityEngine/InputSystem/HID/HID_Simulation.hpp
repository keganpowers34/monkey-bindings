// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.HID.HID
#include "UnityEngine/InputSystem/HID/HID.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID::Simulation, "UnityEngine.InputSystem.HID", "HID/Simulation");
// Type namespace: UnityEngine.InputSystem.HID
namespace UnityEngine::InputSystem::HID {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.HID.HID/Simulation
  // [TokenAttribute] Offset: FFFFFFFF
  struct HID::Simulation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Simulation
    constexpr Simulation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Undefined
    static constexpr const int Undefined = 0;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Undefined
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Undefined();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Undefined
    static void _set_Undefined(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FlightSimulationDevice
    static constexpr const int FlightSimulationDevice = 1;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FlightSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightSimulationDevice
    static void _set_FlightSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation AutomobileSimulationDevice
    static constexpr const int AutomobileSimulationDevice = 2;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation AutomobileSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_AutomobileSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation AutomobileSimulationDevice
    static void _set_AutomobileSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation TankSimulationDevice
    static constexpr const int TankSimulationDevice = 3;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation TankSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_TankSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation TankSimulationDevice
    static void _set_TankSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation SpaceshipSimulationDevice
    static constexpr const int SpaceshipSimulationDevice = 4;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation SpaceshipSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_SpaceshipSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation SpaceshipSimulationDevice
    static void _set_SpaceshipSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation SubmarineSimulationDevice
    static constexpr const int SubmarineSimulationDevice = 5;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation SubmarineSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_SubmarineSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation SubmarineSimulationDevice
    static void _set_SubmarineSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation SailingSimulationDevice
    static constexpr const int SailingSimulationDevice = 6;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation SailingSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_SailingSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation SailingSimulationDevice
    static void _set_SailingSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation MotorcycleSimulationDevice
    static constexpr const int MotorcycleSimulationDevice = 7;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation MotorcycleSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_MotorcycleSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation MotorcycleSimulationDevice
    static void _set_MotorcycleSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation SportsSimulationDevice
    static constexpr const int SportsSimulationDevice = 8;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation SportsSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_SportsSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation SportsSimulationDevice
    static void _set_SportsSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation AirplaneSimulationDevice
    static constexpr const int AirplaneSimulationDevice = 9;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation AirplaneSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_AirplaneSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation AirplaneSimulationDevice
    static void _set_AirplaneSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation HelicopterSimulationDevice
    static constexpr const int HelicopterSimulationDevice = 10;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation HelicopterSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_HelicopterSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation HelicopterSimulationDevice
    static void _set_HelicopterSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation MagicCarpetSimulationDevice
    static constexpr const int MagicCarpetSimulationDevice = 11;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation MagicCarpetSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_MagicCarpetSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation MagicCarpetSimulationDevice
    static void _set_MagicCarpetSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation BicylcleSimulationDevice
    static constexpr const int BicylcleSimulationDevice = 12;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation BicylcleSimulationDevice
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_BicylcleSimulationDevice();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation BicylcleSimulationDevice
    static void _set_BicylcleSimulationDevice(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FlightControlStick
    static constexpr const int FlightControlStick = 32;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightControlStick
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FlightControlStick();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightControlStick
    static void _set_FlightControlStick(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FlightStick
    static constexpr const int FlightStick = 33;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightStick
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FlightStick();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightStick
    static void _set_FlightStick(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation CyclicControl
    static constexpr const int CyclicControl = 34;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation CyclicControl
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_CyclicControl();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation CyclicControl
    static void _set_CyclicControl(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation CyclicTrim
    static constexpr const int CyclicTrim = 35;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation CyclicTrim
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_CyclicTrim();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation CyclicTrim
    static void _set_CyclicTrim(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FlightYoke
    static constexpr const int FlightYoke = 36;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightYoke
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FlightYoke();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightYoke
    static void _set_FlightYoke(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation TrackControl
    static constexpr const int TrackControl = 37;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation TrackControl
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_TrackControl();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation TrackControl
    static void _set_TrackControl(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Aileron
    static constexpr const int Aileron = 176;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Aileron
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Aileron();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Aileron
    static void _set_Aileron(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation AileronTrim
    static constexpr const int AileronTrim = 177;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation AileronTrim
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_AileronTrim();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation AileronTrim
    static void _set_AileronTrim(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation AntiTorqueControl
    static constexpr const int AntiTorqueControl = 178;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation AntiTorqueControl
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_AntiTorqueControl();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation AntiTorqueControl
    static void _set_AntiTorqueControl(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation AutopilotEnable
    static constexpr const int AutopilotEnable = 179;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation AutopilotEnable
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_AutopilotEnable();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation AutopilotEnable
    static void _set_AutopilotEnable(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation ChaffRelease
    static constexpr const int ChaffRelease = 180;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation ChaffRelease
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_ChaffRelease();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation ChaffRelease
    static void _set_ChaffRelease(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation CollectiveControl
    static constexpr const int CollectiveControl = 181;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation CollectiveControl
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_CollectiveControl();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation CollectiveControl
    static void _set_CollectiveControl(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation DiveBreak
    static constexpr const int DiveBreak = 182;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation DiveBreak
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_DiveBreak();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation DiveBreak
    static void _set_DiveBreak(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation ElectronicCountermeasures
    static constexpr const int ElectronicCountermeasures = 183;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation ElectronicCountermeasures
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_ElectronicCountermeasures();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation ElectronicCountermeasures
    static void _set_ElectronicCountermeasures(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Elevator
    static constexpr const int Elevator = 184;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Elevator
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Elevator();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Elevator
    static void _set_Elevator(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation ElevatorTrim
    static constexpr const int ElevatorTrim = 185;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation ElevatorTrim
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_ElevatorTrim();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation ElevatorTrim
    static void _set_ElevatorTrim(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Rudder
    static constexpr const int Rudder = 186;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Rudder
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Rudder();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Rudder
    static void _set_Rudder(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Throttle
    static constexpr const int Throttle = 187;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Throttle
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Throttle();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Throttle
    static void _set_Throttle(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FlightCommunications
    static constexpr const int FlightCommunications = 188;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightCommunications
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FlightCommunications();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlightCommunications
    static void _set_FlightCommunications(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FlareRelease
    static constexpr const int FlareRelease = 189;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlareRelease
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FlareRelease();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FlareRelease
    static void _set_FlareRelease(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation LandingGear
    static constexpr const int LandingGear = 190;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation LandingGear
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_LandingGear();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation LandingGear
    static void _set_LandingGear(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation ToeBreak
    static constexpr const int ToeBreak = 191;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation ToeBreak
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_ToeBreak();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation ToeBreak
    static void _set_ToeBreak(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Trigger
    static constexpr const int Trigger = 192;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Trigger
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Trigger();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Trigger
    static void _set_Trigger(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation WeaponsArm
    static constexpr const int WeaponsArm = 193;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation WeaponsArm
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_WeaponsArm();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation WeaponsArm
    static void _set_WeaponsArm(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation WeaponsSelect
    static constexpr const int WeaponsSelect = 194;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation WeaponsSelect
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_WeaponsSelect();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation WeaponsSelect
    static void _set_WeaponsSelect(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation WingFlaps
    static constexpr const int WingFlaps = 195;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation WingFlaps
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_WingFlaps();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation WingFlaps
    static void _set_WingFlaps(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Accelerator
    static constexpr const int Accelerator = 196;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Accelerator
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Accelerator();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Accelerator
    static void _set_Accelerator(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Brake
    static constexpr const int Brake = 197;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Brake
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Brake();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Brake
    static void _set_Brake(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Clutch
    static constexpr const int Clutch = 198;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Clutch
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Clutch();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Clutch
    static void _set_Clutch(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Shifter
    static constexpr const int Shifter = 199;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Shifter
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Shifter();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Shifter
    static void _set_Shifter(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Steering
    static constexpr const int Steering = 200;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Steering
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Steering();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Steering
    static void _set_Steering(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation TurretDirection
    static constexpr const int TurretDirection = 201;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation TurretDirection
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_TurretDirection();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation TurretDirection
    static void _set_TurretDirection(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation BarrelElevation
    static constexpr const int BarrelElevation = 202;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation BarrelElevation
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_BarrelElevation();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation BarrelElevation
    static void _set_BarrelElevation(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation DivePlane
    static constexpr const int DivePlane = 203;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation DivePlane
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_DivePlane();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation DivePlane
    static void _set_DivePlane(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation Ballast
    static constexpr const int Ballast = 204;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation Ballast
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_Ballast();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation Ballast
    static void _set_Ballast(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation BicycleCrank
    static constexpr const int BicycleCrank = 205;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation BicycleCrank
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_BicycleCrank();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation BicycleCrank
    static void _set_BicycleCrank(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation HandleBars
    static constexpr const int HandleBars = 206;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation HandleBars
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_HandleBars();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation HandleBars
    static void _set_HandleBars(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation FrontBrake
    static constexpr const int FrontBrake = 207;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation FrontBrake
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_FrontBrake();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation FrontBrake
    static void _set_FrontBrake(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Simulation RearBrake
    static constexpr const int RearBrake = 208;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Simulation RearBrake
    static ::UnityEngine::InputSystem::HID::HID::Simulation _get_RearBrake();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Simulation RearBrake
    static void _set_RearBrake(::UnityEngine::InputSystem::HID::HID::Simulation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.HID.HID/Simulation
  #pragma pack(pop)
  static check_size<sizeof(HID::Simulation), 0 + sizeof(int)> __UnityEngine_InputSystem_HID_HID_SimulationSizeCheck;
  static_assert(sizeof(HID::Simulation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
