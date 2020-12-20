/* Copyright (C) Siqi.Wu - All Rights Reserved
 * Written by Siqi.Wu <lion547016@gmail.com>, Sept 2020
 */

#include "Utils/Logging/UnrealLogSystem.h"

#include "AWSCoreGlobals.h"

#if WITH_CORE
void UnrealLogSystem::ProcessFormattedStatement(Aws::String&& statement) {
    switch(this->GetLogLevel()) {
        case Aws::Utils::Logging::LogLevel::Off:
            break;
        case Aws::Utils::Logging::LogLevel::Fatal:
            LOG_AWSCORE_ERROR(UTF8_TO_TCHAR(statement.c_str()));
            break;
        case Aws::Utils::Logging::LogLevel::Error:
            LOG_AWSCORE_ERROR(UTF8_TO_TCHAR(statement.c_str()));
            break;
        case Aws::Utils::Logging::LogLevel::Warn:
            LOG_AWSCORE_WARNING(UTF8_TO_TCHAR(statement.c_str()));
            break;
        case Aws::Utils::Logging::LogLevel::Info:
            LOG_AWSCORE_VERYVERBOSE(UTF8_TO_TCHAR(statement.c_str()));
            break;
        case Aws::Utils::Logging::LogLevel::Debug:
            LOG_AWSCORE_VERBOSE(UTF8_TO_TCHAR(statement.c_str()));
            break;
        case Aws::Utils::Logging::LogLevel::Trace:
            LOG_AWSCORE_NORMAL(UTF8_TO_TCHAR(statement.c_str()));
            break;
    }
}

void UnrealLogSystem::Flush() {
}
#endif