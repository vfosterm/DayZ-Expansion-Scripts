/*
 * ExpansionVodnik.c
 *
 * DayZ Expansion Mod
 * www.dayzexpansion.com
 * © 2020 DayZ Expansion Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

class ExpansionVodnikDoorDriver extends CarDoor {}
class ExpansionVodnikDoorCoDriver extends CarDoor {}
class ExpansionVodnikDoorCargo1 extends CarDoor {}
class ExpansionVodnikDoorCargo2 extends CarDoor {}

class ExpansionVodnik extends ExpansionBoatScript
{
	// ------------------------------------------------------------
	void ExpansionVodnik()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::Constructor - Start");
		#endif
		
		m_dmgContactCoef = 0.018;

		//! Vanilla
		m_dmgContactCoef			= 0.018;

		//! Custom
		m_MaxSpeed					= 25.0;

		m_TurnCoef					= 0.2;
	
		m_Offset					= 1.8;

		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::Constructor - End");
		#endif
	}
	
	// ------------------------------------------------------------
	override int GetAnimInstance()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::GetAnimInstance");
		#endif

		return ExpansionVehicleAnimInstances.EX_SEDAN;
	}

	// ------------------------------------------------------------
	override CarRearLightBase CreateRearLight()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::CreateRearLight");
		#endif

		return CarRearLightBase.Cast( ScriptedLightBase.CreateLight(ExpansionRearCarLights) );
	}
	
	// ------------------------------------------------------------
	override CarLightBase CreateFrontLight()
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::CreateFrontLight");
		#endif

		return CarLightBase.Cast( ScriptedLightBase.CreateLight(ExpansionCarFrontLight) );
	}

	// ------------------------------------------------------------
	override int GetSeatAnimationType( int posIdx )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::GetSeatAnimationType");
		#endif

		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 4:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 5:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 6:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 7:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 8:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 9:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		}

		return 0;
	}

	// ------------------------------------------------------------
	override string GetDoorSelectionNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "vodnikdriverdoor";
		break;
		case 1:
			return "vodnikcodriverdoor";
		break;
		}
		
		return super.GetDoorSelectionNameFromSeatPos(posIdx);
	}

	// ------------------------------------------------------------
	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "vodnikdriverdoor";
		break;
		case 1:
			return "vodnikcodriverdoor";
		break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	
	// ------------------------------------------------------------
	override int GetCarDoorsState( string slotType )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::GetCarDoorsState");
		#endif

		CarDoor carDoor;
		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor ) {
			return CarDoorState.DOORS_MISSING;
		}

		switch( slotType )
		{
			case "vodnikdriverdoor": {
				if ( GetAnimationPhase("vodnikdriverdoor") > 0.5 ) {
					return CarDoorState.DOORS_OPEN;
                } 
				else {
					return CarDoorState.DOORS_CLOSED;
                }
                break;
            }
			case "vodnikcodriverdoor": {
				if ( GetAnimationPhase("vodnikcodriverdoor") > 0.5 ) {
					return CarDoorState.DOORS_OPEN;
                } 
				else {
					return CarDoorState.DOORS_CLOSED;
                }
                break;
            }
            default: {
                return CarDoorState.DOORS_MISSING;
			}
		}

		return CarDoorState.DOORS_MISSING;
	}
	
	// ------------------------------------------------------------
	override float OnSound( CarSoundCtrl ctrl, float oldValue )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::OnSound - Start");
		#endif

		switch ( ctrl )
		{
			case CarSoundCtrl.DOORS:
				float newValue = 0;

				if ( GetCarDoorsState( "vodnikdriverdoor" ) == CarDoorState.DOORS_CLOSED )
				{
					newValue += 0.8;
				}

				if ( GetCarDoorsState( "vodnikcodriverdoor" ) == CarDoorState.DOORS_CLOSED )
				{
					newValue += 0.8;
				}

				if ( newValue > 1 )
					newValue = 1;

				#ifdef EXPANSIONEXPRINT
				EXPrint("ExpansionVodnik::OnSound - End");
				#endif

				return newValue;
			default:
				break;
		}

		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::OnSound - End");
		#endif

		return oldValue;
	}

	// ------------------------------------------------------------
	override bool CanReachDoorsFromSeat( string pDoorsSelection, int pCurrentSeat )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::CanReachDoorsFromSeat");
		#endif

		switch( pCurrentSeat )
		{
			case 0: 
			{
				if (pDoorsSelection == "vodnikdriverdoor")
				{
					return true;
				}
				break;
			}
			case 1: {
				if (pDoorsSelection == "vodnikcodriverdoor")
				{
					return true;
				}
				break;
			}
			break;
		}	
		return true;	
	}

	// ------------------------------------------------------------
	override bool CanReachSeatFromDoors( string pSeatSelection, vector pFromPos, float pDistance = 1.0 )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::CanReachSeatFromDoors");
		#endif

		return true;		
	}

	// ------------------------------------------------------------
	override string GetAnimSourceFromSelection( string selection )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::GetAnimSourceFromSelection");
		#endif

		switch( selection )
		{
			case "vodnikdriverdoor":
				return "vodnikdriverdoor";
			case "vodnikcodriverdoor":
				return "vodnikcodriverdoor";
		}

		return "";
	}

	// ------------------------------------------------------------
	override bool CrewCanGetThrough( int posIdx )
	{
		#ifdef EXPANSIONEXPRINT
		EXPrint("ExpansionVodnik::CrewCanGetThrough");
		#endif

		switch( posIdx )
		{
			case 0: {
				if ( GetAnimationPhase("vodnikdriverdoor") > 0.5 ) {
					return CarDoorState.DOORS_OPEN;
                } else {
					return CarDoorState.DOORS_CLOSED;
                }
                break;
            }
			case 1: {
				if ( GetAnimationPhase("vodnikcodriverdoor") > 0.5 ) {
					return CarDoorState.DOORS_OPEN;
                } else {
					return CarDoorState.DOORS_CLOSED;
                }
                break;
            }
            default: {
                return CarDoorState.DOORS_MISSING;
			}
		}

		return CarDoorState.DOORS_MISSING;
	}

	// ------------------------------------------------------------
	override float GetActionDistanceFuel()
	{
		return 4.5;
	}
	
	// ------------------------------------------------------------
	override string GetActionCompNameFuel()
	{
		return "refill";
	}

	// ------------------------------------------------------------
	override bool IsVitalCarBattery()
	{
		return true;
	}

	// ------------------------------------------------------------
	override bool IsVitalTruckBattery()
    {
        return false;
    }

	// ------------------------------------------------------------
	override bool IsVitalSparkPlug()
	{
		return true;
	}
	
	// ------------------------------------------------------------
	override bool IsVitalRadiator()
	{
		return false;
	}
	
	// ------------------------------------------------------------
	override bool IsVitalGlowPlug()
	{
		return false;
	}

	// ------------------------------------------------------------
	override bool IsVitalEngineBelt()
	{
		return false;
	}

	// ------------------------------------------------------------
	override bool IsCar()
	{
		return true;
	}

	// ------------------------------------------------------------
	override bool CanObjectAttach( Object obj )
	{
		if ( !obj.IsInherited( PlayerBase ) ) 
			return false;

		if ( vector.Distance( GetPosition(), obj.GetPosition() ) > m_BoundingRadius * 1.5 )
			return false;

		return true;
	}

	// --------------------------------------------------------- ---
    override void UpdateLights(int new_gear = -1) 
	{
        super.UpdateLights( new_gear );

        if ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) 
		{
			ItemBase battery;
			
			if ( IsVitalCarBattery() ) battery = ItemBase.Cast( FindAttachmentBySlotName("CarBattery") );
			
			if ( battery )
			{
                int b;

                vector color;
                vector ambient;

                if ( m_HeadlightsOn )
				{
                    if ( m_Lights.Count() == 0 )
                    {
                        CreateLights( this, "intlight", ExpansionPointLight, Vector(1, 1, 1), Vector(1, 1, 1), 5, 1, false, true );
                    }
                }
                else
				{
                    for ( b = 0; b < m_Particles.Count(); b++ )
			        {
                        m_Particles[b].Stop( );

                        GetGame().ObjectDelete( m_Particles[b] );
                    }

                    for ( b =- 0; b < m_Lights.Count(); b++ )
			        {
                        m_Lights[b].ExpansionSetEnabled( false );

                        GetGame().ObjectDelete( m_Lights[b] );
                    }

                    m_Lights.Clear();
                }
            }
        }
    }
}