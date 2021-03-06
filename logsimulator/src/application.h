#ifndef APPLICATION_H
#define APPLICATION_H

#include "stdafx.h"
#include "widget.h"
#include "settings.h"

class Application : public QApplication
{
  Q_OBJECT

  std::unique_ptr<Widget> widget;
  std::unique_ptr<Settings> settings;

public:
  Application(int& argc, char** argv);

private slots:
  void onLabStarted();
  void onSectionFinished();
  void onLabFinished();
  void onRoomChanged(const QString& roomName);

private:
  void addLogLine(const QString& s);
};

#endif // APPLICATION_H
