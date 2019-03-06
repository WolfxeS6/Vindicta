class CfgVehicles {
	class Logic;
	class Module_F: Logic{};
	class ModuleSector_F: Module_F{};

	class Project_0_LocationSector: ModuleSector_F
	{
		scope = 2; 
        vehicleClass = "Modules";
		displayName = "Location Sector";
		category = "Project_0";

		// Example for futur modules ?
		// function = "Project_0_fnc_createLocation";

		class Combo;
		class Units;
		class AttributesBase;
		class Edit;
		class Attributes: AttributesBase
		{
			class Units: Units
			{
				property = "Project_0_LocationSector";
			};
			class Name: Edit
			{
				displayName = "Name";
				tooltip = "Name of the location";
				property = "Project_0_LocationSector_name";
				control = "Edit";
			};
			class Side: Combo
  			{
				property = "Project_0_LocationSector_side";
				displayName = "Side"; 
				tooltip = "Side of the location (city, base, outpost ...)";
				typeName = "STRING";
				value = "east";
				defaultValue = "east";
				class Values
				{
					class EAST {name = "east"; value = "east";};
					class WEST {name = "west"; value = "west";};
					class INDEPENDENT {name = "independant"; value = "independant";};
					class NONE {name = "none"; value = "none";};
				};
			};
			class Type: Combo
  			{
				property = "Project_0_LocationSector_type";
				displayName = "Type";
				tooltip = "Type of the location (city, base, outpost ...)"; 
				typeName = "STRING"; 
				value = "city";
				defaultValue = "city";
				class Values
				{
					class City {name = "City"; value = "city";};
					class Base {name = "Base"; value = "base";};
					class Outpost {name = "Outpost"; value = "outpost";};
					// class Airfield	{name = "Airfield"; value = "airfield";};
					// class Seaport	{name = "Seaport"; value = "seaport";};
					// class Camp	{name = "Camp"; value = "camp";};
				};
			};
			class CapacityInfantry
			{
				displayName = "Capacity Infantry";
				tooltip = "Capacity Infantry of the location";
				property = "Project_0_LocationSector_CapacityInfantry";
				control = "Slider";
				value = 20;
				defaultValue = 20;
			};
			class CivilianPresence_UnitCount
			{
				displayName = "$STR_a3_to_basicCivilianPresence25";
				tooltip = "$STR_a3_to_basicCivilianPresence26";
				property = "Project_0_LocationSector_CivUnitCount";
				control = "CivilianPresence_UnitCount";
				expression = "_this setVariable [""#unitCount"",_value]";
				value = 5;
				defaultValue = 5;
			};
		};
	};

	class Project_0_LocationWaypoint: Module_F
	{
		scope = 2;
        vehicleClass = "Modules";
		displayName = "Location Waypoint";
		category = "Project_0";

		class Units;
		class Edit;
		class AttributesBase;
		class Attributes: AttributesBase
		{
			class Units: Units
			{
				property = "Project_0_LocationWaypoint";
			};
			class isWaypoint: Edit
			{
				displayName = "isWaypoint";
				value = "true";
				defaultVvalue = "true";
				tooltip = "Name of the waypoint location";
				property = "Project_0_LocationWaypoint_name";
			};
		};
	};
};
