//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMNLEventInBanner : NSObject
{
    PETScalarEventTracker *_tracker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051172
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 interface:(struct SGMNLEventInterface_)arg2 actionType:(struct SGMNLEventActionType_)arg3 eventType:(id)arg4 languageID:(id)arg5 daysFromStartDate:(unsigned long long)arg6 confidenceScore:(unsigned long long)arg7 significantSender:(struct SGMBoolOption_)arg8 participantCount:(unsigned long long)arg9 extractionLevel:(struct SGMNLEventExtractionLevel_)arg10 usedBubblesCount:(unsigned long long)arg11 titleSource:(struct SGMEventTitleSource_)arg12 titleAdj:(struct SGMEventStringAdj_)arg13 dateAdj:(struct SGMEventDateAdj_)arg14 duraAdj:(struct SGMEventDurationAdj_)arg15 locationAdj:(struct SGMEventLocationAdj_)arg16 addedAttendeesCount:(id)arg17 calendarAppUsageLevel:(id)arg18 mailAppUsageLevel:(struct SGMAppUsageLevel_)arg19 messagesAppUsageLevel:(struct SGMAppUsageLevel_)arg20;	// IMP=0x00000000000504d4
- (id)init;	// IMP=0x000000000004ff8c

@end

