//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBPressPrecedenceArbiter-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString, SBPressGestureRecognizer, SBPressSequenceObserver, SBVolumeHardwareButtonActions, UIGestureRecognizer;

@interface SBVolumeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBPressPrecedenceArbiter>
{
    unsigned long long _volumeUpAggdStartTime;	// 8 = 0x8
    unsigned long long _volumeDownAggdStartTime;	// 16 = 0x10
    long long _homeButtonType;	// 24 = 0x18
    SBPressGestureRecognizer *_volumeIncreaseButtonPressGestureRecognizer;	// 32 = 0x20
    SBPressGestureRecognizer *_volumeDecreaseButtonPressGestureRecognizer;	// 40 = 0x28
    UIGestureRecognizer *_screenshotGestureRecognizer;	// 48 = 0x30
    UIGestureRecognizer *_shutdownGestureRecognizer;	// 56 = 0x38
    NSHashTable *_volumePressBandits;	// 64 = 0x40
    SBPressSequenceObserver *_volumeIncreaseSequenceObserver;	// 72 = 0x48
    SBPressSequenceObserver *_volumeDecreaseSequenceObserver;	// 80 = 0x50
    SBVolumeHardwareButtonActions *_buttonActions;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000160d27
@property(readonly, nonatomic) SBVolumeHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
@property(readonly, nonatomic) SBPressSequenceObserver *volumeDecreaseSequenceObserver; // @synthesize volumeDecreaseSequenceObserver=_volumeDecreaseSequenceObserver;
@property(readonly, nonatomic) SBPressSequenceObserver *volumeIncreaseSequenceObserver; // @synthesize volumeIncreaseSequenceObserver=_volumeIncreaseSequenceObserver;
@property(nonatomic) __weak NSHashTable *volumePressBandits; // @synthesize volumePressBandits=_volumePressBandits;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000a25a9
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000a2706
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000a2a17
- (id)preemptablePressGestureRecognizers;	// IMP=0x00000000000c0ee7
- (void)_aggdLogVolumeDecreaseButtonDown:(_Bool)arg1;	// IMP=0x0000000000160c76
- (void)_aggdLogVolumeIncreaseButtonDown:(_Bool)arg1;	// IMP=0x00000000000a2d45
- (void)_logVolumeButtonWithObserver:(id)arg1 down:(_Bool)arg2;	// IMP=0x00000000000a2db1
- (void)volumeDecreasePress:(id)arg1;	// IMP=0x0000000000160b19
- (void)volumeIncreasePress:(id)arg1;	// IMP=0x00000000000a2be8
- (void)_createGestureRecognizers;	// IMP=0x00000000001609a9
- (void)cancelVolumePress;	// IMP=0x00000000000c3156
- (void)removeVolumePressBandit:(id)arg1;	// IMP=0x0000000000160993
- (void)addVolumePressBandit:(id)arg1;	// IMP=0x000000000016097d
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeButtonType:(long long)arg3;	// IMP=0x0000000000160844

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

