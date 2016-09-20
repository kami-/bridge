#include "ui_macros.h"
#include "bridge_macros.h"


#define BUTTON_IDCS [ \
    BRIDGE_MENU_BUTTON0_IDC, BRIDGE_MENU_BUTTON1_IDC, \
    BRIDGE_MENU_BUTTON2_IDC, BRIDGE_MENU_BUTTON3_IDC, \
    BRIDGE_MENU_BUTTON4_IDC, BRIDGE_MENU_BUTTON5_IDC, \
    BRIDGE_MENU_BUTTON6_IDC, BRIDGE_MENU_BUTTON7_IDC, \
    BRIDGE_MENU_BUTTON8_IDC, BRIDGE_MENU_BUTTON9_IDC, \
    BRIDGE_MENU_BUTTON10_IDC, BRIDGE_MENU_BUTTON11_IDC, \
    BRIDGE_MENU_BUTTON12_IDC, BRIDGE_MENU_BUTTON13_IDC, \
    BRIDGE_MENU_BUTTON14_IDC, BRIDGE_MENU_BUTTON15_IDC, \
    BRIDGE_MENU_BUTTON16_IDC, BRIDGE_MENU_BUTTON17_IDC, \
    BRIDGE_MENU_BUTTON18_IDC, BRIDGE_MENU_BUTTON19_IDC]



bridge_menu_fnc_preinit = {
    bridge_menu_registeredMenus = [];
    bridge_menu_aceSpecInterrupted = false;
    for "_i" from 0 to (MAX_MENU_ROW * MAX_MENU_COL - 1) do {
        bridge_menu_registeredMenus set [_i, ["<Empty>", [], {}, {}]];
    };
    bridge_menu_currentOpenMenu = 0;
};

bridge_menu_fnc_postinit = {
};

bridge_menu_fnc_addKeyHandler = {
    waitUntil {
        sleep 1; 
        !isNull (findDisplay 46);
    };
    (findDisplay 46) displayAddEventHandler ["KeyDown", bridge_menu_fnc_handleKeyDown];
};

bridge_menu_fnc_handleKeyDown = {
    if (visibleMap) exitWith { false };
    params ["_control", "_key", "_shift", "_ctrl", "_alt"];
    if (!(_key == 70 && _shift && !_ctrl && !_alt)) exitWith { false };
    createDialog "Bridge_Dialog";
    true;
};

bridge_menu_fnc_register = {
    params ["_idx", "_name", "_idcs", "_openFunc", "_closeFunc"];

    bridge_menu_registeredMenus set [_idx, [_name, _idcs, _openFunc, _closeFunc]];
};

bridge_menu_fnc_open = {
    {
        private _menu = _x;
        private _idx = _forEachIndex;
        ctrlSetText [BUTTON_IDCS select _idx, _menu select 0];
        {
            ctrlShow [_x, false];
        } foreach (_menu select 1);
    } foreach bridge_menu_registeredMenus;
    [bridge_menu_currentOpenMenu] call bridge_menu_fnc_openMenu;
};

bridge_menu_fnc_close = {
    [] call (bridge_menu_registeredMenus select bridge_menu_currentOpenMenu select 3);
    [] call bridge_menu_fnc_tryReenableAceSpec;
};

bridge_menu_fnc_buttonClicked = {
    params ["_id"];

    [bridge_menu_currentOpenMenu] call bridge_menu_fnc_closeMenu;
    bridge_menu_currentOpenMenu = _id;
    [_id] call bridge_menu_fnc_openMenu;
};

bridge_menu_fnc_openMenu = {
    params ["_id"];

    private _menu = bridge_menu_registeredMenus select _id;
    private _buttonIdc = BUTTON_IDCS select _id;
    DISPLAY_CTRL(_buttonIdc) ctrlSetTextColor BUTTON_ACTIVE_COLOR_SQF;
    //DISPLAY_CTRL(_buttonIdc) ctrlSetActiveColor NO_COLOR_SQF;
    {
        ctrlShow [_x, true];
    } foreach (_menu select 1);
    [] call (_menu select 2);
 };

bridge_menu_fnc_closeMenu = {
    params ["_id"];

    private _menu = bridge_menu_registeredMenus select _id;
    private _buttonIdc = BUTTON_IDCS select _id;
    DISPLAY_CTRL(_buttonIdc) ctrlSetTextColor BUTTON_TEXT_COLOR_SQF;
    //DISPLAY_CTRL(_buttonIdc) ctrlSetActiveColor BUTTON_ACTIVE_COLOR_SQF;
    {
        ctrlShow [_x, false];
    } foreach (_menu select 1);
    [] call (_menu select 3);
};

bridge_menu_fnc_aceSpecButtonClick = {
    if (!bridge_menu_aceSpecInterrupted) then {
        ["bridge_dialog", true] call ace_spectator_fnc_interrupt;
        bridge_menu_aceSpecInterrupted = true;
        [] spawn {
            waitUntil { !dialog };
            createDialog "Bridge_Dialog";
        };
    };
};

bridge_menu_fnc_tryReenableAceSpec = {
    if (bridge_menu_aceSpecInterrupted) then {
        ["bridge_dialog", false] call ace_spectator_fnc_interrupt;
        bridge_menu_aceSpecInterrupted = false;
    };
};
