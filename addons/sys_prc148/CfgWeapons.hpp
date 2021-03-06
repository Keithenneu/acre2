class CfgWeapons {
    class ACRE_BaseRadio;
    class CBA_MiscItem_ItemInfo;

    class ACRE_PRC148: ACRE_BaseRadio {
        displayName = "AN/PRC-148";
        useActionTitle = "AN/PRC-148";
        model = QPATHTOF(Data\models\prc148.p3d);
        picture = QPATHTOF(Data\static\prc148_icon.paa);
        descriptionShort = "AN/PRC-148 Radio";
        scopeCurator = 2;
        scope = 2;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
            scope = 0;
        };

        class Library {
            libTextDesc = "AN/PRC-148";
        };
    };
    /*
    class ACRE_PRC148_UHF: ACRE_BaseRadio {
        displayName = "AN/PRC-148 UHF";
        useActionTitle = "AN/PRC-148 UHF";
        model = QPATHTOF(Data\Models\prc148.p3d);
        picture = QPATHTOF(Data\148_icon.paa);

        descriptionShort = "AN/PRC-148 UHF Radio";
        class Library {
            libTextDesc = "ACRE AN/PRC-148 UHF";
        };
    };
    */
    RADIO_ID_LIST(ACRE_PRC148)
    // RADIO_ID_LIST(ACRE_PRC148_UHF)

};
