//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface HRAtrialFibrillationConfirmationCycleMetric : NSObject
{
    NSMutableDictionary *_eventPayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000f836
@property(retain, nonatomic) NSMutableDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (id)initWithAgeBin:(unsigned long long)arg1 numberOfPositiveTachograms:(long long)arg2 numberOfNegativeTachograms:(long long)arg3 algorithmVersion:(long long)arg4 biologicalSex:(long long)arg5 userShouldBeAlerted:(_Bool)arg6 cycleDuration:(double)arg7 additionalMetrics:(id)arg8;	// IMP=0x000000000000f4ec

@end
