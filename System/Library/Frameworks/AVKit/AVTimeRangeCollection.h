//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVTimeRangeCollection : NSObject
{
    NSArray *_timeRanges;	// 8 = 0x8
    double _combinedDuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007620e
@property(readonly) double combinedDuration; // @synthesize combinedDuration=_combinedDuration;
@property(readonly) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (id)displayTimeRangeTrimmedToTimeRange:(id)arg1;	// IMP=0x00000000000760b2
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x0000000000075ef5
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x0000000000075c4a
- (id)timeRangesBetweenDisplayTime:(double)arg1 and:(double)arg2;	// IMP=0x00000000000759c6
- (id)arrayOfDisplayTimes;	// IMP=0x00000000000759ad
- (id)arrayOfDisplayTimesMatching:(CDUnknownBlockType)arg1;	// IMP=0x000000000007589a
- (id)arrayOfBoundaryTimes;	// IMP=0x000000000007558c
- (id)timeRangeAfterTime:(double)arg1;	// IMP=0x00000000000753cd
- (id)timeRangeBeforeTime:(double)arg1;	// IMP=0x0000000000075206
- (id)timeRangeClosestToTime:(double)arg1;	// IMP=0x0000000000074f99
- (id)timeRangeContainingTime:(double)arg1;	// IMP=0x0000000000074e36
- (unsigned long long)count;	// IMP=0x0000000000074df2
- (void)setMapDate:(id)arg1 toTime:(double)arg2;	// IMP=0x0000000000074c91
- (id)initWithTimedMetadataGroups:(id)arg1;	// IMP=0x0000000000074a9e
- (id)init;	// IMP=0x0000000000074a85
- (id)initWithTimeRanges:(id)arg1;	// IMP=0x0000000000074853

@end

