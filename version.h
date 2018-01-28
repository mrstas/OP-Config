#ifndef VERSION_H
#define VERSION_H

// LAST UPDATE: 1/27/2018

// SKIPPING 0.92.19 to stay consistent with TCB.
#define VER_FILEVERSION              0,92,20,00
#define VER_FILEVERSION_STR         "0.92.20.00\0"

// THIS IS THE VERSION THAT WILL BE CHECKED AGAINST the appcast.xml version on the downloads page.
// YOU MUST ALSO RUN QMAKE for this to update.
#define VER_PRODUCTVERSION           0,92,20,00
#define VER_PRODUCTVERSION_STR      "0.92.20\0"

// THIS VERSION IS THE MINIMUM VERSION OF TCB FIRMWARE NEEDED FOR THIS VERSION OF OP CONFIG:
#define VER_MINTCB_STR              "0.92.20\0"

#define VER_COPYRIGHT_YEAR_STR      "2018"      // Change it below as well v
#define VER_COMPANYNAME_STR         "OpenPanzer.org"
#define VER_FILEDESCRIPTION_STR     "OP Config"
#define VER_INTERNALNAME_STR        "OP Config"
#define VER_LEGALCOPYRIGHT_STR      "Copyright (C) 2018 OpenPanzer.org"
#define VER_LEGALTRADEMARKS1_STR    "All Rights Reserved"
#define VER_LEGALTRADEMARKS2_STR    VER_LEGALTRADEMARKS1_STR
#define VER_ORIGINALFILENAME_STR    "OPConfig.exe"
#define VER_PRODUCTNAME_STR         "OP Config"

#define VER_COMPANYDOMAIN_STR       "openpanzer.org"

#endif // VERSION_H
