class CfgPatches {
    class Bridge {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CBA_MAIN", "ace_spectator"};
        author = "Kami";
        authorUrl = "https://github.com/kami-";
    };
};

class Extended_PreInit_EventHandlers {
    class Bridge {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\bridge\preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class Bridge {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\bridge\postinit.sqf';";
    };
};

#include "bridge.h"