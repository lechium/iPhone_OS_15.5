//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTimer, NSMutableArray, SBPressSequenceValidator, SBPressTuple;
@protocol SBPressSequenceRecognizerDelegate;

@interface SBPressSequenceRecognizer : NSObject
{
    double _lastPressDownEvent;	// 8 = 0x8
    double _lastPressUpEvent;	// 16 = 0x10
    BSTimer *_watchdogTimer;	// 24 = 0x18
    SBPressTuple *_currentPressTuple;	// 32 = 0x20
    NSMutableArray *_currentSequence;	// 40 = 0x28
    id <SBPressSequenceRecognizerDelegate> _delegate;	// 48 = 0x30
    SBPressSequenceValidator *_validator;	// 56 = 0x38
    unsigned long long _numberOfPresses;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005ba087
@property(readonly, nonatomic) unsigned long long numberOfPresses; // @synthesize numberOfPresses=_numberOfPresses;
@property(readonly, nonatomic) SBPressSequenceValidator *validator; // @synthesize validator=_validator;
@property(nonatomic) __weak id <SBPressSequenceRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_watchdogTimeIntervalFromDelay:(double)arg1;	// IMP=0x00000000000c8953
- (void)_resetAfterDelay:(double)arg1;	// IMP=0x00000000000c8877
- (void)_resetWatchdogIfNecessary;	// IMP=0x00000000000c7bb5
- (void)_resetAndNotify;	// IMP=0x00000000000d0682
- (void)_reset;	// IMP=0x00000000000d06cf
- (void)_complete;	// IMP=0x00000000005b9fe4
- (void)_handlePressUpWithTimestamp:(double)arg1;	// IMP=0x00000000000c7aa7
- (void)_handlePressDownWithTimestamp:(double)arg1;	// IMP=0x00000000000d0e14
- (void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;	// IMP=0x00000000005b9e6c
- (void)registerPressUpWithTimestamp:(double)arg1;	// IMP=0x00000000000c7a59
- (void)registerPressDownWithTimestamp:(double)arg1;	// IMP=0x00000000000c3e41
- (id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;	// IMP=0x00000000005b9d6e
- (id)init;	// IMP=0x00000000005b9ce1

@end

