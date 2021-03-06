class CfgPatches
{
	class sh_factions
	{
		units[]=
		{
			"sh_cdf_bmp1",
			"sh_cdf_t80bv",
			"sh_cdf_gaz66_ammo",
			"sh_cdf_ural_fuel",
			"sh_cdf_gaz66_repair",
			"sh_cdf_gaz66",
			"sh_cdf_uaz_open",
			"sh_cdf_uaz",
			"sh_cdf_ural",
			"sh_marines_rg31",
			"sh_marines_m1a1",
			"sh_cdn_su25",
			"sh_cdn_mi24",
			"sh_cdn_mi8"
		};
		weapons[]={};
		requiredVersion=0.10000000149;
		requiredAddons[]={};
	};
};
class CfgFactionClasses
{
	class sh_faction_cdf
	{
		displayName="[SH]CDF";
		icon="\sh_faction_chdkz\cfgfactionclasses_cdf_ca.paa";
		priority=1;
		side=0;
		backpack_tf_faction_radio_api = "tf_anprc155";
		personal_tf_faction_radio_api = "tf_anprc154";
		rifleman_tf_faction_radio_api = "tf_fadak";
		airborne_tf_faction_radio_api = "tf_anarc164";

	};
	class sh_faction_det5
	{
		displayName="[SH]DET5";
		icon="\sh_faction_chdkz\cfgfactionclasses_cdf_ca.paa";
		priority=1;
		side=0;
		backpack_tf_faction_radio_api = "VTN_BP_R168KNE_FLORA";
		personal_tf_faction_radio_api = "tf_pnr1000a";
		rifleman_tf_faction_radio_api = "tf_anprc148jem";
		airborne_tf_faction_radio_api = "tf_mr6000l";
	};
	class sh_faction_sasr
	{
		displayName="[SH]SASR";
		icon="\sh_faction_chdkz\cfgfactionclasses_cdf_ca.paa";
		priority=1;
		side=0;
		backpack_tf_faction_radio_api = "VTN_BP_R168KNE_FLORA";
		personal_tf_faction_radio_api = "tf_pnr1000a";
		rifleman_tf_faction_radio_api = "tf_anprc148jem";
		airborne_tf_faction_radio_api = "tf_mr6000l";
	};
	class sh_faction_marines
	{
		displayName="[SH]Marines";
		icon="\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
		priority=1;
		side=0;
		backpack_tf_faction_radio_api = "tf_rt1523g_big";
		personal_tf_faction_radio_api = "tf_rf7800str";
		rifleman_tf_faction_radio_api = "tf_anprc152";
		airborne_tf_faction_radio_api = "tf_anarc210";
	};
	class sh_faction_cdn
	{
		displayName="[SH]CDN";
		icon="\sh_faction_chdkz\cfgfactionclasses_cdf_ca.paa";
		priority=1;
		side=0;
		backpack_tf_faction_radio_api = "tf_anprc155";
		personal_tf_faction_radio_api = "tf_anprc154";
		rifleman_tf_faction_radio_api = "tf_fadak";
		airborne_tf_faction_radio_api = "tf_anarc164";
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class rhs_bmp1_vv;
	class rhs_t80bv;
	class rhs_gaz66_ammo_vmf;
	class RHS_Ural_Fuel_VMF_01;
	class rhs_gaz66_repair_vdv;
	class rhs_gaz66o_msv;
	class rhs_uaz_open_vdv;
	class RHS_UAZ_MSV_01;
	class rhs_ural_vv_01;
	class rhsusf_m1a1fep_wd;
	class ffaa_et_rg31_samson;
	class RHS_Mi8AMTSh_vvs;
	class RHS_Mi24V_vdv;
	class RHS_Su25SM_vvsc;
	class sh_faction_cdf_unit : B_Soldier_F
	{
		faction="sh_faction_cdf";
		scope=1;
	};
	class sh_faction_det5_unit : B_Soldier_F
	{
		faction="sh_faction_det5";
		scope=1;
	};
	class sh_faction_sasr_unit : B_Soldier_F
	{
		faction="sh_faction_sasr";
		scope=1;
	};
	class sh_faction_marines_unit : B_Soldier_F
	{
		faction="sh_faction_marines";
		scope=1;
	};
	class sh_faction_cdn_unit : B_Soldier_F
	{
		faction="sh_faction_cdn";
		scope=1;
	};
	class sh_cdf_bmp1 : rhs_bmp1_vv
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Armored";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_t80bv : rhs_t80bv
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Armored";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_gaz66_ammo : rhs_gaz66_ammo_vmf
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Support";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_ural_fuel : RHS_Ural_Fuel_VMF_01
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Support";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_gaz66_repair : rhs_gaz66_repair_vdv
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Support";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_gaz66 : rhs_gaz66o_msv
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Car";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_uaz_open : rhs_uaz_open_vdv
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Car";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_uaz : RHS_UAZ_MSV_01
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Car";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdf_ural : rhs_ural_vv_01
	{
		scope=2;
		side=1;
		faction="sh_faction_cdf";
		crew="";
		typicalCargo[]={};
		vehicleClass="Car";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_marines_rg31 : ffaa_et_rg31_samson
	{
		scope=2;
		side=1;
		faction="sh_faction_marines";
		crew="";
		typicalCargo[]={};
		vehicleClass="Car";
		class TransportWeapons
		{
			class _xx_rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=3;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer";
				count=50;
			};
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count=25;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine="rhsusf_100Rnd_556x45_soft_pouch";
				count=10;
			};
			class _xx_rhsusf_200Rnd_556x45_soft_pouch
			{
				magazine="rhsusf_200Rnd_556x45_soft_pouch";
				count=5;
			};
			class _xx_rhs_mag_an_m8hc
			{
				magazine="rhs_mag_an_m8hc";
				count=15;
			};
			class _xx_rhs_mag_m18_purple
			{
				magazine="rhs_mag_m18_purple";
				count=5;
			};
			class _xx_rhs_mag_m18_green
			{
				magazine="rhs_mag_m18_green";
				count=5;
			};
			class _xx_rhs_mag_m18_red
			{
				magazine="rhs_mag_m18_red";
				count=5;
			};
			class _xx_rhs_mag_m18_yellow
			{
				magazine="rhs_mag_m18_yellow";
				count=5;
			};
			class _xx_rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_m136_mag
			{
				magazine="rhs_m136_mag";
				count=3;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_marines_m1a1 : rhsusf_m1a1fep_wd
	{
		scope=2;
		side=1;
		faction="sh_faction_marines";
		crew="";
		typicalCargo[]={};
		vehicleClass="Armored";
		class TransportWeapons
		{
			class _xx_rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=3;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer";
				count=50;
			};
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count=25;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine="rhsusf_100Rnd_556x45_soft_pouch";
				count=10;
			};
			class _xx_rhsusf_200Rnd_556x45_soft_pouch
			{
				magazine="rhsusf_200Rnd_556x45_soft_pouch";
				count=5;
			};
			class _xx_rhs_mag_an_m8hc
			{
				magazine="rhs_mag_an_m8hc";
				count=15;
			};
			class _xx_rhs_mag_m18_purple
			{
				magazine="rhs_mag_m18_purple";
				count=5;
			};
			class _xx_rhs_mag_m18_green
			{
				magazine="rhs_mag_m18_green";
				count=5;
			};
			class _xx_rhs_mag_m18_red
			{
				magazine="rhs_mag_m18_red";
				count=5;
			};
			class _xx_rhs_mag_m18_yellow
			{
				magazine="rhs_mag_m18_yellow";
				count=5;
			};
			class _xx_rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_m136_mag
			{
				magazine="rhs_m136_mag";
				count=3;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdn_mi8 : RHS_Mi8AMTSh_vvs
	{
		scope=2;
		side=1;
		faction="sh_faction_cdn";
		crew="";
		typicalCargo[]={};
		vehicleClass="Air";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdn_mi24 : RHS_Mi24V_vdv
	{
		scope=2;
		side=1;
		faction="sh_faction_cdn";
		crew="";
		typicalCargo[]={};
		vehicleClass="Air";
		class TransportWeapons
		{
			class _xx_rhs_weap_rsp30_white
			{
				weapon="rhs_weap_rsp30_white";
				count=2;
			};
			class _xx_rhs_weap_rsp30_red
			{
				weapon="rhs_weap_rsp30_red";
				count=5;
			};
			class _xx_rhs_weap_rsp30_green
			{
				weapon="rhs_weap_rsp30_green";
				count=5;
			};
			class _xx_rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_rsp30_white
			{
				magazine="rhs_mag_rsp30_white";
				count=2;
			};
			class _xx_rhs_mag_rsp30_red
			{
				magazine="rhs_mag_rsp30_red";
				count=5;
			};
			class _xx_rhs_mag_rsp30_green
			{
				magazine="rhs_mag_rsp30_green";
				count=5;
			};
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=10;
			};
			class _xx_rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=5;
			};
			class _xx_rhs_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_AK";
				count=20;
			};
			class _xx_rhs_30Rnd_545x39_AK_green
			{
				magazine="rhs_30Rnd_545x39_AK_green";
				count=10;
			};
			class _xx_rhs_mag_nspd
			{
				magazine="rhs_mag_nspd";
				count=5;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=5;
			};
			class _xx_rhs_mag_nspn_green
			{
				magazine="rhs_mag_nspn_green";
				count=5;
			};
			class _xx_rhs_mag_nspn_yellow
			{
				magazine="rhs_mag_nspn_yellow";
				count=5;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_rhs_rpg26_mag
			{
				magazine="rhs_rpg26_mag";
				count=5;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
			class _xx_cse_bandage_basic
			{
				name="cse_bandage_basic";
				count=25;
			};
			class _xx_cse_bandageElastic
			{
				name="cse_bandageElastic";
				count=15;
			};
			class _xx_cse_morphine
			{
				name="cse_morphine";
				count=5;
			};
			class _xx_cse_epinephrine
			{
				name="cse_epinephrine";
				count=5;
			};
			class _xx_cse_saline_iv
			{
				name="cse_saline_iv";
				count=5;
			};
			class _xx_cse_saline_iv_500
			{
				name="cse_saline_iv_500";
				count=5;
			};
			class _xx_cse_saline_iv_250
			{
				name="cse_saline_iv_250";
				count=5;
			};
			class _xx_cse_tourniquet
			{
				name="cse_tourniquet";
				count=5;
			};
		};
	};
	class sh_cdn_su25 : RHS_Su25SM_vvsc
	{
		scope=2;
		side=1;
		faction="sh_faction_cdn";
		crew="";
		typicalCargo[]={};
		vehicleClass="Air";
	};
};
