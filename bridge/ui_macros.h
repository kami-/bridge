#ifndef UI_MACROS_H
#define UI_MACROS_H

#define ARRAY_2(V1,V2) [V1,V2]
#define CONCAT2(PRE,SUF) PRE##SUF
#define CONCAT3(PRE,INF,SUF) PRE##INF##SUF

// Other
#define MAX_MENU_ROW                                    5
#define MAX_MENU_COL                                    4
#define MAX_DEBUG_CONSOLE_SNIPPET_ROW                   5
#define MAX_DEBUG_CONSOLE_SNIPPET_COL                   4

// Colours
#define DIALOG_BG_COLOR                                 {0.2, 0.2, 0.2, 1}
#define NO_COLOR_BASE                                   0, 0, 0, 0
#define NO_COLOR                                        {NO_COLOR_BASE}
#define NO_COLOR_SQF                                    [NO_COLOR_BASE]
#define COMBO_SELECTED_BG_COLOR                         {0.6, 0.706, 0.729, 1}
#define BUTTON_BG_COLOR_BASE                            0, 0, 0, 1
#define BUTTON_BG_COLOR                                 {BUTTON_BG_COLOR_BASE}
#define BUTTON_BG_COLOR_SQF                             [BUTTON_BG_COLOR_BASE]
#define BUTTON_ACTIVE_COLOR_BASE                        0.77, 0.51, 0.08, 1
#define BUTTON_ACTIVE_COLOR                             {BUTTON_ACTIVE_COLOR_BASE}
#define BUTTON_ACTIVE_COLOR_SQF                         [BUTTON_ACTIVE_COLOR_BASE]
#define BUTTON_TEXT_COLOR_BASE                          1, 1, 1, 1
#define BUTTON_TEXT_COLOR                               {BUTTON_TEXT_COLOR_BASE}
#define BUTTON_TEXT_COLOR_SQF                           [BUTTON_TEXT_COLOR_BASE]

// Scaling
#define H_RATIO(NUM)                                    (NUM * 4 / 3)
#define TO_REAL_W(NUM)                                  ((NUM) * safeZoneW)
#define TO_REAL_H(NUM)                                  (H_RATIO(NUM) * safeZoneW)

// Font
#define FONT_TYPE                                       "puristaMedium"
#define FONT_SIZE                                       TO_REAL_W(0.016)

// Common
#define DIALOG_W                                        safeZoneW
#define DIALOG_H                                        safeZoneH
#define DIALOG_X                                        safeZoneX
#define DIALOG_Y                                        safeZoneY
#define DIALOG_MARGIN_RIGHT                             TO_REAL_W(0.003)
#define DIALOG_MARGIN_BOTTOM                            TO_REAL_H(0.003)
#define DIALOG_PADDING_LEFT                             TO_REAL_W(0.003)
#define DIALOG_PADDING_TOP                              TO_REAL_H(0.003)

#define MAP_W                                           DIALOG_W * 0.6
#define MAP_H                                           DIALOG_H
#define MENU_BASE_X                                     DIALOG_X
#define MENU_BASE_Y                                     DIALOG_Y
#define MENU_W                                          (DIALOG_W - MAP_W - DIALOG_PADDING_LEFT - 2 * DIALOG_MARGIN_RIGHT)
#define MENU_H                                          MENU_BUTTON_Y(MAX_MENU_ROW)
#define TOOLTIP_MAX_W                                   (MENU_W * 0.6)
#define CONTENT_BASE_X                                  (DIALOG_X + DIALOG_MARGIN_RIGHT)
#define CONTENT_BASE_Y                                  (MENU_H + 2 * DIALOG_PADDING_TOP)
#define CONTENT_W                                       MENU_W
#define CONTENT_H                                       (DIALOG_H - MENU_H - DIALOG_PADDING_TOP - DIALOG_PADDING_TOP - DIALOG_MARGIN_BOTTOM)

// Control dimensions
#define MENU_BUTTON_W                                   TO_REAL_W(0.1)
#define MENU_BUTTON_H                                   TO_REAL_H(0.015)

#define DEBUG_CONSOLE_SNIPPET_W                         TO_REAL_W(0.12)
#define DEBUG_CONSOLE_SNIPPET_BUTTON_W                  TO_REAL_W(0.024)
#define DEBUG_CONSOLE_SNIPPET_BUTTON_H                  TO_REAL_H(0.018)
#define DEBUG_CONSOLE_SNIPPET_W                         (MAX_DEBUG_CONSOLE_SNIPPET_COL * (DEBUG_CONSOLE_SNIPPET_BUTTON_W + DIALOG_PADDING_LEFT * 2) - DIALOG_PADDING_LEFT)
#define DEBUG_CONSOLE_SNIPPET_H                         (MAX_DEBUG_CONSOLE_SNIPPET_ROW * (DEBUG_CONSOLE_SNIPPET_BUTTON_H + DIALOG_PADDING_TOP * 2) - DIALOG_PADDING_TOP)
#define DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_W            (DEBUG_CONSOLE_SNIPPET_W - DIALOG_PADDING_LEFT)
#define DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_H            DEBUG_CONSOLE_SNIPPET_BUTTON_H
#define DEBUG_CONSOLE_EDITOR_EXECUTE_BUTTON_W           DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_W
#define DEBUG_CONSOLE_EDITOR_EXECUTE_BUTTON_H           DEBUG_CONSOLE_SNIPPET_BUTTON_H
#define DEBUG_CONSOLE_EDITOR_W                          (CONTENT_W - DEBUG_CONSOLE_SNIPPET_W)
#define DEBUG_CONSOLE_EDITOR_H                          TO_REAL_H(0.164)
#define DEBUG_CONSOLE_SNIPPET_TOOLTIP_H                 TO_REAL_H(0.013)
#define DEBUG_CONSOLE_WATCH_EDITOR_W                    DEBUG_CONSOLE_EDITOR_W
#define DEBUG_CONSOLE_WATCH_EDITOR_H                    TO_REAL_H(0.013)
#define DEBUG_CONSOLE_WATCH_RESULT_W                    DEBUG_CONSOLE_EDITOR_W
#define DEBUG_CONSOLE_WATCH_RESULT_H                    DEBUG_CONSOLE_WATCH_EDITOR_H
#define DEBUG_CONSOLE_WATCH_CONTEXT_W                   DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_W
#define DEBUG_CONSOLE_WATCH_CONTEXT_H                   DEBUG_CONSOLE_WATCH_EDITOR_H

// Control positions
#define MAP_X                                           DIALOG_X + DIALOG_W - MAP_W
#define MAP_Y                                           DIALOG_Y
#define MENU_BUTTON_X(COL)                              (MENU_BASE_X + MENU_BUTTON_W * COL)
#define MENU_BUTTON_Y(ROW)                              (MENU_BASE_Y + MENU_BUTTON_H * ROW)

#define DEBUG_CONSOLE_SNIPPET_X                         CONTENT_BASE_X + DEBUG_CONSOLE_EDITOR_W + DIALOG_PADDING_LEFT
#define DEBUG_CONSOLE_SNIPPET_TOOLTIP_Y                 CONTENT_BASE_Y
#define DEBUG_CONSOLE_EDITOR_Y                          CONTENT_BASE_Y + DEBUG_CONSOLE_SNIPPET_TOOLTIP_H + DIALOG_PADDING_TOP
#define DEBUG_CONSOLE_SNIPPET_Y                         DEBUG_CONSOLE_EDITOR_Y
#define DEBUG_CONSOLE_SNIPPET_BUTTON_X(COL)             (DEBUG_CONSOLE_SNIPPET_X + (DEBUG_CONSOLE_SNIPPET_BUTTON_W + DIALOG_PADDING_LEFT * 2) * COL)
#define DEBUG_CONSOLE_SNIPPET_BUTTON_Y(ROW)             (DEBUG_CONSOLE_SNIPPET_Y + (DEBUG_CONSOLE_SNIPPET_BUTTON_H + DIALOG_PADDING_TOP * 2) * ROW)
#define DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_X            DEBUG_CONSOLE_SNIPPET_X
#define DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_Y            DEBUG_CONSOLE_SNIPPET_BUTTON_Y(5)
#define DEBUG_CONSOLE_EDITOR_EXECUTE_BUTTON_X           DEBUG_CONSOLE_SNIPPET_X
#define DEBUG_CONSOLE_EDITOR_EXECUTE_BUTTON_Y           DEBUG_CONSOLE_SNIPPET_BUTTON_Y(6)
#define DEBUG_CONSOLE_WATCH_X                           CONTENT_BASE_X
#define DEBUG_CONSOLE_WATCH_EDITOR_Y(ROW)               (DEBUG_CONSOLE_EDITOR_Y + DEBUG_CONSOLE_EDITOR_H + 4 * DIALOG_PADDING_TOP + (DEBUG_CONSOLE_WATCH_EDITOR_H + DEBUG_CONSOLE_WATCH_RESULT_H) * ROW)
#define DEBUG_CONSOLE_WATCH_RESULT_Y(ROW)               (DEBUG_CONSOLE_WATCH_EDITOR_Y(ROW) + DEBUG_CONSOLE_WATCH_EDITOR_H)
#define DEBUG_CONSOLE_WATCH_CONTEXT_X                   (DEBUG_CONSOLE_WATCH_X + DEBUG_CONSOLE_WATCH_EDITOR_W + DIALOG_PADDING_LEFT)

// IDCs
#define BRIDGE_DIALOG_IDD                               999001
#define BRIDGE_DIALOG_BACKGROUND_IDC                    999002

#define BRIDGE_MENU_BUTTON0_IDC                         999010
#define BRIDGE_MENU_BUTTON1_IDC                         999011
#define BRIDGE_MENU_BUTTON2_IDC                         999012
#define BRIDGE_MENU_BUTTON3_IDC                         999013
#define BRIDGE_MENU_BUTTON4_IDC                         999014
#define BRIDGE_MENU_BUTTON5_IDC                         999015
#define BRIDGE_MENU_BUTTON6_IDC                         999016
#define BRIDGE_MENU_BUTTON7_IDC                         999017
#define BRIDGE_MENU_BUTTON8_IDC                         999018
#define BRIDGE_MENU_BUTTON9_IDC                         999019
#define BRIDGE_MENU_BUTTON10_IDC                        999020
#define BRIDGE_MENU_BUTTON11_IDC                        999021
#define BRIDGE_MENU_BUTTON12_IDC                        999022
#define BRIDGE_MENU_BUTTON13_IDC                        999023
#define BRIDGE_MENU_BUTTON14_IDC                        999024
#define BRIDGE_MENU_BUTTON15_IDC                        999025
#define BRIDGE_MENU_BUTTON16_IDC                        999026
#define BRIDGE_MENU_BUTTON17_IDC                        999027
#define BRIDGE_MENU_BUTTON18_IDC                        999028
#define BRIDGE_MENU_BUTTON19_IDC                        999029

#define BRIDGE_MAP_IDC                                  999050

#define BRIDGE_DEBUG_CONSOLE_EDITOR_IDC                 999105
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_TOOLTIP_IDC        999108
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON0_IDC        999110
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON1_IDC        999111
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON2_IDC        999112
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON3_IDC        999113
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON4_IDC        999114
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON5_IDC        999115
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON6_IDC        999116
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON7_IDC        999117
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON8_IDC        999118
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON9_IDC        999119
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON10_IDC       999120
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON11_IDC       999121
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON12_IDC       999122
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON13_IDC       999123
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON14_IDC       999124
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON15_IDC       999125
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON16_IDC       999126
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON17_IDC       999127
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON18_IDC       999128
#define BRIDGE_DEBUG_CONSOLE_SNIPPET_BUTTON19_IDC       999129
#define BRIDGE_DEBUG_CONSOLE_EDITOR_CONTEXT_COMBO_IDC   999130
#define BRIDGE_DEBUG_CONSOLE_EDITOR_EXECUTE_BUTTON_IDC  999135
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR0_IDC          999140
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT0_IDC        999143
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT0_IDC          999145
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR1_IDC          999150
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT1_IDC        999153
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT1_IDC          999155
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR2_IDC          999160
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT2_IDC        999163
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT2_IDC          999165
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR3_IDC          999170
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT3_IDC        999173
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT3_IDC          999175
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR4_IDC          999180
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT4_IDC        999183
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT4_IDC          999185
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR5_IDC          999190
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT5_IDC        999193
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT5_IDC          999195
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR6_IDC          999200
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT6_IDC        999203
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT6_IDC          999205
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR7_IDC          999210
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT7_IDC        999213
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT7_IDC          999215
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR8_IDC          999220
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT8_IDC        999223
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT8_IDC          999225
#define BRIDGE_DEBUG_CONSOLE_WATCH_EDITOR9_IDC          999230
#define BRIDGE_DEBUG_CONSOLE_WATCH_CONTENXT9_IDC        999233
#define BRIDGE_DEBUG_CONSOLE_WATCH_RESULT9_IDC          999235

// Other macros
#define MENU_BUTTON(ID,IDC,ROW,COL) \
    class MenuButton##ID : MenuButton { \
        idc = IDC; \
        x = MENU_BUTTON_X(COL); \
        y = MENU_BUTTON_Y(ROW); \
        text = CONCAT2(Menu Button, ID); \
        onButtonClick = CONCAT3([,ID,] call bridge_menu_fnc_buttonClicked); \
    }

#define DEBUG_CONSOLE_SNIPPET_BUTTON(ID,SNIPPET,ROW,COL,TXT) \
    class DebugConsoleSnippetButton##ID : DebugConsoleSnippetButton { \
        idc = SNIPPET; \
        x = DEBUG_CONSOLE_SNIPPET_BUTTON_X(COL); \
        y = DEBUG_CONSOLE_SNIPPET_BUTTON_Y(ROW); \
        text = TXT; \
        onButtonClick = CONCAT3([,ID,] call bridge_console_fnc_snippetClicked); \
    }

#define DEBUG_CONSOLE_WATCH(ID,EDITOR,CTX,RESULT) \
    class DebugConsoleWatchEditor##ID : RscEditor { \
        idc = EDITOR; \
        x = DEBUG_CONSOLE_WATCH_X; \
        y = DEBUG_CONSOLE_WATCH_EDITOR_Y(ID); \
        w = DEBUG_CONSOLE_WATCH_EDITOR_W; \
        h = DEBUG_CONSOLE_WATCH_EDITOR_H; \
    }; \
    class DebugConsoleWatchResult##ID : RscReadOnlyEditor { \
        idc = RESULT; \
        x = DEBUG_CONSOLE_WATCH_X; \
        y = DEBUG_CONSOLE_WATCH_RESULT_Y(ID); \
        w = DEBUG_CONSOLE_WATCH_RESULT_W; \
        h = DEBUG_CONSOLE_WATCH_RESULT_H; \
    }; \
    class DebugConsoleWatchContext##ID : RscCombo { \
        idc = CTX; \
        x = DEBUG_CONSOLE_WATCH_CONTEXT_X; \
        y = DEBUG_CONSOLE_WATCH_RESULT_Y(ID); \
        w = DEBUG_CONSOLE_WATCH_CONTEXT_W; \
        h = DEBUG_CONSOLE_WATCH_CONTEXT_H; \
        onLBSelChanged = CONCAT2(ARRAY_2(_this,ID), call bridge_console_fnc_watchContextChanged); \
    }


// BI UI types and styles
// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_HITZONES         17
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_MENU             46
#define CT_MENU_STRIP       47
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_ITEMSLOT         103
#define CT_CHECKBOX         77

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0
#define ST_UPPERCASE      0xC0
#define ST_LOWERCASE      0xD0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4
#define MB_ERROR_DIALOG   8

#endif //UI_MACROS_H