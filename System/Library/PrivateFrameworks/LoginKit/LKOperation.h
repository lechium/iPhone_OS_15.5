//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface LKOperation : NSObject
{
    NSDate *_startTime;	// 8 = 0x8
    NSDate *_endTime;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001c65
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (id)dictionary;	// IMP=0x0000000000001a1e
- (void)setDuration:(double)arg1;	// IMP=0x0000000000001a06
- (void)setEndTime:(id)arg1;	// IMP=0x00000000000019bb
- (void)setStartTime:(id)arg1;	// IMP=0x0000000000001970
- (id)init;	// IMP=0x0000000000001908

@end
