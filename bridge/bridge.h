#include "bridge_dialog.h"

// ACE Spec stuff
class ace_spectator_interface {
    class controls {
        class Bridge_Button {
            idc = -1;
            access = 0;
            type = CT_BUTTON;
            style = ST_CENTER;

            x = safeZoneX;
            y = (safeZoneY + safeZoneH - MENU_BUTTON_H);
            w = MENU_BUTTON_W;
            h = MENU_BUTTON_H;

            onMouseButtonClick = "[] call bridge_menu_fnc_aceSpecButtonClick;";

            text = "";
            font = FONT_TYPE;
            sizeEx = FONT_SIZE;
            fixedWidth = 0;
            shadow = 0;
            lineSpacing = 0;

            colorText[] = NO_COLOR;
            colorDisabled[] = NO_COLOR;
            colorBackground[] = NO_COLOR;
            colorBackgroundDisabled[] = NO_COLOR;
            colorBackgroundActive[] = NO_COLOR;
            colorFocused[] = NO_COLOR;
            colorShadow[] = NO_COLOR;
            colorBorder[] = NO_COLOR;

            tooltip = "Bridge";
            tooltipMaxWidth = TOOLTIP_MAX_W;
            tooltipColorShade[] = BUTTON_BG_COLOR;
            tooltipColorText[] = BUTTON_TEXT_COLOR;
            tooltipColorBox[] = {0, 0, 0, 0};

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
    };
};
