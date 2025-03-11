class CfgPatches
{
    class ld3k_gm6_lynx_127x108_compat_ace3
    {
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "A3_Weapons_F_Acc"
        };
        requiredversion=0.1;
        units[]=
        {
            "Weapon_ld3k_GM6_Lynx_127x108",
            "Weapon_ld3k_GM6_Lynx_127x108_camo",
            "Weapon_ld3k_GM6_Lynx_127x108_ghex",
            "Item_ld3k_gm6_127x108_optic_LRPS_Night_Vision",
            "Item_ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F",
            "Item_ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F"
        };
        weapons[]=
        {
            "ld3k_GM6_Lynx_127x108",
            "ld3k_GM6_Lynx_127x108_camo",
            "ld3k_GM6_Lynx_127x108_ghex",
            "ld3k_gm6_127x108_optic_LRPS_Night_Vision",
            "ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F",
            "ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F"
        };
    };
};
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
        optic_Yorris=0;
        ld3k_gm6_127x108_optic_LRPS_Night_Vision=1;
        ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F=1;
        ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F=1;
    };
};
class CowsSlot: SlotInfo
{
    compatibleItems[]=
    {
        "ld3k_gm6_127x108_optic_LRPS_Night_Vision",
        "ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F",
        "ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F",
        "optic_Nightstalker",
        "optic_tws",
        "optic_tws_mg",
        "optic_NVS",
        "optic_DMS",
        "optic_LRPS",
        "optic_ams",
        "optic_AMS_snd",
        "optic_AMS_khk",
        "optic_KHS_blk",
        "optic_KHS_tan",
        "optic_KHS_hex",
        "optic_KHS_old",
        "optic_SOS",
        "optic_MRCO",
        "optic_Arco",
        "optic_aco",
        "optic_ACO_grn",
        "optic_aco_smg",
        "optic_ACO_grn_smg",
        "optic_hamr",
        "optic_Holosight",
        "optic_Holosight_smg",
        "optic_Hamr_khk_F",
        "optic_SOS_khk_F",
        "optic_Arco_ghex_F",
        "optic_Arco_blk_F",
        "optic_DMS_ghex_F",
        "optic_ERCO_blk_F",
        "optic_ERCO_khk_F",
        "optic_ERCO_snd_F",
        "optic_LRPS_ghex_F",
        "optic_LRPS_tna_F",
        "optic_Holosight_blk_F",
        "optic_Holosight_khk_F",
        "optic_Holosight_smg_blk_F",
        "optic_Holosight_smg_khk_F",
        "optic_Arco_AK_blk_F",
        "optic_Arco_AK_lush_F",
        "optic_Arco_AK_arid_F",
        "optic_DMS_weathered_F",
        "optic_DMS_weathered_Kir_F",
        "optic_Arco_lush_F",
        "optic_Arco_arid_F",
        "optic_Holosight_lush_F",
        "optic_Holosight_arid_F"
    };
};
class CowsSlot_Rail: CowsSlot
{
    class compatibleItems
    {
        ld3k_gm6_127x108_optic_LRPS_Night_Vision=1;
        ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F=1;
        ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F=1;
        optic_Nightstalker=1;
        optic_tws=1;
        optic_tws_mg=1;
        optic_NVS=1;
        optic_DMS=1;
        optic_LRPS=1;
        optic_ams=1;
        optic_AMS_snd=1;
        optic_AMS_khk=1;
        optic_KHS_blk=1;
        optic_KHS_tan=1;
        optic_KHS_hex=1;
        optic_KHS_old=1;
        optic_SOS=1;
        optic_MRCO=1;
        optic_Arco=1;
        optic_aco=1;
        optic_ACO_grn=1;
        optic_aco_smg=1;
        optic_ACO_grn_smg=1;
        optic_hamr=1;
        optic_Holosight=1;
        optic_Holosight_smg=1;
        optic_Hamr_khk_F=1;
        optic_SOS_khk_F=1;
        optic_Arco_ghex_F=1;
        optic_Arco_blk_F=1;
        optic_DMS_ghex_F=1;
        optic_ERCO_blk_F=1;
        optic_ERCO_khk_F=1;
        optic_ERCO_snd_F=1;
        optic_LRPS_ghex_F=1;
        optic_LRPS_tna_F=1;
        optic_Holosight_blk_F=1;
        optic_Holosight_khk_F=1;
        optic_Holosight_smg_blk_F=1;
        optic_Holosight_smg_khk_F=1;
        optic_DMS_weathered_F=1;
        optic_DMS_weathered_Kir_F=1;
        optic_Arco_lush_F=1;
        optic_Arco_arid_F=1;
        optic_Arco_AK_blk_F=1;
        optic_Arco_AK_lush_F=1;
        optic_Arco_AK_arid_F=1;
        optic_Holosight_lush_F=1;
        optic_Holosight_arid_F=1;
    };
};
class CfgAmmo
{
    class BulletBase;
    /*class B_127x108_Ball: BulletBase // official BI tool All-in-one Config Arma3 2.19.152694 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        hit=35;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=5;
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        visibleFireTime=3;
        cost=5;
        airLock=1;
        caliber=2.8;
        typicalSpeed=820;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerScale=1.5;
        tracerStartTime=0.075;
        tracerEndTime=1;
        airFriction=-0.00086;
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class B_127x108_APDS: B_127x108_Ball
    {
        hit=60;
        indirectHit=0;
        indirectHitRange=0;
        caliber=3.6;
        typicalSpeed=1060;
        airFriction=-0.00036;
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };*/
    class ld3k_B_127x108_Ball_7N34: BulletBase // 12.7mm 7N34 sniper cartridge https://roe.ru/production/sukhoputnye_voyska/small-arms-sv/boepripasy_k_strelkovomu_oruzhiyu/12_7/7n34/?theme=theme-green
    {
        ACE_caliber=13.01; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/12-7-x-108-170419-en.pdf
        ACE_bulletLength=66;
        ACE_bulletMass=59.2;
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.468}; // Strelok Pro (770m/s)
        // ACE_ballisticCoefficients[]={0.77}; // MV 785m/s https://guns.allzip.org/topic/51/1155473.html#p33
        // ACE_dragModel=1;
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={720,752,768,785,793}; // (770, 785m/s) 785m/s barrel length 1000mm 6С8, 6С8-1 https://web.archive.org/web/20140627215922/http://zid.ru/products/defence/44/detail/173
        ACE_barrelLengths[]={580,750,860,1000,1100}; // 748m/s barrel length 730mm
        // barrel length 580mm AMR Mod II, Military Scientific-Technical Center "Delta" (Georgia) https://delta.gov.ge/Armament
        // barrel length 750mm Snipex M75, XADO (Ukraine) https://en.wikipedia.org/wiki/Snipex_M
        // barrel length 860mm M12M, Zastava Arms (Serbia) https://www.zastava-arms.rs/upload/vojni_katalog_2024_s.pdf#page=33
        // barrel length 1000mm 6С8/6С8-1, Russia https://web.archive.org/web/20140627215922/http://zid.ru/products/defence/44/detail/173 https://roe.ru/production/sukhoputnye_voyska/small-arms-sv/sniper-rifles/6s8-6s8-1/?theme=theme-green
        // barrel length 1000mm ОСВ-96, Russia https://ru.wikipedia.org/wiki/%D0%9E%D0%A1%D0%92-96
        // barrel length 1000mm Snipex M100, XADO (Ukraine) https://en.wikipedia.org/wiki/Snipex_M
        // barrel length 1100mm AMR Mod I, Military Scientific-Technical Center "Delta" (Georgia) https://delta.gov.ge/Armament
        ace_vehicle_damage_incendiary=0.3; // ACE3
        hit=35;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=5;
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        visibleFireTime=3;
        cost=5;
        airLock=1;
        caliber=2.8;
        typicalSpeed=793;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerScale=1.5;
        tracerStartTime=0.075;
        tracerEndTime=1;
        airFriction=-0.00045803; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    /*class ld3k_B_127x108_Ball_FMJ: ld3k_B_127x108_Ball_7N34 // Hunting cartridge 12.7х108mm http://www.tulammo.ru/production/vintovochnye-patrony/12-7x108-mm-fmj-680-gr-44-06-g-s-bimetallicheskoy-obolochkoy-i-latunnoy-gilzoy/
    {
        ACE_caliber=13.01; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/12-7-x-108-170419-en.pdf
        ACE_bulletLength=59.3; // Strelok Pro. TulAmmo 107.4, 108mm, 10cm ???
        ACE_bulletMass=44.1; // 680gr
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.584}; // ballistic app EBC V2 estimated muzzle velocity 862m/s from ballistic data http://www.tulammo.ru/en/production/vintovochnye-patrony/patron-12-7kh108/
        // ACE_ballisticCoefficients[]={0.728}; // G1 BC V25 860m/s http://www.tulammo.ru/en/production/vintovochnye-patrony/patron-12-7kh108/
        // ACE_ballisticCoefficients[]={0.732}; // G1 BC MV 758m/s https://ulnammo.ru/pso/12_7x108/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={842,880,900,919,929}; // 919m/s (916, 923m/s) barrel length 1000mm https://www.youtube.com/watch?v=f5oqCPAFRf4
        ACE_barrelLengths[]={580,750,860,1000,1100}; // 876m/s barrel length 730mm
    };*/
    class ld3k_B_127x108_APDS: ld3k_B_127x108_Ball_7N34 // ACE3 https://github.com/acemod/ACE3/pull/9191
    {
        ACE_caliber=7.13; // Chinese 12.7x108mm APDS (Armour Piercing Discarding Sabot) https://i.imgur.com/8mlXD0e.png
        ACE_bulletLength=34.08; // Chinese 12.7x108mm APDS (Armour Piercing Discarding Sabot) https://i.imgur.com/8mlXD0e.png
        ACE_bulletMass=27.95; // Average value from "Norinco 2017 Weapon Systems", Type 54 12.7x108 mm Tungsten APDS https://i-com.cdn.gaijin.net/monthly_2023_03/image.png.5e6ae14e7b69a610c716872abea1061e.png
        ACE_ballisticCoefficients[]={1.052}; // Compromise based on bullet drops, times of flight and remaining velocities according to vanilla B_127x108_APDS airFriction -0.00036
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={972,1015,1038,1060,1071}; // 1010m/s barrel length 730mm
        ace_vehicle_damage_incendiary=0.1; // ACE3
        hit=60;
        indirectHit=0;
        indirectHitRange=0;
        caliber=3.6;
        typicalSpeed=1071;
        airFriction=-0.00036963; // airFrictionAnalysis.txt in docs folder
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_127x108_Ball_B32_API: ld3k_B_127x108_APDS // https://en.wikipedia.org/wiki/12.7_%C3%97_108_mm https://bigenc.ru/c/12-7-mm-krupnokalibernye-patrony-12-7x108-d40c5a https://web.archive.org/web/20140108183108/http://gunsru.ru/rg_patron_12_7x107_ru.html https://gunrf.ru/rg_patron_12_7x107_ru.html
    {
        ACE_caliber=13.01; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/12-7-x-108-170419-en.pdf
        ACE_bulletLength=63.05; // 62.6, 63.5mm
        ACE_bulletMass=48.3;
        ACE_ballisticCoefficients[]={0.737}; // ballistic app EBC V2, 820m/s barrel length 1000mm ОСВ-96 from ballistic data https://img.allzip.org/g/51/orig/7226956.jpg https://libking.ru/books/ref-/reference/1106768-9-konstruktorskoe-priborostroeniya-12-7-mm-snajperskaya-vintovka-osv-96-rukovodstvo-po-ekspluatacii.html
        ACE_muzzleVelocities[]={752,785,803,820,829}; // 820m/s barrel length 1000mm
        // ACE_barrelLengths[]={580,750,860,1000,1100}; // 781m/s barrel length 730mm
        ace_vehicle_damage_incendiary=1;
        indirectHit=8; // B_20mm_AP
        indirectHitRange=0.2; // B_20mm_AP
        typicalSpeed=829;
        airFriction=-0.00056502; // airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater";
        class HitEffects // B_30mm_APFSDS
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class ld3k_B_127x108_Ball_BZT44M_API_Tracer_Green: ld3k_B_127x108_Ball_B32_API // https://bigenc.ru/c/12-7-mm-krupnokalibernye-patrony-12-7x108-d40c5a https://web.archive.org/web/20140108183108/http://gunsru.ru/rg_patron_12_7x107_ru.html https://gunrf.ru/rg_patron_12_7x107_ru.html
    {
        ACE_bulletLength=64.3; // 63.8, 64.8mm
        ACE_bulletMass=43.9;
        tracerStartTime=0.15; // ToF 120m 0.15s 820m/s ICAO (Strelok Pro), (visible 50, 120m) https://bigenc.ru/c/12-7-mm-krupnokalibernye-patrony-12-7x108-d40c5a
        tracerEndTime=2.9; // https://roe.ru/production/sukhoputnye_voyska/small-arms-sv/boepripasy_k_strelkovomu_oruzhiyu/12_7/57-bzt-542m/?theme=theme-green
    };
    class ld3k_B_127x108_Ball_MDZ_APEI: ld3k_B_127x108_APDS // https://bigenc.ru/c/12-7-mm-krupnokalibernye-patrony-12-7x108-d40c5a https://web.archive.org/web/20140108183108/http://gunsru.ru/rg_patron_12_7x107_ru.html https://gunrf.ru/rg_patron_12_7x107_ru.html
    {
        ACE_caliber=13.01; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/12-7-x-108-170419-en.pdf
        ACE_bulletLength=63; // https://nastavleniya.ru/PSO/pso13.html#j
        ACE_bulletMass=43; // 663gr Strelok Pro
        ACE_ballisticCoefficients[]={0.728}; // Strelok Pro (800m/s)
        ACE_muzzleVelocities[]={772,806,824,842,851}; // (828, 869m/s) 848m/s barrel length 1070mm DShKM https://nastavleniya.ru/PSO/pso13.html#j
        // ACE_barrelLengths[]={580,750,860,1000,1100}; // 802m/s barrel length 730mm
        ace_vehicle_damage_incendiary=1;
        indirectHit=6; // B_20mm
        indirectHitRange=1.6; // B_20mm
        explosive=0.4; // B_20mm
        explosionSoundEffect="DefaultExplosion"; // B_20mm
        CraterEffects="ExploAmmoCrater"; // B_20mm
        explosionEffects="ExploAmmoExplosion"; // B_20mm
        typicalSpeed=851;
        airFriction=-0.00056788; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode // B_20mm
        {
            power=4;
            duration=0.8;
            frequency=20;
            distance=43.7771;
        };
        class CamShakeHit // B_20mm
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
        soundHit1[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
            1.7782794,
            1,
            1300
        };
        soundHit2[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
            1.7782794,
            1,
            1300
        };
        soundHit3[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
            1.7782794,
            1,
            1300
        };
        soundHit4[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
            1.7782794,
            1,
            1300
        };
        multiSoundHit[]= // B_20mm
        {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        SoundSetExplosion[]= // B_20mm
        {
            "Shell19mm25mm_Exp_SoundSet"
        };
    };
};
class CfgMagazines
{
    class CA_Magazine;
    /*class 5Rnd_127x108_Mag: CA_Magazine // official BI tool All-in-one Config Arma3 2.19.152694 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CfgMagazines_5Rnd_127x108_Mag0";
        picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
        count=5;
        ammo="B_127x108_Ball";
        initSpeed=820;
        descriptionShort="$STR_A3_CfgMagazines_5Rnd_127x108_Mag1";
        mass=16;
    };*/
    class ld3k_5Rnd_127x108_7N34_Mag: CA_Magazine
    {
        author="Laid3acK";
        scope=2;
        displayName="12.7 mm 5Rnd 7N34 Mag";
        picture="\ld3k_gm6_lynx_127x108_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x108_7n34_ca.paa";
        count=5;
        ammo="ld3k_B_127x108_Ball_7N34";
        initSpeed=748;
        descriptionShort="Caliber: 12.7x108 mm Russian<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=16.9; // unknown GM6 magazine weight, cartridge weight 145g x5: 725g
    };
    class ld3k_5Rnd_127x108_APDS_Mag: ld3k_5Rnd_127x108_7N34_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 5Rnd APDS Mag";
        picture="\ld3k_gm6_lynx_127x108_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x108_apds_ca.paa";
        ammo="ld3k_B_127x108_APDS";
        initSpeed=1010;
        descriptionShort="Caliber: 12.7x108 mm APDS<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=12.9; // cartridge weight 110g x5: 550g
        displayNameShort="APDS";
    };
    class ld3k_5Rnd_127x108_B32_API_Mag: ld3k_5Rnd_127x108_7N34_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 5Rnd B32 API Mag";
        picture="\ld3k_gm6_lynx_127x108_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x108_b32_ca.paa";
        ammo="ld3k_B_127x108_Ball_B32_API";
        initSpeed=781;
        descriptionShort="Caliber: 12.7x108 mm API<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=16; // cartridge weight 137g x5: 685g
        displaynameshort="API";
    };
    class ld3k_5Rnd_127x108_BZT44M_API_Mag_Tracer_Green: ld3k_5Rnd_127x108_B32_API_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 5Rnd BZT44M API Tracer (Green) Mag";
        picture="\ld3k_gm6_lynx_127x108_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x108_bzt44m_ca.paa";
        ammo="ld3k_B_127x108_Ball_BZT44M_API_Tracer_Green";
        tracersEvery=1;
        descriptionShort="Caliber: 12.7x108 mm API-T<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=15.4; // cartridge weight 132g x5: 660g
        displaynameshort="API-T";
    };
    class ld3k_5Rnd_127x108_MDZ_APEI_Mag: ld3k_5Rnd_127x108_7N34_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 5Rnd MDZ APEI Mag";
        picture="\ld3k_gm6_lynx_127x108_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x108_mdz_ca.paa";
        ammo="ld3k_B_127x108_Ball_MDZ_APEI";
        initSpeed=802;
        descriptionShort="Caliber: 12.7x108 mm APEI<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=15.3; // cartridge weight 131g x5: 655g
        displaynameshort="APEI";
    };
};
class CfgMagazineWells
{
    class GM6_127x108 // official BI tool All-in-one Config Arma3 2.19.152694 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        BI_Magazines[]=
        {
            "5Rnd_127x108_Mag",
            "5Rnd_127x108_APDS_Mag"
        };
        ld3k_Magazines[]= // Weapon initSpeed -1 with GM6 ACE_barrelLength 730mm (28.74"), 748, 1010, 781, 802m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to GM6 Rnd_127x108 magazines initSpeed
        {
            "ld3k_5Rnd_127x108_7N34_Mag",
            "ld3k_5Rnd_127x108_APDS_Mag",
            "ld3k_5Rnd_127x108_B32_API_Mag",
            "ld3k_5Rnd_127x108_BZT44M_API_Mag_Tracer_Green",
            "ld3k_5Rnd_127x108_MDZ_APEI_Mag"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class GM6_base_F: Rifle_Long_Base_F
    {
        magazineWell[]= // GM6_base_F magazineWell[]={};
        {
            "GM6_127x108"
        };
        class Single: Mode_SemiAuto
        {
        };
    };
    class srifle_GM6_F: GM6_base_F
    {
    };
    class ld3k_GM6_Lynx_127x108: srifle_GM6_F
    {
        ACE_RailHeightAboveBore=4.75572;
        ACE_IronSightBaseAngle=0.001146;
        ACE_barrelLength=730; // 28.74" https://gm6lynx.com/
        ACE_barrelTwist=380; // CIP twist 12.7x108mm https://bobp.cip-bobp.org/uploads/tdcc/tab-i/12-7-x-108-170419-en.pdf
        ace_overheating_closedBolt=1;
        author="Laid3acK";
        _generalMacro="ld3k_GM6_Lynx_127x108";
        baseWeapon="ld3k_GM6_Lynx_127x108";
        displayName="GM6 Lynx 12.7 mm";
        descriptionShort="Sniper Rifle<br />Caliber: 12.7x108 mm Russian";
        maxZeroing=3900; // distance 12.7x108mm APDS Mach 0.8 (272m/s), GM6_base_F 2200
        initSpeed=-1; // 748, 1010, 781, 802m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), GM6_base_F 0
        magazines[]=
        {
            "ld3k_5Rnd_127x108_7N34_Mag",
            "ld3k_5Rnd_127x108_APDS_Mag",
            "ld3k_5Rnd_127x108_B32_API_Mag",
            "ld3k_5Rnd_127x108_BZT44M_API_Mag_Tracer_Green",
            "ld3k_5Rnd_127x108_MDZ_APEI_Mag"
        };
        magazineWell[]={};
        class Single: Single
        {
            dispersion=0.00015; // 0.92 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, GM6_base_F 0.00035 (1.2 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=231.5; // https://gm6lynx.com, srifle_GM6_F 480
        };
    };
    class ld3k_GM6_Lynx_127x108_camo: ld3k_GM6_Lynx_127x108
    {
        author="Laid3acK";
        _generalMacro="ld3k_GM6_Lynx_127x108_camo";
        baseWeapon="ld3k_GM6_Lynx_127x108_camo";
        scope=2;
        displayName="GM6 Lynx 12.7 mm (Camo)";
        picture="\A3\Weapons_F_Bootcamp\LongRangeRifles\GM6_camo\data\UI\gear_gm6_X_CA.paa";
        hiddenSelections[]=
        {
            "camo",
            "mat1",
            "mat2"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat.rvmat",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"
        };
    };
    class ld3k_GM6_Lynx_127x108_ghex: ld3k_GM6_Lynx_127x108
    {
        author="Laid3acK";
        _generalMacro="ld3k_GM6_Lynx_127x108_ghex";
        baseWeapon="ld3k_GM6_Lynx_127x108_ghex";
        scope=2;
        displayName="GM6 Lynx 12.7 mm (Green Hex)";
        picture="\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\UI\icon_srifle_GM6_ghex_F_X_CA.paa";
        hiddenSelections[]=
        {
            "mat1",
            "mat2"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa",
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F.rvmat",
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_plastic.rvmat"
        };
    };
    class optic_LRPS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                };
            };
        };
    };
    class ld3k_gm6_127x108_optic_LRPS_Night_Vision: optic_LRPS // configured as Nightforce NXS 5.5-22x56
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=4.2098;
        ACE_ScopeAdjust_Vertical[]={0,29}; // 100 MOA, NXS 5.5-22x56 2020 data https://www.nightforceoptics.com/content/files/downloads/0120_NF_NXS_Family_Sales_Sheet.pdf
        ACE_ScopeAdjust_Horizontal[]={-5.8,5.8}; // 40 MOA, NXS 5.5-22x56 2020 data https://www.nightforceoptics.com/content/files/downloads/0120_NF_NXS_Family_Sales_Sheet.pdf
        ACE_ScopeAdjust_VerticalIncrement=0.1; // should be 1/4 MOA https://www.nightforceoptics.com/riflescopes/nxs/nxs-55-22x56
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // should be 1/4 MOA
        author="Laid3acK";
        _generalMacro="ld3k_gm6_127x108_optic_LRPS_Night_Vision";
        displayName="LRPS Night Vision";
        class ItemInfo: ItemInfo
        {
            mass=20; // Nightforce NXS 5.5-22x56 907g https://www.nightforceoptics.com/riflescopes/nxs/nxs-55-22x56, optic_LRPS 16
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    opticsZoomMin=0.01; // optic_LRPS
                    opticsZoomMax=0.042; // optic_LRPS
                    opticsZoomInit=0.042; // optic_LRPS
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700}; // max distance at max elevation 29 mRad 12.7x108mm APDS (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2700;
                    discretefov[]={0.042,0.01}; // optic_LRPS
                    modelOptics[]=
                    {
                        "\ld3k_gm6_lynx_127x108_compat_ace3\acc\ld3k_reticle_lrps_F",
                        "\ld3k_gm6_lynx_127x108_compat_ace3\acc\ld3k_reticle_lrps_z_F"
                    };
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F: ld3k_gm6_127x108_optic_LRPS_Night_Vision
    {
        author="Laid3acK";
        _generalMacro="ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F";
        displayName="LRPS Night Vision (Tropic)";
        model="\A3\Weapons_F\Acc\acco_sniper02_tna_F.p3d";
        picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_tna_F_ca.paa";
    };
    class ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F: ld3k_gm6_127x108_optic_LRPS_Night_Vision
    {
        author="Laid3acK";
        _generalMacro="ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F";
        displayName="LRPS Night Vision (Green Hex)";
        model="\A3\Weapons_F\Acc\acco_sniper02_ghex_F.p3d";
        picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_ghex_F_ca.paa";
    };
};
class CfgVehicles
{
    class item_Base_F;
    class Weapon_Base_F;
    class Weapon_ld3k_GM6_Lynx_127x108: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="GM6 Lynx 12.7 mm";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_GM6_Lynx_127x108
            {
                weapon="ld3k_GM6_Lynx_127x108";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_5Rnd_127x108_7N34_Mag
            {
                magazine="ld3k_5Rnd_127x108_7N34_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_GM6_Lynx_127x108_camo: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="GM6 Lynx 12.7 mm (Camo)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_GM6_Lynx_127x108_camo
            {
                weapon="ld3k_GM6_Lynx_127x108_camo";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_5Rnd_127x108_7N34_Mag
            {
                magazine="ld3k_5Rnd_127x108_7N34_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_GM6_Lynx_127x108_ghex: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="GM6 Lynx 12.7 mm (Green Hex)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_GM6_Lynx_127x108_ghex
            {
                weapon="ld3k_GM6_Lynx_127x108_ghex";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_5Rnd_127x108_7N34_Mag
            {
                magazine="ld3k_5Rnd_127x108_7N34_Mag";
                count=1;
            };
        };
    };
    class Item_ld3k_gm6_127x108_optic_LRPS_Night_Vision: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_gm6_127x108_optic_LRPS_Night_Vision
            {
                name="ld3k_gm6_127x108_optic_LRPS_Night_Vision";
                count=1;
            };
        };
    };
    class Item_ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision (Tropic)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F
            {
                name="ld3k_gm6_127x108_optic_LRPS_Night_Vision_tna_F";
                count=1;
            };
        };
    };
    class Item_ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision (Green Hex)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F
            {
                name="ld3k_gm6_127x108_optic_LRPS_Night_Vision_ghex_F";
                count=1;
            };
        };
    };
};
class ACE_ATragMX_Presets
{
    class ld3k_B_127x108_Ball_7N34
    {
        preset[]=
        {
            "GM6 12.7 7N34",
            748,
            100,
            0.103133,
            -0.00045803,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            59.20,
            13.29,
            38.00,
            0.929,
            1,
            "ICAO",

            {
                {-15,730},
                {0,734},
                {10,743},
                {15,748},
                {25,763},
                {30,772},
                {35,782}
            },

            {
                {100,0.929},
                {1255,0.925},
                {1406,0.920},
                {1570,0.913},
                {1930,0.894},
                {2226,0.884},
                {2573,0.879}
            }
        };
    };
    class ld3k_B_127x108_APDS
    {
        preset[]=
        {
            "GM6 12.7 APDS",
            1010,
            100,
            0.0795688,
            -0.00036963,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            27.95,
            11.07,
            38.00,
            1.052,
            1,
            "ICAO",

            {
                {-15,991},
                {0,996},
                {10,1004},
                {15,1010},
                {25,1025},
                {30,1033},
                {35,1043}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_127x108_Ball_B32_API
    {
        preset[]=
        {
            "GM6 12.7 API",
            781,
            100,
            0.0991717,
            -0.00056502,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            49.30,
            12.57,
            38.00,
            0.737,
            1,
            "ICAO",

            {
                {-15,762},
                {0,767},
                {10,775},
                {15,781},
                {25,796},
                {30,805},
                {35,814}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_127x108_Ball_MDZ_APEI
    {
        preset[]=
        {
            "GM6 12.7 APEI",
            802,
            100,
            0.0967153,
            -0.00056788,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            43.00,
            11.98,
            38.00,
            0.728,
            1,
            "ICAO",

            {
                {-15,783},
                {0,788},
                {10,796},
                {15,802},
                {25,817},
                {30,825},
                {35,835}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};