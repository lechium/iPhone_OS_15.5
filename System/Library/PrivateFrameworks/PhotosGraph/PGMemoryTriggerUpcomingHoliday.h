//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGMemoryTriggerUpcomingHoliday
{
    NSSet *_validHolidaysNames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000215f73
- (id)resultsTriggeredWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;	// IMP=0x0000000000215b21
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1;	// IMP=0x0000000000215aca
- (unsigned long long)triggerType;	// IMP=0x0000000000215abf
- (id)initWithLoggingConnection:(id)arg1 holidayService:(id)arg2;	// IMP=0x0000000000215826

@end

