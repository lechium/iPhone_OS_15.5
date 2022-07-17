//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGMDDLinkShown, SGMNLEventInBanner;

@interface SGNLEventSuggestionsMetrics : NSObject
{
    SGMDDLinkShown *_ddLinkShown;	// 8 = 0x8
    SGMNLEventInBanner *_nlEvent;	// 16 = 0x10
}

+ (struct SGMEventLocationAdj_)diffEventLocationFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000007c019
+ (struct SGMEventDurationAdj_)diffEventDurationChangedFrom:(double)arg1 to:(double)arg2;	// IMP=0x000000000007bfa0
+ (struct SGMEventDateAdj_)diffEventStartDateChangedFrom:(id)arg1 oldTimeZone:(id)arg2 to:(id)arg3 newTimeZone:(id)arg4;	// IMP=0x000000000007baf3
+ (struct SGMEventStringAdj_)diffEventTitleChangedFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000007b958
+ (double)round:(double)arg1 toSignificantFigures:(long long)arg2;	// IMP=0x000000000007b8c3
+ (unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x000000000007b813
+ (void)recordUserInteraction:(unsigned long long)arg1 withLinkInApplication:(long long)arg2 eventPrefillMode:(unsigned long long)arg3 eventTypeClassification:(id)arg4 proposedEvent:(id)arg5 confirmedEvent:(id)arg6;	// IMP=0x000000000007b640
+ (void)shownViaDataDetectorsLinkInApp:(long long)arg1;	// IMP=0x000000000007b4a0
+ (id)getAddedAttendeesCountFromEKEvent:(id)arg1;	// IMP=0x000000000007b2e6
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 eventType:(id)arg3 languageID:(id)arg4 startDate:(id)arg5 confidenceScore:(float)arg6 participantCount:(BOOL)arg7 significantSender:(struct SGMBoolOption_)arg8 extractionLevel:(struct SGMNLEventExtractionLevel_)arg9 usedBubblesCount:(BOOL)arg10 titleSource:(struct SGMEventTitleSource_)arg11 titleAdj:(struct SGMEventStringAdj_)arg12 dateAdj:(struct SGMEventDateAdj_)arg13 duraAdj:(struct SGMEventDurationAdj_)arg14 locationAdj:(struct SGMEventLocationAdj_)arg15 addedAttendeesCount:(id)arg16 calendarAppUsageLevel:(float)arg17 mailAppUsageLevel:(BOOL)arg18 messagesAppUsageLevel:(BOOL)arg19;	// IMP=0x000000000007ad27
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 eventType:(id)arg3 extractionLevel:(struct SGMNLEventExtractionLevel_)arg4 harvestedEKEvent:(id)arg5 curatedEKEvent:(id)arg6;	// IMP=0x000000000007a4d5
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 harvestedEKEvent:(id)arg3 curatedEKEvent:(id)arg4;	// IMP=0x000000000007a452
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 harvestedSGEvent:(id)arg3 curatedEKEvent:(id)arg4;	// IMP=0x000000000007974e
+ (id)instance;	// IMP=0x000000000007971e
- (void).cxx_destruct;	// IMP=0x00000000000796f6
@property(retain, nonatomic) SGMNLEventInBanner *nlEvent; // @synthesize nlEvent=_nlEvent;
@property(retain, nonatomic) SGMDDLinkShown *ddLinkShown; // @synthesize ddLinkShown=_ddLinkShown;
- (id)init;	// IMP=0x0000000000079620

@end
