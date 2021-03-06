/*------------------------------ Information ---------------------------*//**
*
*  $HeadURL$
*
*  @file     file_templates.h
*
*  @author   Jo2003
*
*  @date     04.04.2013
*
*  $Id$
*
*/ //----------------- (c) 2013 Jo2003 --------------------------------------
#ifndef __040413__FILE_TEMPLATES_H
   #define __040413__FILE_TEMPLATES_H

// replace helper ...
#define TMPL_INT_NAME   "[%INT_NAME%]"
#define TMPL_OFF_NAME   "[%OFF_NAME%]"
#define TMPL_VERSION    "[%VERSION%]"
#define TMPL_UPD_URL    "[%UPD_URL%]"
#define TMPL_API_SRV    "[%API_SRV%]"
#define TMPL_COMP_NAME  "[%COMP_NAME%]"
#define TMPL_COMP_LINK  "[%COMP_URL%]"
#define TMPL_API_XML    "[%API_XML%]"
#define TMPL_API_JSON   "[%API_JSON%]"
#define TMPL_PROGRAM    "[%PROGRAM%]"
#define TMPL_SERVICE    "[%SERVICE%]"
#define TMPL_APISERVER  "[%APISERVER%]"
#define TMPL_BG_IMAGE   "[%PLAYER_BG_IMG%]"
#define TMPL_HIDE_PRO   "[%HIDEPROJECT%]"
#define TMPL_HIDE_P_IN  "<!-- " TMPL_HIDE_PRO
#define TMPL_HIDE_P_OUT TMPL_HIDE_PRO " -->"
#define TMPL_MAC_BUNDLE "[%MAC_BUNDLE%]"
#define TMPL_APPL_SCUT  "[%APPL_SCUT%]"
#define TMPL_NO_SCUT    "[%NOSHORTCUT%]"

// program file path ...
#define NSIS_EXE        "toolkit/NSIS/makensis.exe"
#define RESH_EXE        "toolkit/resh/ResHacker.exe"
#define RCC_EXE         "toolkit/qtools/rcc.exe"
#define QHG_EXE         "toolkit/qtools/qhelpgenerator.exe"
#define QCG_EXE         "toolkit/qtools/qcollectiongenerator.exe"
#define CONV_EXE        "toolkit/imagic/convert.exe"
#define COMP_EXE        "toolkit/imagic/composite.exe"
#define LIVE_PNG        PATH_TMPL"/live.png"
#define COPY_EXE        "toolkit/bash/cp.exe"
#define ICNS_EXE        "toolkit/icns/png2icns.exe"

#define PATH_INST       "installer"
#define PATH_CUST       "cust"
#define PATH_HLP_SRC    "help_src"
#define PATH_HLP        "qhc"
#define PATH_LNG_SRC    "lang_src"
#define PATH_LNG        "language"
#define PATH_REL        "release"
#define PATH_ICONS      "icons"
#define PATH_TEMP       "temp"
#define PATH_PACK       "packages"
#define PATH_TMPL       "templates"
#define PATH_RES        "resources"
#define PATH_BIN        "master"
#define PATH_MOD        "modules"
#define PATH_LOG        "log"

#define PATH_MAC_CNT    "Contents"
#define PATH_MAC_OS     PATH_MAC_CNT "/MacOS"
#define PATH_MAC_RES    PATH_MAC_CNT "/Resources"
#define PATH_MAC_DOC    PATH_MAC_RES "/doc"
#define PATH_MAC_LNG    PATH_MAC_RES "/language"


#endif // __040413__FILE_TEMPLATES_H

