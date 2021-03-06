/**
 * ActionConstructor.c
 *
 * DayZ Expansion Mod
 * www.dayzexpansion.com
 * © 2020 DayZ Expansion Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

/**@class		ActionConstructor
 * @brief		
 **/
modded class ActionConstructor
{
	// ------------------------------------------------------------
	// RegisterActions
	// ------------------------------------------------------------
	override void RegisterActions( TTypenameArray actions )
	{
		super.RegisterActions( actions );	

		//! Basebuilding
		actions.Insert( ExpansionActionSelectNextPlacement );
		actions.Insert( ExpansionActionDamageBaseBuilding );
		
		//! Generator
		actions.Insert( ExpansionActionTurnOnGeneratorOnGround );
		actions.Insert( ExpansionActionTurnOffGeneratorOnGround );

		//! Paracute
		actions.Insert( ExpansionActionOpenParachute );
		actions.Insert( ExpansionActionCutParachute );

		//! Vehicles
		actions.Insert( ExpansionActionGetInTransport );
		actions.Insert( ExpansionActionGetOutTransport );

		actions.Insert( ExpansionActionGetInExpansionVehicle );
		actions.Insert( ExpansionActionGetOutExpansionVehicle );
		
		// actions.Insert( ExpansionActionGetOutTransportTemp );

		actions.Insert( ExpansionActionSwitchGear );
		actions.Insert( ExpansionActionPairKey );
		actions.Insert( ExpansionActionUnPairKey );
		actions.Insert( ExpansionActionLockVehicle );
		actions.Insert( ExpansionActionUnlockVehicle );
		actions.Insert( ExpansionActionCarHorn );
		actions.Insert( ExpansionActionOpenVehicleDoor );
		actions.Insert( ExpansionActionCloseVehicleDoor );
		actions.Insert( ExpansionActionStartEngine );
		actions.Insert( ExpansionActionStopEngine );

		//! Boats
		actions.Insert( ExpansionActionSwitchBoatController );
		actions.Insert( ExpansionActionSwitchBoatControllerInput );
		actions.Insert( ExpansionActionStartBoat );
		actions.Insert( ExpansionActionStopBoat );
		
		//! Helicopters
		actions.Insert( ExpansionActionFlare );
		actions.Insert( ExpansionActionRocket );
		actions.Insert( ExpansionActionHelicopterHoverRefill );
		actions.Insert( ExpansionActionSwitchAutoHover );
		actions.Insert( ExpansionActionSwitchAutoHoverInput );

		//! Removed because it wont be in first release
		//actions.Insert( ExpansionActionConnectTow );
		//actions.Insert( ExpansionActionConnectWinch );
		//actions.Insert( ExpansionActionDisconnectWinch );
		actions.Insert( ExpansionActionOpenTraderMenu );
		actions.Insert( ExpansionActionSwitchLightsOn );
		actions.Insert( ExpansionActionClose );
		actions.Insert( ExpansionActionOpen );

		//! Locks
		actions.Insert( ExpansionActionEnterCodeLock );
		actions.Insert( ExpansionActionChangeCodeLock );
		actions.Insert( ExpansionActionEnterSafeLock );

		//! Removed because it wont be in first release
		// actions.Insert( ExpansionActionTakeChicken );
		actions.Insert( ExpansionActionPaint );
		actions.Insert( ExpansionActionCycleOpticsModeInHands );
		actions.Insert( ExpansionActionCycleOpticsMode );
		actions.Insert( ExpansionActionWritePaper );
		actions.Insert( ExpansionActionEnterFlagMenu );
		actions.Insert( ActionDismantleFlag );
		
		// actions.Insert( ExpansionActionGetQuest );
		// actions.Insert( ExpansionActionTakeInQuest );
	}
}