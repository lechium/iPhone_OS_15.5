//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSKAVPlayerController;

@interface TSKAVPlayerTimeController : NSObject
{
    id mTimeObserver;	// 8 = 0x8
    _Bool mObservingPlayerStatus;	// 16 = 0x10
    double mAbsoluteCurrentTime;	// 24 = 0x18
    double mCurrentTime;	// 32 = 0x20
    double mRemainingTime;	// 40 = 0x28
    double mUpdateInterval;	// 48 = 0x30
    TSKAVPlayerController *mPlayerController;	// 56 = 0x38
}

@property(readonly, retain, nonatomic) TSKAVPlayerController *playerController; // @synthesize playerController=mPlayerController;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=mUpdateInterval;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=mRemainingTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=mCurrentTime;
@property(nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=mAbsoluteCurrentTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a46e5
- (void)p_endScrubbing;	// IMP=0x00000000000a46cf
- (void)p_beginScrubbingIfNeeded;	// IMP=0x00000000000a4619
- (void)p_setTimeValuesWithoutScrubbing;	// IMP=0x00000000000a441d
- (void)p_teardownTimeObserver;	// IMP=0x00000000000a432d
- (void)p_createTimeObserver;	// IMP=0x00000000000a415a
- (void)stopObservingTime;	// IMP=0x00000000000a412c
- (void)startObservingTime;	// IMP=0x00000000000a4069
- (void)dealloc;	// IMP=0x00000000000a3f75
- (id)initWithPlayerController:(id)arg1;	// IMP=0x00000000000a3e53

@end

