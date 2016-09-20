#include "bridge_macros.h"

if (hasInterface) then {
    [] call compile preProcessFileLineNumbers ADDON_PATH(menu_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(console_functions.sqf);

    [] call bridge_menu_fnc_preinit;
    [] call bridge_console_fnc_preinit;
};
