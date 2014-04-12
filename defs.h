#ifndef DEFS_H
#define DEFS_H

const QString OrgName = "Changsha University Of Science & Technology";
const QString AppName = "TestPaperGenerator";

struct Login{
    QString name;
    QString passwd;
};

//#define __WPS__

#ifdef __WPS__
const QString wordAppName="Wps.Application";
#else
const QString wordAppName="Word.Application";
#endif

/*** 定义当前软件版本 */
const int curMajor = 1;
const int curMinor = 5;
const int curMin   = 5;

#endif // DEFS_H
