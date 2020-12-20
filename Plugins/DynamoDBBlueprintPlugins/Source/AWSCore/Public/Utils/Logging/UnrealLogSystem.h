/* Copyright (C) Siqi.Wu - All Rights Reserved
 * Written by Siqi.Wu <lion547016@gmail.com>, Sept 2020
 */

#pragma once

#include "CoreMinimal.h"

#if WITH_CORE
#include "aws/core/utils/logging/FormattedLogSystem.h"
#include "aws/core/utils/logging/LogLevel.h"
#endif

#if WITH_CORE
class AWSCORE_API UnrealLogSystem : public Aws::Utils::Logging::FormattedLogSystem
{
public:
    UnrealLogSystem(Aws::Utils::Logging::LogLevel logLevel) :
        Aws::Utils::Logging::FormattedLogSystem(logLevel)
    {}
    
    virtual ~UnrealLogSystem() {}

    /**
     * Flushes buffered messages to stdout.
     */
    void Flush() override;

protected:

    virtual void ProcessFormattedStatement(Aws::String&& statement) override;
};
#endif
