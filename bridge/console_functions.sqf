#include "ui_macros.h"
#include "bridge_macros.h"

#define PROFILE_VAR(VAR,ID)             format ["bridge_console_%1%2", VAR, ID]
#define EDITOR_CONTEXT_PROFILE(ID)      PROFILE_VAR("editorContext", ID)
#define SNIPPET_PROFILE(ID)             PROFILE_VAR("snippet", ID)
#define WATCH_EXPRESSION_PROFILE(ID)    PROFILE_VAR("watchExpression", ID)
#define CONTEXT_PLAYER_SEPARATOR        "¤"

#define SNIPPET_IDCS [ \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON0_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON1_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON2_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON3_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON4_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON5_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON6_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON7_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON8_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON9_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON10_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON11_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON12_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON13_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON14_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON15_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON16_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON17_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON18_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON19_IDC]

#define WATCH_EDITOR_IDCS [ \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR0_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR1_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR2_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR3_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR4_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR5_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR6_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR7_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR8_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR9_IDC]

#define WATCH_RESULT_IDCS [ \
    BRIDGE_DEBUG_CONSOLE_WATCH_RESULT0_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT1_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_RESULT2_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT3_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_RESULT4_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT5_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_RESULT6_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT7_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_RESULT8_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT9_IDC]

#define WATCH_CONTEXT_IDCS [ \
    BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT0_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT1_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT2_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT3_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT4_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT5_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT6_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT7_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT8_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT9_IDC]

#define ALL_IDCS [ \
    BRIDGE_DEBUG_CONSOLE_EDITOR_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_TOOLTIP_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON0_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON1_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON2_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON3_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON4_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON5_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON6_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON7_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON8_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON9_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON10_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON11_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON12_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON13_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON14_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON15_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON16_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON17_IDC, BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON18_IDC, \
    BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON19_IDC, BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC, BRIDGE_DEBUG_CONSOLE_EDITOR_EXECUTE_BUTTON_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR0_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT0_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT0_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR1_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT1_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT1_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR2_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT2_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT2_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR3_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT3_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT3_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR4_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT4_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT4_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR5_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT5_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT5_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR6_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT6_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT6_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR7_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT7_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT7_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR8_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT8_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT8_IDC, \
    BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR9_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT9_IDC, BRIDGE_DEBUG_CONSOLE_WATCH_RESULT9_IDC]



bridge_console_fnc_preinit = {
    bridge_console_isOpen = false;
    bridge_console_currentSnippetId = 0;
    bridge_console_currentEditorContextIndex = 0;
    bridge_console_currentWatchContextIndices = WATCH_CONTEXT_IDCS apply { 0 };
    [0, "Debug Console", ALL_IDCS, bridge_console_fnc_open, bridge_console_fnc_close] call bridge_menu_fnc_register;
};

bridge_console_fnc_postinit = {
};

bridge_console_fnc_open = {
    bridge_console_isOpen = true;
    DISPLAY_CTRL(SNIPPET_IDCS select bridge_console_currentSnippetId) ctrlSetTextColor BUTTON_ACTIVE_COLOR_SQF;
    [bridge_console_currentSnippetId] call bridge_console_fnc_loadSnippet;
    [] call bridge_console_fnc_loadSnippetTooltips;
    [] call bridge_console_fnc_loadWatchExpressions;
    [] call bridge_console_fnc_initializeExecuteContexts;
    [] call bridge_console_fnc_initializeWatchContexts;
    [bridge_console_fnc_evaluateLocalWatches, 0.1, []] call CBA_fnc_addPerFrameHandler;
    [bridge_console_fnc_evaluateRemoteWatches, 1, []] call CBA_fnc_addPerFrameHandler;
};

bridge_console_fnc_close = {
    bridge_console_isOpen = false;
    [bridge_console_currentSnippetId] call bridge_console_fnc_saveSnippet;
    [] call bridge_console_fnc_saveWatchExpressions;
};

bridge_console_fnc_snippetClicked = {
    params ["_id"];

    [bridge_console_currentSnippetId] call bridge_console_fnc_saveSnippet;
    DISPLAY_CTRL(SNIPPET_IDCS select bridge_console_currentSnippetId) ctrlSetTextColor BUTTON_TEXT_COLOR_SQF;
    //DISPLAY_CTRL(SNIPPET_IDCS select bridge_console_currentSnippetId) ctrlSetActiveColor BUTTON_ACTIVE_COLOR_SQF;
    DISPLAY_CTRL(SNIPPET_IDCS select _id) ctrlSetTextColor BUTTON_ACTIVE_COLOR_SQF;
    //DISPLAY_CTRL(SNIPPET_IDCS select _id) ctrlSetActiveColor BUTTON_BG_COLOR_SQF;
    bridge_console_currentSnippetId = _id;
    [_id] call bridge_console_fnc_loadSnippet;
};

bridge_console_fnc_executeClicked = {
    private _idx = lbCurSel BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC;
    private _contextId = lbData [BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC, _idx];
    private _compiled = compile ctrlText BRIDGE_DEBUG_CONSOLE_EDITOR_IDC;
    if (_contextId == "local") exitWith { call _compiled; };
    private _target = call {
        if (_contextId == "server")         exitWith { 2 };
        if (_contextId == "global")         exitWith { 0 };
        if (_contextId == "clients")        exitWith { -2 };
        if (_contextId == "blufor")         exitWith { blufor };
        if (_contextId == "opfor")          exitWith { opfor };
        if (_contextId == "indfor")         exitWith { resistance };
        if (_contextId == "civfor")         exitWith { civilian };
        private _splitContextId = _contextId splitString CONTEXT_PLAYER_SEPARATOR;
        if (_splitContextId select 0 == "player")       exitWith {
            [_splitContextId select 1] call bridge_console_fnc_getPlayerTarget;
        };
        2;
    };
    [[], _compiled] remoteExecCall ["BIS_fnc_call", _target, false]; 
};

bridge_console_fnc_executeContextChanged = {
    params ["_ctrl", "_idx"];

    bridge_console_currentEditorContextIndex = _idx;
};

bridge_console_fnc_watchContextChanged = {
    params ["_event", "_id"];
    private _idx = _event select 1;

    bridge_console_currentWatchContextIndices set [_id, _idx];
};

bridge_console_fnc_evaluateLocalWatches = {
    params ["_args", "_handle"];
    if (!bridge_console_isOpen) then {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
    {
        private _labelIdx = lbCurSel _x;
        private _contextId = lbData [_x, _labelIdx];
        if (_contextId == "local") then {
            private _result = call {
                private _code = ctrlText (WATCH_EDITOR_IDCS select _forEachIndex);
                if (_code == "") exitWith { "" };
                private _compiled = compile _code;
                if (!isNil _compiled) exitWith { str call _compiled };
                "";
            };
            ctrlSetText [WATCH_RESULT_IDCS select _forEachIndex, _result];
        };
    } foreach WATCH_CONTEXT_IDCS;
};

bridge_console_fnc_evaluateRemoteWatches = {
    params ["_args", "_handle"];
    if (!bridge_console_isOpen) then {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };
    {
        private _labelIdx = lbCurSel _x;
        private _contextId = lbData [_x, _labelIdx];
        private _code = ctrlText (WATCH_EDITOR_IDCS select _forEachIndex);
        if (_contextId != "local" && {_code != ""}) then {
            [_contextId, _code, WATCH_RESULT_IDCS select _forEachIndex] call bridge_console_fnc_evaluateRemoteWatch;
        };
    } foreach WATCH_CONTEXT_IDCS;
};

bridge_console_fnc_evaluateRemoteWatch = {
    params ["_contextId", "_code", "_resultIdc"];
    private _target = call {
        if (_contextId == "server")                     exitWith { 2 };
        private _splitContextId = _contextId splitString CONTEXT_PLAYER_SEPARATOR;
        if (_splitContextId select 0 == "player")       exitWith {
            [_splitContextId select 1] call bridge_console_fnc_getPlayerTarget;
        };
        2;
    };
    [[clientOwner, _code, _resultIdc], {
        params ["_clientId", "_code", "_resultIdc"];

        private _compiled = compile _code;
        private _result = call {
            if (!isNil _compiled) exitWith { str call _compiled };
            "";
        };
        [[_result, _resultIdc], {
            params ["_result", "_resultIdc"];

            ctrlSetText [_resultIdc, _result];
        }] remoteExecCall ["BIS_fnc_call", _clientId, false]; 
    }] remoteExecCall ["BIS_fnc_call", _target, false]; 
};

bridge_console_fnc_getPlayerTarget = {
    params ["_name"];

    private _players = playableUnits select { [_x] call bridge_console_fnc_getUnitName == _name };
    if (count _players > 0) then { _players select 0 } else { 2 };
};

bridge_console_fnc_loadSnippet = {
    params ["_id"];

    private _snippet = profileNamespace getVariable [SNIPPET_PROFILE(_id), ["", ""]];
    ctrlSetText [BRIDGE_DEBUG_CONSOLE_SNIPPET_TOOLTIP_IDC, _snippet select 0];
    ctrlSetText [BRIDGE_DEBUG_CONSOLE_EDITOR_IDC, _snippet select 1];
    DISPLAY_CTRL(SNIPPET_IDCS select _id) ctrlSetTooltip (_snippet select 0);
};

bridge_console_fnc_loadSnippetTooltips = {
    {
        private _snippet = profileNamespace getVariable [SNIPPET_PROFILE(_forEachIndex), ["", ""]];
        DISPLAY_CTRL(_x) ctrlSetTooltip (_snippet select 0);
    } foreach SNIPPET_IDCS;
};

bridge_console_fnc_saveSnippet = {
    params ["_id"];

    profileNamespace setVariable [SNIPPET_PROFILE(_id), [ctrlText BRIDGE_DEBUG_CONSOLE_SNIPPET_TOOLTIP_IDC, ctrlText BRIDGE_DEBUG_CONSOLE_EDITOR_IDC]];
};

bridge_console_fnc_loadWatchExpressions = {
    {
        private _expression = profileNamespace getVariable [WATCH_EXPRESSION_PROFILE(_forEachIndex), ""];
        ctrlSetText [_x, _expression];
    } foreach WATCH_EDITOR_IDCS;
};

bridge_console_fnc_saveWatchExpressions = {
    {
        profileNamespace setVariable [WATCH_EXPRESSION_PROFILE(_forEachIndex), ctrlText _x];
    } foreach WATCH_EDITOR_IDCS;
};

bridge_console_fnc_initializeExecuteContexts = {
    private _contexts = [] call bridge_console_fnc_getExecuteContexts;
    lbClear BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC;
    {
        private _idx = lbAdd [BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC, _x select 0];
        lbSetData [BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC, _idx, _x select 1];
    } foreach _contexts;
    lbSetCurSel [BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC, bridge_console_currentEditorContextIndex];
};

bridge_console_fnc_initializeWatchContexts = {
    private _contexts = [] call bridge_console_fnc_getWatchContexts;
    {
        private _idc = _x;
        private _idx = _forEachIndex;
        lbClear _idc;
        {
            private _context = _x;
            private _labelIdx = lbAdd [_idc, _context select 0];
            lbSetData [_idc, _labelIdx, _context select 1];
        } foreach _contexts;
        lbSetCurSel [_idc, bridge_console_currentWatchContextIndices select _idx];
    } foreach WATCH_CONTEXT_IDCS;
};

bridge_console_fnc_getExecuteContexts = {
    private _contexts = [ ["Local", "local"] ];
    if (!isMultiplayer) exitWith { _contexts; };

    _contexts append [ ["Server", "server"]
    , ["Global", "global"]
    , ["Clients", "clients"]
    , ["BLUFOR (Side)", "blufor"]
    , ["OPFOR (Side)", "opfor"]
    , ["INDFOR (Side)", "indfor"]
    , ["CIVFOR (Side)", "civfor"]
    ];
    _contexts append ([] call bridge_console_fnc_getPlayerContexts);

    _contexts;
};

bridge_console_fnc_getWatchContexts = {
    private _contexts = [ ["Local", "local"] ];
    if (!isMultiplayer) exitWith { _contexts; };

    _contexts pushback ["Server", "server"];
    _contexts append ([] call bridge_console_fnc_getPlayerContexts);

    _contexts;
};

bridge_console_fnc_getPlayerContexts = {
    playableUnits
        select { player != _x && {isPlayer _x} }
        apply { [format ["%1 (Player)", [_x] call bridge_console_fnc_getUnitName], format ["player%1%2", CONTEXT_PLAYER_SEPARATOR, [_x] call bridge_console_fnc_getUnitName]] };
};

bridge_console_fnc_getUnitName = {
    _this call ace_common_fnc_getName;
};
