class CfgPatches
{
	class TTC_TacticalFlava_Overrides
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"TF_AR15_Magazines",
			"TF_AK101",
			"TF_AK102",
			"TF_M4",
			"TF_SCAR_MK16"
		};
	};
};
class CfgMods
{
	class TTC_TacticalFlava_Overrides
	{
		dir="Vanilla_Plus_TacticalFlava_Overrides";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="TTC_TacticalFlava_Overrides";
		credits="Morty";
		author="Morty";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};

//!Firearms
class CfgWeapons
{
	class Rifle_Base;
	class TF_AK101_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_AK102_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_M4A1_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_SCAR_L_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_SCAR_L_CQC: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
};
//!Magazines
class CfgMagazines
{
	class Magazine_Base;
	class TF_Mag_M4_STANAG_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_Mag_M4_PMAG10Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_Mag_M4_PMAG20Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_Mag_M4_PMAG30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class TF_Mag_M4_PMAG40Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
};
	
	
	
	
	