// log_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

#include "loguru.h"
#include "iostream"

int main()
{
  LOG_FILE("test.log");

  LOG_ERROR("error message 1!");
  LOG_WARNING("warning message 1!");
  LOG_INFO("info message 1!");

  SET_LOG(loguru::Verbosity_ERROR, false);
  SET_LOG(loguru::Verbosity_WARNING, true);
  SET_LOG(loguru::Verbosity_INFO, true);

  LOG_ERROR("error message 2!");
  LOG_WARNING("warning message 2!");
  LOG_INFO("info message 2!");

  set_log(loguru::Verbosity_ERROR, true);
  set_log(loguru::Verbosity_WARNING, false);
  set_log(loguru::Verbosity_INFO, true);

  LOG_ERROR("error message 3!");
  LOG_WARNING("warning message 3!");
  LOG_INFO("info message 3!");

  set_log(loguru::Verbosity_ERROR, true);
  set_log(loguru::Verbosity_WARNING, true);
  set_log(loguru::Verbosity_INFO, false);

  LOG_ERROR("error message 4!");
  LOG_WARNING("warning message 4!");
  LOG_INFO("info message 4!");

  return 0;
}

