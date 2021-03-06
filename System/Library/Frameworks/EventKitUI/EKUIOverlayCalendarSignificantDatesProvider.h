//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalDateRange, NSDate, NSDictionary;
@protocol OS_dispatch_queue;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject
{
    CalDateRange *_cachedDateRange;	// 8 = 0x8
    CalDateRange *_cachedCentralYear;	// 16 = 0x10
    NSDictionary *_cachedFirstsOfMonths;	// 24 = 0x18
    NSDictionary *_cachedFirstsOfYears;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    unsigned long long _currentGeneration;	// 48 = 0x30
    NSDate *_currentRequest;	// 56 = 0x38
    _Bool _loadPending;	// 64 = 0x40
    CDUnknownBlockType _significantDatesChangedHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000df8e7
@property(copy, nonatomic) CDUnknownBlockType significantDatesChangedHandler; // @synthesize significantDatesChangedHandler=_significantDatesChangedHandler;
- (void)_load;	// IMP=0x00000000000de99c
- (void)_requestDate:(id)arg1;	// IMP=0x00000000000de8f1
- (id)firstOfOverlayYearsForCalendarMonth:(id)arg1;	// IMP=0x00000000000de888
- (id)firstOfOverlayMonthsForCalendarMonth:(id)arg1;	// IMP=0x00000000000de81f
- (void)_invalidateCaches;	// IMP=0x00000000000de75b
- (void)dealloc;	// IMP=0x00000000000de6d9
- (id)init;	// IMP=0x00000000000de624

@end

