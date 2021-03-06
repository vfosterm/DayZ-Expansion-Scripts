/**
 * config.cpp
 *
 * DayZ Expansion Mod
 * www.dayzexpansion.com
 * © 2020 DayZ Expansion Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

/**@class		Config
 * @brief		This file handle expansion core configs
 **/
class CfgPatches
{
	class DayZExpansion_Core
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{ 
			"DZ_Vehicles_Wheeled",
			"DZ_Characters",
			"DZ_Scripts",
			"DZ_Data",
			"DZ_AI",	
			"DayZExpansion_Animations_Player"
		};
	};
};

class CfgSurfaces
{
	class DZ_SurfacesExt;
	class expansion_test_surface: DZ_SurfacesExt
	{
		files = "lino_int*";
		friction = 5.0;
		restitution = 1.0;
		soundEnviron = "road";
		soundHit = "hard_ground";
		character = "Empty";
		audibility = 0.4;
		footDamage = 0.023;
		impact = "Hit_Rubber";
		isDigable = 0;
		isFertile = 0;
	};
};

class CfgSlots
{
	class Slot_ExpansionHelicopterBattery
	{
		name = "ExpansionHelicopterBattery";
		displayName = "ExpansionHelicopterBattery";
		selection = "battery";
		ghostIcon = "carbattery";
	};
	class Slot_ExpansionAircraftBattery
	{
		name = "ExpansionAircraftBattery";
		displayName = "ExpansionAircraftBattery";
		selection = "battery";
		ghostIcon = "carbattery";
	};
};

class CfgVehicleClasses
{
	class Expansion_Gear
	{
		displayName = "Expansion Gear";
	};
	class Expansion_Launchers
	{
		displayName = "Expansion Launchers";
	};
	class Expansion_Flags
	{
		displayName = "Expansion Flags";
	};
	class Expansion_Items
	{
		displayName = "Expansion Items";
	};
	class Expansion_Explosives
	{
		displayName = "Expansion Explosives";
	};
	class Expansion_Barricading
	{
		displayName = "Expansion Barricading";
	};
	class Expansion_Airdrop
	{
		displayName = "Expansion Airdrop";
	};
	class Expansion_Trader
	{
		displayName = "Expansion Traders";
	};
	class Expansion_Npc
	{
		displayName = "Expansion Npc";
	};
	class Expansion_Static
	{
		displayName = "Expansion Static";
	};
	class Expansion_Construction
	{
		displayName = "Expansion Construction";
	};
	class Expansion_Helicopter
	{
		displayName = "Expansion Helicopter";
	};
	class Expansion_Motorbike
	{
		displayName = "Expansion Bike";
	};
	class Expansion_Quadbike
	{
		displayName = "Expansion Quad";
	};
	class Expansion_Bicycle
	{
		displayName = "Expansion Bicycle";
	};
	class Expansion_Truck
	{
		displayName = "Expansion Truck";
	};
	class Expansion_Plane
	{
		displayName = "Expansion Plane";
	};
	class Expansion_Boat
	{
		displayName = "Expansion Boat";
	};
	class Expansion_Ship
	{
		displayName = "Expansion Ship";
	};
	class Expansion_Sign
	{
		displayName = "Expansion Sign";
	};
	class Expansion_Car
	{
		displayName = "Expansion Car";
	};
	class Expansion_Vehicle
	{
		displayName = "Expansion Vehicle";
	};
};

class CfgAIBehaviours
{
	class Soldier
	{
		name="Bot";
		HeadLookBoneName="lookat";
		teamName="Bots";
		class BehaviourHLBot
		{
			class MovementWalk
			{
				maxSpeed=1.5;
				minSpeed=0;
				acceleration=5;
				maxAngleSpeed=180;
				slowRadius=0;
				stopRadius=0.5;
				pathFilter="BotCalm";
			};
			class MovementRun
			{
				maxSpeed=3;
				minSpeed=0;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				pathFilter="BotAlerted";
			};
			class MovementSprint
			{
				maxSpeed=9;
				minSpeed=0;
				acceleration=27;
				maxAngleSpeed=180;
				maxSpeedRange=9;
				slowRadius=3.2;
				goalRadius=1.5;
				goalSpeed=7.1999998;
				stopRadius=1.7;
				waypointRadius=1.5;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="false";
				smoothAcceleration="true";
				pathFilter="BotAlerted";
			};
			class SlotCalm
			{
				class BehaviourBotCalm
				{
					StandingDurationMin=4;
					StandingDurationMax=8;
					WalkingDurationMin=4;
					WalkingDurationMax=12;
					MinLookTime=1;
					MaxLookTime=2;
					IsAttractMode="false";
					class SoundsDuring
					{
						class Sound1
						{
							moveWithEntity="true";
						};
						probability=0.80000001;
						RepeatTimeMin=9;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourBotAlerted
				{
					maxTimeInDisturbedState=5;
					alertToAttract=0.5;
					fightStateEnterDistance=2;
					fightStateExitDistance=3;
					fightStateEnterOrientAngleDiff=160;
					fightStateExitOrientAngleDiff=160;
					disturbedTargetHistoryLength=20;
					disturbedVisionUtilityWeight=1;
					disturbedNoiseUtilityWeight=1;
					disturbedDamageUtilityWeight=0;
					attractedTargetHistoryLength=40;
					attractedVisionUtilityWeight=1;
					attractedNoiseUtilityWeight=1;
					attractedDamageUtilityWeight=1;
					chaseTargetHistoryLength=20;
					chaseVisionUtilityWeight=1;
					chaseNoiseUtilityWeight=1;
					chaseDamageUtilityWeight=1;
					class SoundsEntering
					{
						class Sound1
						{
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
						};
						probability=1;
						RepeatTimeMin=3.9000001;
						RepeatTimeMax=4.0999999;
						RepeatEnabled="true";
					};
					noiseMakeAlertPeriod=3;
					class NoiseMakeAlert
					{
						strength=30;
						type="sound";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=0.75;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=0.75;
				class Calm
				{
					DropSpeed=3;
					DropDelay=2;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=1;
					DropDelay=10;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase
		{
			visionProximityRange=2.5;
			visionProximityStrengthMult=3;
			visionCloseRange=8;
			visionCloseHeight=1.8;
			visionCloseStrengthMult=3;
			visionRangeMin=20;
			visionRangeMax=40;
			visionFov=1;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=20;
			visionPeripheralFov=2.3;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1;
			visionNightMinMult=1;
			visionNightMaxMult=0.40000001;
			visionRainMinMult=1;
			visionRainMaxMult=0.5;
			visionFogMinMult=1;
			visionFogMaxMult=0.5;
		};
		class NoiseSystemParams
		{
			rangeMin=3;
			rangeMax=35;
			rangeShotMin=25;
			rangeShotMax=200;
			radiusMin=5;
			radiusMax=20;
			radiusShotMin=10;
			radiusShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Bots=0;
				Player=1;
			};
		};
	};
	class SoldierFemale: Soldier
	{
		class BehaviourHLBot: BehaviourHLBot
		{
			class SlotCalm: SlotCalm
			{
				class BehaviourBotCalm: BehaviourBotCalm
				{
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
							moveWithEntity="true";
						};
					};
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourBotAlerted: BehaviourBotAlerted
				{
					class SoundsEntering: SoundsEntering
					{
						class Sound1: Sound1
						{
						};
					};
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
						};
					};
				};
			};
		};
	};
	class SoldierMale: Soldier
	{
		class BehaviourHLBot: BehaviourHLBot
		{
			class SlotCalm: SlotCalm
			{
				class BehaviourBotCalm: BehaviourBotCalm
				{
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
							moveWithEntity="true";
						};
					};
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourBotAlerted: BehaviourBotAlerted
				{
					class SoundsEntering: SoundsEntering
					{
						class Sound1: Sound1
						{
						};
					};
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
						};
					};
				};
			};
		};
	};
};

class CfgVehicles
{
	class Man;
	class Inventory_Base;
	class Container_Base;
	class HouseNoDestruct;
	class DayZPlayer;
	class SurvivorM_Mirek;
	class SurvivorM_Denis;
	class SurvivorM_Boris;
	class SurvivorM_Cyril;
	class SurvivorM_Elias;
	class SurvivorM_Francis;
	class SurvivorM_Guo;
	class SurvivorM_Hassan;
	class SurvivorM_Indar;
	class SurvivorM_Jose;
	class SurvivorM_Kaito;
	class SurvivorM_Lewis;
	class SurvivorM_Manua;
	class SurvivorM_Niki;
	class SurvivorM_Oliver;
	class SurvivorM_Peter;
	class SurvivorM_Quinn;
	class SurvivorM_Rolf;
	class SurvivorM_Seth;
	class SurvivorM_Taiki;
	class SurvivorF_Linda;
	class SurvivorF_Maria;
	class SurvivorF_Frida;
	class SurvivorF_Gabi;
	class SurvivorF_Helga;
	class SurvivorF_Irena;
	class SurvivorF_Judy;
	class SurvivorF_Keiko;
	class SurvivorF_Lina;
	class SurvivorF_Naomi;
	class SurvivorBase: Man
	{
		attachments[]=
		{
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Hands",
			"LeftHand",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Book"
		};
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_Shoulder",
				"Slot_Melee",
				"Slot_Vest",
				"Slot_Body",
				"Slot_Hips",
				"Slot_Legs",
				"Slot_Back",
				"Slot_Headgear",
				"Slot_Mask",
				"Slot_Eyewear",
				"Slot_Gloves",
				"Slot_Feet",
				"Slot_Armband"
			};
		};
		class enfAnimSys
		{
			meshObject="dz\characters\bodies\player_testing.xob";
			graphName="DayZExpansion\Animations\Player\Graphs\player_main.agr";
			defaultInstance="DayZExpansion\Animations\Player\player_main.asi";
			skeletonName="player_testing.xob";
			startNode="MasterControl";
		};
	};

	class CarWheel : Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop;
			};
		};
	};
	class CarDoor : Inventory_Base
	{
		hasDoors=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health;
			};
			class DamageZones
			{
				class Window
				{
					class Health;
				};
				class Doors
				{
					class Health;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp;
				class drop;
			};
		};
	};

	class Car;
	class CarScript : Car
	{
		applySkinsTo[] = { };
	};
	
	class Crew;
	class Driver;
	class CoDriver;
	class SimulationModule;
	class Axles;
	class Front;
	class Wheels;
	class Left;
	class Right;
	class Rear;
	class ViewPilot;
	class AnimationSources;
	class DoorsDriver;
	class DoorsCoDriver;
	class DoorsHood;
	class DoorsTrunk;
	class HideDestroyed_1_1;
	class HideDestroyed_1_2;
	class HideDestroyed_2_1;
	class HideDestroyed_2_2;
	class AnimHitWheel_1_1;
	class AnimHitWheel_1_2;
	class AnimHitWheel_2_1;
	class AnimHitWheel_2_2;
	class HitDoorsHood;
	class HitDoorsTrunk;
	class HitDoorsDrivers;
	class HitDoorsCoDrivers;
	class HitDoorsCargo;

	class ExpansionPickup: Inventory_Base
	{
		scope = 2;
	};

	class ExpansionPickupCone: ExpansionPickup
	{
		scope = 2;
		model = "\DayZExpansion\Dta\Core\cone.p3d";
	};

	class ExpansionDebugCone: HouseNoDestruct
	{
		scope = 2;
		model="\DayZExpansion\Dta\Core\cone.p3d";
		hiddenSelections[]={"body"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,0,0,0.5,co)"};
	};

	class ExpansionDebugConeSmall: HouseNoDestruct
	{
		scope = 2;
		model="\DayZExpansion\Dta\Core\coneSmall.p3d";
		hiddenSelections[]={"body"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,0,0,0.5,co)"};
	};

	class ExplosionPoint: HouseNoDestruct
	{
		scope = 2;
		model="\DZ\data\lightpoint.p3d";
	};

	class ExplosionSmall: ExplosionPoint
	{
		scope = 2;
	};

	class ExpansionWheel: CarWheel // Inventory_Base
	{
		scope = 1;

		mass = 80.0;
		radius = 0.536;
		width = 0.316;
	};

	class ExpansionVehicleScript: Inventory_Base
	{
		scope = 1;
		vehicleClass = "Expansion_Vehicle";

		fuelCapacity = 50;
		brakeFluidCapacity = 1;
		oilCapacity = 4;
		coolantCapacity = 6;

		hasDoors = 0;

		/*
		class Crew
		{
			class Driver
			{
				isDriver = 1;
				actionSel = "seat_driver";
				proxyPos = "crewDriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
			};
			class CoDriver
			{
				actionSel = "seat_coDriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
			};
		};

		class VehicleSimulation
		{
			class Axles
			{
				class Front
				{
					maxSteeringAngle = 35;
					finalRatio = 0.0;
					brakeBias = 0.7;
					brakeForce = 4500;
					wheelHubMass = 10;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 300;
						stiffness = 60000;
						compression = 2100;
						damping = 5500;
						travelMaxUp = 0.079;
						travelMaxDown = 0.06;
					};
					class Wheels
					{
						class Left
						{
							inventorySlot = "Expansion_CivSedanWheel_1_1";
							animTurn = "turnfrontleft";
							animRotation = "wheelfrontleft";
							animDamper = "damper_1_1";
							wheelHub = "wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot = "Expansion_CivSedanWheel_2_1";
							animTurn = "turnfrontright";
							animRotation = "wheelfrontright";
							animDamper = "damper_2_1";
							wheelHub = "wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.3;
					brakeForce = 3500;
					wheelHubMass = 10;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 275;
						stiffness = 34000;
						compression = 2000;
						damping = 5100;
						travelMaxUp = 0.086;
						travelMaxDown = 0.133;
					};
					class Wheels
					{
						class Left
						{
							inventorySlot = "Expansion_CivSedanWheel_1_2";
							animTurn = "turnbackleft";
							animRotation = "wheelbackleft";
							animDamper = "damper_1_2";
							wheelHub = "wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot = "Expansion_CivSedanWheel_2_2";
							animTurn = "turnbackright";
							animRotation = "wheelbackright";
							animDamper = "damper_2_2";
							wheelHub = "wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		*/
	};

	class ExpansionBikeScript: ExpansionVehicleScript
	{
		scope = 1;
		vehicleClass = "Expansion_Bicycle";
	};

	class ExpansionCarScript: ExpansionVehicleScript
	{
		scope = 1;
		vehicleClass = "Expansion_Car";
	};

	class ExpansionSoundProxyBase: CarScript
	{
		scope = 1;
	};
	class ExpansionVehicleScriptSoundProxyBase: ExpansionSoundProxyBase
	{
		scope = 1;
	};
	class ExpansionBoatScriptSoundProxyBase: ExpansionSoundProxyBase
	{
		scope = 1;
	};

	class ExpansionWreck: Container_Base
	{
		scope=2;
		forceFarBubble = "true";
		carveNavmesh = 1;
		itemsCargoSize[]={10,100};
		rotationFlags = 2;
		itemSize[] = {20,20};
		weight = 1000000;
		physLayer="item_large";
		cargoClass="";
		inventoryCondition="true";
		storageCategory=1;
		openable=0;
		lootCategory="Containers";
		class GUIInventoryAttachmentsProps
		{
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
		};
	};

	class ExpansionHelicopterScript: CarScript
	{
		scope = 1;
		vehicleClass = "Expansion_Helicopter";

		attachments[]=
		{
			"ExpansionHelicopterBattery",
			"Reflector_1_1",
			"CarRadiator",
			"GlowPlug"
		};

		class Crew: Crew
		{
			class Driver: Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
			};
			class CoDriver: CoDriver
			{
				actionSel="seat_codriver";
				proxyPos="crewCoDriver";
				getInPos="pos_codriver";
				getInDir="pos_codriver_dir";
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
		};

		class SimulationModule: SimulationModule
		{
			drive = "DRIVE_AWD";
			airDragCoefficient = 0.995;
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 4.0;
				gentleCoef = 0.75;
			};
			class Engine
			{
				inertia = 0.15;
				torqueMax = 114;
				torqueRpm = 3400;
				powerMax = 53.7;
				powerRpm = 5400;
				rpmIdle = 850;
				rpmMin = 900;
				rpmClutch = 1350;
				rpmRedline = 6000;
				rpmMax = 8000;
			};
			class Gearbox
			{
				reverse = 3.526;
				ratios[] = {3.667,2.1,1.361,1.0};
				timeToUncoupleClutch = 0.3;
				timeToCoupleClutch = 0.45;
				maxClutchTorque = 260;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle = 30;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 0;
					wheelHubRadius = 0.0;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_1";
							inventorySlot = "NivaWheel_1_1";
						};
						class Right: Right
						{
							animDamper = "damper_2_1";
							inventorySlot = "NivaWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 0;
					wheelHubRadius = 0.0;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_2";
							inventorySlot = "NivaWheel_1_2";
						};
						class Right: Right
						{
							animDamper = "damper_2_2";
							inventorySlot = "NivaWheel_2_2";
						};
					};
				};
			};
		};

		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Engine";
				description="";
				attachmentSlots[]=
				{
					"ExpansionHelicopterBattery",
					"GlowPlug"
				};
				icon="missing";
			};
			class Body
			{
				name="Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1"
				};
				icon="missing";
			};
		};

		class Cargo
		{
			itemsCargoSize[]={10,50};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};

	class ExpansionBoatScript: CarScript
	{
		scope=0;
		vehicleClass="Expansion_Boat";
		displayName="";
		model="";	
		fuelCapacity=592;
		fuelConsumption=121;
		attachments[]=
		{
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"GlowPlug"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Engine";
				description="";
				attachmentSlots[]=
				{
					"GlowPlug",
					"TruckBattery"
				};
				icon="missing";
			};
			class Body
			{
				name="Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1"
				};
				icon="missing";
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class Crew: Crew
		{
			class Driver: Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
			};
			class CoDriver: CoDriver
			{
				actionSel="seat_codriver";
				proxyPos="crewCoDriver";
				getInPos="pos_codriver";
				getInDir="pos_codriver_dir";
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			drive="DRIVE_AWD";
			airDragCoefficient=0.995;
			class Gearbox
			{
				reverse = 2.526;
				ratios[] = {1.3,1.2,1.1,1.0};
				timeToUncoupleClutch = 0.3;
				timeToCoupleClutch = 0.45;
				maxClutchTorque = 260;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="NivaWheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="NivaWheel_1_1";
						};
					};
				};
				class Rear: Rear
				{
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_2";
							inventorySlot="NivaWheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_2";
							inventorySlot="NivaWheel_1_1";
						};
					};
				};
			};
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
	};

	class ExpansionPlaneScript: CarScript
	{
		scope = 1;
		vehicleClass = "Expansion_Plane";
		class AnimationSources
		{
			class rotor
			{
				source="user";
				animPeriod=0.00099999998;
				initPhase=0;
			};
			class hiderotor
			{
				source="user";
				animPeriod=0.00099999998;
				initPhase=0;
			};
			class hiderotorblur
			{
				source="user";
				animPeriod=0.00099999998;
				initPhase=0;
			};
			class AileronL
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
			class AileronR
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
			class FlapL
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
			class FlapR
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
			class ElevatorL
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
			class ElevatorR
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
			class Rudder
			{
				source="user";
				animPeriod=1.0;
				initPhase=0;
			};
		};
	};
	
	class ExpansionTraderBase: DayZPlayer
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};
	class ExpansionTraderMirek: SurvivorM_Mirek
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderDenis: SurvivorM_Denis
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};
	
	class ExpansionTraderBoris: SurvivorM_Boris
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderCyril: SurvivorM_Cyril
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderElias: SurvivorM_Elias
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderFrancis: SurvivorM_Francis
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderGuo: SurvivorM_Guo
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderHassan: SurvivorM_Hassan
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderIndar: SurvivorM_Indar
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderJose: SurvivorM_Jose
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderKaito: SurvivorM_Kaito
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderLewis: SurvivorM_Lewis
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderManua: SurvivorM_Manua
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderNiki: SurvivorM_Niki
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderOliver: SurvivorM_Oliver
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderPeter: SurvivorM_Peter
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderQuinn: SurvivorM_Quinn
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderRolf: SurvivorM_Rolf
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderSeth: SurvivorM_Seth
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderTaiki: SurvivorM_Taiki
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};
	
	class ExpansionTraderLinda: SurvivorF_Linda
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};
	
	class ExpansionTraderMaria: SurvivorF_Maria
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderFrida: SurvivorF_Frida
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderGabi: SurvivorF_Gabi
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderHelga: SurvivorF_Helga
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderIrena: SurvivorF_Irena
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderJudy: SurvivorF_Judy
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderKeiko: SurvivorF_Keiko
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderLina: SurvivorF_Lina
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderNaomi: SurvivorF_Naomi
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};

	class ExpansionTraderNewDenis: SurvivorM_Denis
	{
		scope = 2;
		vehicleClass = "Expansion_Trader";
	};
	
	class ExpansionNpcDenis: SurvivorM_Denis
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};
	
	class ExpansionNpcBoris: SurvivorM_Boris
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcCyril: SurvivorM_Cyril
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcElias: SurvivorM_Elias
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcFrancis: SurvivorM_Francis
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcGuo: SurvivorM_Guo
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcHassan: SurvivorM_Hassan
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcIndar: SurvivorM_Indar
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcJose: SurvivorM_Jose
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcKaito: SurvivorM_Kaito
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcLewis: SurvivorM_Lewis
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcManua: SurvivorM_Manua
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcNiki: SurvivorM_Niki
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcOliver: SurvivorM_Oliver
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcPeter: SurvivorM_Peter
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcQuinn: SurvivorM_Quinn
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcRolf: SurvivorM_Rolf
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcSeth: SurvivorM_Seth
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcTaiki: SurvivorM_Taiki
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};
	
	class ExpansionNpcLinda: SurvivorF_Linda
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};
	
	class ExpansionNpcMaria: SurvivorF_Maria
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcFrida: SurvivorF_Frida
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcGabi: SurvivorF_Gabi
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcHelga: SurvivorF_Helga
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcIrena: SurvivorF_Irena
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcJudy: SurvivorF_Judy
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcKeiko: SurvivorF_Keiko
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcLina: SurvivorF_Lina
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionNpcNaomi: SurvivorF_Naomi
	{
		scope = 2;
		vehicleClass = "Expansion_Npc";
	};

	class ExpansionSoldierMirek: SurvivorM_Mirek
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierDenis: SurvivorM_Denis
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
	
	class ExpansionSoldierBoris: SurvivorM_Boris
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierCyril: SurvivorM_Cyril
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierElias: SurvivorM_Elias
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierFrancis: SurvivorM_Francis
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierGuo: SurvivorM_Guo
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierHassan: SurvivorM_Hassan
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierIndar: SurvivorM_Indar
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierJose: SurvivorM_Jose
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierKaito: SurvivorM_Kaito
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierLewis: SurvivorM_Lewis
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierManua: SurvivorM_Manua
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierNiki: SurvivorM_Niki
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierOliver: SurvivorM_Oliver
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierPeter: SurvivorM_Peter
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierQuinn: SurvivorM_Quinn
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierRolf: SurvivorM_Rolf
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierSeth: SurvivorM_Seth
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierTaiki: SurvivorM_Taiki
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
	
	class ExpansionSoldierLinda: SurvivorF_Linda
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
	
	class ExpansionSoldierMaria: SurvivorF_Maria
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierFrida: SurvivorF_Frida
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierGabi: SurvivorF_Gabi
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierHelga: SurvivorF_Helga
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierIrena: SurvivorF_Irena
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierJudy: SurvivorF_Judy
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierKeiko: SurvivorF_Keiko
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierLina: SurvivorF_Lina
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldierNaomi: SurvivorF_Naomi
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Mirek: SurvivorM_Mirek
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Denis: SurvivorM_Denis
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
	
	class ExpansionSoldier2Boris: SurvivorM_Boris
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Cyril: SurvivorM_Cyril
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Elias: SurvivorM_Elias
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Francis: SurvivorM_Francis
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Guo: SurvivorM_Guo
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Hassan: SurvivorM_Hassan
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Indar: SurvivorM_Indar
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Jose: SurvivorM_Jose
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Kaito: SurvivorM_Kaito
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Lewis: SurvivorM_Lewis
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Manua: SurvivorM_Manua
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Niki: SurvivorM_Niki
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Oliver: SurvivorM_Oliver
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Peter: SurvivorM_Peter
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Quinn: SurvivorM_Quinn
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Rolf: SurvivorM_Rolf
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Seth: SurvivorM_Seth
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Taiki: SurvivorM_Taiki
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
	
	class ExpansionSoldier2Linda: SurvivorF_Linda
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
	
	class ExpansionSoldier2Maria: SurvivorF_Maria
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Frida: SurvivorF_Frida
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Gabi: SurvivorF_Gabi
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Helga: SurvivorF_Helga
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Irena: SurvivorF_Irena
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Judy: SurvivorF_Judy
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Keiko: SurvivorF_Keiko
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Lina: SurvivorF_Lina
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};

	class ExpansionSoldier2Naomi: SurvivorF_Naomi
	{
		scope = 2;
		vehicleClass = "Expansion_Soldier";
	};
};