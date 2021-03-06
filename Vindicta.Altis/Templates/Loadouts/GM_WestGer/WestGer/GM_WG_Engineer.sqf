removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

//	==== Head Gear ====
this addHeadgear "gm_ge_headgear_m62_net";

//	==== Uniform ====
this forceAddUniform "gm_ge_army_uniform_soldier_80_ols";
this addItemToUniform "FirstAidKit";
this addItemToUniform "gm_ge_facewear_m65";
this addItemToUniform "gm_ge_headgear_beret_grn_infantry";

//	==== Vest ====
this addVest "gm_ge_army_vest_80_rifleman";
for "_i" from 1 to 6 do {this addItemToVest "gm_20Rnd_762x51mm_AP_DM151_g3_blk";};
for "_i" from 1 to 2 do {this addItemToVest "gm_handgrenade_frag_dm51a1";};
for "_i" from 1 to 2 do {this addItemToVest "gm_smokeshell_wht_dm25";};

//	==== Backpack ====
this addBackpack "gm_ge_army_backpack_80_oli";
for "_i" from 1 to 2 do {this addItemToBackpack "Toolkit";};
this addItemToBackpack "ACE_EntrenchingTool";

//	==== Weapons ====
this addWeapon "gm_g3a3_blk";
this addPrimaryWeaponItem "gm_20Rnd_762x51mm_AP_DM151_g3_blk";

//	==== Misc Items ====
this linkItem "ItemMap";
this linkItem "gm_ge_army_conat2";
this linkItem "gm_watch_kosei_80";