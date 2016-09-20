#ifndef CODE_MACROS_H
#define CODE_MACROS_H

#define CONCAT_ADDON_PATH(FILE)                 x\ark\addons\bridge\FILE
#define ADDON_PATH(FILE)                        #CONCAT_ADDON_PATH(FILE)

#define DISPLAY_CTRL(IDC)       ((findDisplay BRIDGE_DIALOG_IDD) displayCtrl (IDC))

#endif //CODE_MACROS_H