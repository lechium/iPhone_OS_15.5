//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostSupportTimeInterval-Protocol.h>

@class NSString;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>
{
    unsigned long long _startMachContinuousTime;	// 8 = 0x8
    unsigned long long _endMachContinuousTime;	// 16 = 0x10
    double _timebaseRatio;	// 24 = 0x18
}

@property(readonly, nonatomic) double timebaseRatio; // @synthesize timebaseRatio=_timebaseRatio;
@property(readonly, nonatomic) unsigned long long endMachContinuousTime; // @synthesize endMachContinuousTime=_endMachContinuousTime;
@property(readonly, nonatomic) unsigned long long startMachContinuousTime; // @synthesize startMachContinuousTime=_startMachContinuousTime;
- (double)durationMs;	// IMP=0x00000000000235ca
- (double)endMs;	// IMP=0x0000000000023596
- (double)startMs;	// IMP=0x0000000000023562
- (unsigned long long)startNanoseconds;	// IMP=0x00000000000234eb
- (unsigned long long)endNanoseconds;	// IMP=0x0000000000023474
- (unsigned long long)durationNanoseconds;	// IMP=0x00000000000233fd
- (float)durationSeconds;	// IMP=0x00000000000233c5
- (double)endSeconds;	// IMP=0x0000000000023391
- (double)startSeconds;	// IMP=0x000000000002335d
- (unsigned long long)durationMachContinuousTime;	// IMP=0x000000000002331e
- (id)initWithInterval:(id)arg1;	// IMP=0x0000000000023294
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3;	// IMP=0x00000000000231dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

