#ifndef BASE_CONTROLS_H
#define BASE_CONTROLS_H

class RscBase {
    idc = -1;
    access = 0;
    type = 0;
    style = ST_LEFT;

    tooltip = "";
    tooltipMaxWidth = TOOLTIP_MAX_W;
    tooltipColorShade[] = BUTTON_BG_COLOR;
    tooltipColorText[] = BUTTON_TEXT_COLOR;
    tooltipColorBox[] = {0, 0, 0, 0};

    colorDisabled[] = BUTTON_BG_COLOR;
    colorBackground[] = BUTTON_BG_COLOR;
    colorText[] = BUTTON_TEXT_COLOR;

    x = 0;
    y = 0;
    h = 0;
    w = 0;

    text = "";
    font = FONT_TYPE;
    sizeEx = FONT_SIZE;
    fixedWidth = 0;
    shadow = 0;
    lineSpacing = 0;
};

class RscButton : RscBase {
    type = CT_BUTTON;
    style = ST_CENTER;

    colorText[] = BUTTON_TEXT_COLOR;
    colorDisabled[] = NO_COLOR;
    colorBackground[] = BUTTON_BG_COLOR;
    colorBackgroundDisabled[] = NO_COLOR;
    colorBackgroundActive[] = BUTTON_ACTIVE_COLOR;
    colorFocused[] = BUTTON_BG_COLOR;
    colorShadow[] = NO_COLOR;
    colorBorder[] = NO_COLOR;

    soundEnter[] = {"",0.1,1};
    soundPush[] = {"",0.1,1};
    soundClick[] = {"",0.1,1};
    soundEscape[] = {"",0.1,1};

    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0.001;
    offsetPressedY = 0.001;
    borderSize = 0;
};

class RscEditor : RscBase {
    type = CT_EDIT;
    style = ST_SINGLE;

    colorDisabled[] = NO_COLOR;
    colorBackground[] = NO_COLOR;
    colorSelection[] = BUTTON_ACTIVE_COLOR;

    autocomplete = "scripting";
};

class RscReadOnlyEditor : RscEditor {
    style = ST_NO_RECT;

    colorBackground[] = BUTTON_BG_COLOR;

    canModify = 0;
};

class RscSliderBase : RscBase {
    type = 43;
    style = 1024;
    w = 0;
    h = 0;
    color[] = {1, 1, 1, 0.8};
    colorActive[] = {1, 1, 1, 1};
    arrowEmpty = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowEmpty_ca.paa";
    arrowFull = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowFull_ca.paa";
    border = "\a3\3DEN\Data\Controls\CtrlXSlider\border_ca.paa";
    thumb = "\a3\3DEN\Data\Controls\CtrlXSlider\thumb_ca.paa";
};

class RscCombo : RscBase {
    type = 4;
    style = 0;

    w = 0;
    h = 0;

    wholeHeight = DIALOG_H * 0.75;
    maxHistoryDelay = 1;

    colorBackground[] = {0.05, 0.05, 0.05, 1};
    colorSelectBackground[] = BUTTON_ACTIVE_COLOR;

    colorText[] = BUTTON_TEXT_COLOR;
    colorDisabled[] = BUTTON_TEXT_COLOR;
    colorSelect[] = BUTTON_TEXT_COLOR;

    colorTextRight[] = {1, 1, 1, 1};
    colorSelectRight[] = {1, 1, 1, 0.25};
    colorSelect2Right[] = {1, 1, 1, 1};

    colorPicture[] = {1, 1, 1, 1};
    colorPictureSelected[] = {1, 1, 1, 1};
    colorPictureDisabled[] = {1, 1, 1, 0.25};

    colorPictureRight[] = {1, 1, 1, 1};
    colorPictureRightSelected[] = {1, 1, 1, 1};
    colorPictureRightDisabled[] = {1, 1, 1, 0.25};

    arrowEmpty = "\a3\3DEN\Data\Controls\ctrlCombo\arrowEmpty_ca.paa";
    arrowFull = "\a3\3DEN\Data\Controls\ctrlCombo\arrowFull_ca.paa";

    soundEnter[] = {"",0.1,1};
    soundPush[] = {"",0.1,1};
    soundClick[] = {"",0.1,1};
    soundEscape[] = {"",0.1,1};
    soundSelect[] = {"",0.1,1};
    soundExpand[] = {"",0.1,1};
    soundCollapse[] = {"",0.1,1};

    class ComboScrollBar {
        width = 0;
        height = 0;
        scrollSpeed = 0.01;

        arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
        arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
        border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
        thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";

        color[] = {1, 1, 1, 1};
    };
};

class RscMapControl {
    moveOnEdges = 1;
    widthRailWay = 1;

    x = 0;
    y = 0;
    w = 0;
    h = 0;

    type = CT_MAP; // Use 100 to hide markers
    style = 48;
    shadow = 0;

    ptsPerSquareSea = 5;
    ptsPerSquareTxt = 3;
    ptsPerSquareCLn = 10;
    ptsPerSquareExp = 10;
    ptsPerSquareCost = 10;
    ptsPerSquareFor = 9;
    ptsPerSquareForEdge = 9;
    ptsPerSquareRoad = 6;
    ptsPerSquareObj = 9;
    showCountourInterval = 0;
    scaleMin = 0.001;
    scaleMax = 1.0;
    scaleDefault = 0.16;
    maxSatelliteAlpha = 0.85;
    alphaFadeStartScale = 0.35;
    alphaFadeEndScale = 0.4;
    colorBackground[] = {0.969, 0.957, 0.949, 1.0};
    colorSea[] = {0.467, 0.631, 0.851, 0.5};
    colorForest[] = {0.624, 0.78, 0.388, 0.5};
    colorForestBorder[] = {0.0, 0.0, 0.0, 0.0};
    colorRocks[] = {0.0, 0.0, 0.0, 0.3};
    colorRocksBorder[] = {0.0, 0.0, 0.0, 0.0};
    colorLevels[] = {0.286, 0.177, 0.094, 0.5};
    colorMainCountlines[] = {0.572, 0.354, 0.188, 0.5};
    colorCountlines[] = {0.572, 0.354, 0.188, 0.25};
    colorMainCountlinesWater[] = {0.491, 0.577, 0.702, 0.6};
    colorCountlinesWater[] = {0.491, 0.577, 0.702, 0.3};
    colorPowerLines[] = {0.1, 0.1, 0.1, 1.0};
    colorRailWay[] = {0.8, 0.2, 0.0, 1.0};
    colorNames[] = {0.1, 0.1, 0.1, 0.9};
    colorInactive[] = {1.0, 1.0, 1.0, 0.5};
    colorOutside[] = {0.0, 0.0, 0.0, 1.0};
    colorTracks[] = {0.84, 0.76, 0.65, 0.15};
    colorTracksFill[] = {0.84, 0.76, 0.65, 1.0};
    colorRoads[] = {0.7, 0.7, 0.7, 1.0};
    colorRoadsFill[] = {1.0, 1.0, 1.0, 1.0};
    colorMainRoads[] = {0.9, 0.5, 0.3, 1.0};
    colorMainRoadsFill[] = {1.0, 0.6, 0.4, 1.0};
    colorGrid[] = {0.1, 0.1, 0.1, 0.6};
    colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
    colorText[] = {1, 1, 1, 0.85};
    font = "RobotoCondensed";
    sizeEx = 0.0270000;
    stickX[] = {0.20, {"Gamma", 1.00, 1.50}};
    stickY[] = {0.20, {"Gamma", 1.00, 1.50}};
    onMouseButtonClick = "";
    onMouseButtonDblClick = "";

    fontLabel = "RobotoCondensed";
    sizeExLabel = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontGrid = "TahomaB";
    sizeExGrid = 0.02;
    fontUnits = "TahomaB";
    sizeExUnits = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontNames = "RobotoCondensed";
    sizeExNames = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
    fontInfo = "RobotoCondensed";
    sizeExInfo = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
    fontLevel = "TahomaB";
    sizeExLevel = 0.02;
    text = "#(argb,8,8,3)color(1,1,1,1)";
    class ActiveMarker {
        color[] = {0.30, 0.10, 0.90, 1.00};
        size = 50;
    };
    class Legend {
        x = "SafeZoneX + (((safezoneW / safezoneH) min 1.2) / 40)";
        y = "SafeZoneY + safezoneH - 4.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
        h = "3.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        font = "RobotoCondensed";
        sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        colorBackground[] = {1, 1, 1, 0.5};
        color[] = {0, 0, 0, 1};
    };
    class Task {
        icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
        iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
        iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
        iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
        iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
        color[] = {"(profileNamespace getVariable ['IGUI_TEXT_RGB_R',0])", "(profileNamespace getVariable ['IGUI_TEXT_RGB_G',1])", "(profileNamespace getVariable ['IGUI_TEXT_RGB_B',1])", "(profileNamespace getVariable ['IGUI_TEXT_RGB_A',0.8])"};
        colorCreated[] = {1, 1, 1, 1};
        colorCanceled[] = {0.7, 0.7, 0.7, 1};
        colorDone[] = {0.7, 1, 0.3, 1};
        colorFailed[] = {1, 0.3, 0.2, 1};
        size = 27;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
    };
    class Waypoint {
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        color[] = {0, 0, 0, 1};
        size = 20;
        importance = "1.2 * 16 * 0.05";
        coefMin = 0.900000;
        coefMax = 4;
    };
    class WaypointCompleted {
        icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
        color[] = {0, 0, 0, 1};
        size = 20;
        importance = "1.2 * 16 * 0.05";
        coefMin = 0.900000;
        coefMax = 4;
    };
    class CustomMark {
        icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
        size = 24;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        color[] = {0, 0, 0, 1};
    };
    class Command {
        icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        size = 18;
        importance = 1;
        coefMin = 1;
        coefMax = 1;
        color[] = {1, 1, 1, 1};
    };
    class Bush {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        color[] = {0.45, 0.64, 0.33, 0.4};
        size = "14/2";
        importance = "0.2 * 14 * 0.05 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Rock {
        icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
        color[] = {0.1, 0.1, 0.1, 0.8};
        size = 12;
        importance = "0.5 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class SmallTree {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        color[] = {0.45, 0.64, 0.33, 0.4};
        size = 12;
        importance = "0.6 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class Tree {
        icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
        color[] = {0.45, 0.64, 0.33, 0.4};
        size = 12;
        importance = "0.9 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
    };
    class busstop {
        icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class fuelstation {
        icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class hospital {
        icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class church {
        icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class lighthouse {
        icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class power {
        icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class powersolar {
        icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class powerwave {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class powerwind {
        icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class quay {
        icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class shipwreck {
        icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class transmitter {
        icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class watertower {
        icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {1, 1, 1, 1};
    };
    class Cross {
        icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {0, 0, 0, 1};
    };
    class Chapel {
        icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
        size = 24;
        importance = 1;
        coefMin = 0.85;
        coefMax = 1.0;
        color[] = {0, 0, 0, 1};
    };
    class Bunker {
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        size = 14;
        importance = "1.5 * 14 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
    class Fortress {
        icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
        size = 16;
        importance = "2 * 16 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
    class Fountain {
        icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
        size = 11;
        importance = "1 * 12 * 0.05";
        coefMin = 0.25;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
    class Ruin {
        icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
        size = 16;
        importance = "1.2 * 16 * 0.05";
        coefMin = 1;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
    class Stack {
        icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
        size = 20;
        importance = "2 * 16 * 0.05";
        coefMin = 0.9;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
    class Tourism {
        icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
        size = 16;
        importance = "1 * 16 * 0.05";
        coefMin = 0.7;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
    class ViewTower {
        icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
        size = 16;
        importance = "2.5 * 16 * 0.05";
        coefMin = 0.5;
        coefMax = 4;
        color[] = {0, 0, 0, 1};
    };
};

#endif //BASE_CONTROLS_H