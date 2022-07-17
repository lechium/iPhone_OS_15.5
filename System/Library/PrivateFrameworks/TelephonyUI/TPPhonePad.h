//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <TelephonyUI/TPDialerKeypadProtocol-Protocol.h>

@class NSString;
@protocol TPDialerKeypadDelegate;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol>
{
    long long _downKey;	// 8 = 0x8
    long long _highlightKey;	// 16 = 0x10
    id <TPDialerKeypadDelegate> _delegate;	// 24 = 0x18
    _Bool _playsSounds;	// 32 = 0x20
    double _topHeight;	// 40 = 0x28
    double _midHeight;	// 48 = 0x30
    double _bottomHeight;	// 56 = 0x38
    double _leftWidth;	// 64 = 0x40
    double _midWidth;	// 72 = 0x48
    double _rightWidth;	// 80 = 0x50
    struct __CFSet *_inflightSounds;	// 88 = 0x58
    struct __CFDictionary *_keyToButtonMap;	// 96 = 0x60
    unsigned int _incompleteSounds;	// 104 = 0x68
    unsigned int _delegateSoundCallbacks:1;	// 108 = 0x6c
    unsigned int _soundsActivated:1;	// 108 = 0x6c
}

+ (void)_delayedDeactivate;	// IMP=0x0000000000013b2a
+ (_Bool)launchFieldTestIfNeeded:(id)arg1;	// IMP=0x00000000000138f1
+ (_Bool)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;	// IMP=0x0000000000013772
- (void).cxx_destruct;	// IMP=0x0000000000015420
- (void)_stopAllSoundsForcingCallbacks:(_Bool)arg1;	// IMP=0x0000000000015362
- (void)_stopSoundForKey:(unsigned long long)arg1;	// IMP=0x000000000001531e
- (void)_playSoundForKey:(unsigned long long)arg1;	// IMP=0x000000000001524b
- (void)_notifySoundCompletionIfNecessary:(unsigned int)arg1;	// IMP=0x00000000000151f1
- (struct CGRect)_rectForKey:(unsigned long long)arg1;	// IMP=0x00000000000150b2
- (int)_keyForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000014f72
- (void)_handleKeyPressAndHoldForKey:(long long)arg1;	// IMP=0x0000000000014ea4
- (void)_handleKeyPressAndHoldForDownKey:(id)arg1;	// IMP=0x0000000000014e87
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1;	// IMP=0x0000000000014e6a
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;	// IMP=0x0000000000014ba3
- (_Bool)cancelTouchTracking;	// IMP=0x0000000000014ab3
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000014988
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000014908
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000014900
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000014532
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0000000000014446
- (struct CGRect)_updateRect:(struct CGRect)arg1 withScale:(double)arg2;	// IMP=0x00000000000143d2
- (double)_yFudge;	// IMP=0x00000000000143c4
- (id)_highlightedImage;	// IMP=0x00000000000143bc
- (id)_keypadImage;	// IMP=0x00000000000143b4
- (id)_pressedImage;	// IMP=0x00000000000143ac
- (struct CGPoint)_keypadOrigin;	// IMP=0x00000000000142c8
- (void)setNeedsDisplayForKey:(int)arg1;	// IMP=0x0000000000014279
- (id)_buttonForKeyAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014248
- (void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2;	// IMP=0x000000000001415e
- (void)setPlaysSounds:(_Bool)arg1;	// IMP=0x0000000000013f6c
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000013ece
- (void)movedToWindow:(id)arg1;	// IMP=0x0000000000013e7b
- (void)movedFromWindow:(id)arg1;	// IMP=0x0000000000013e38
- (void)_appResumed;	// IMP=0x0000000000013e12
- (void)_appSuspended;	// IMP=0x0000000000013dfe
- (void)removeFromSuperview;	// IMP=0x0000000000013da2
- (void)_activateSounds:(_Bool)arg1;	// IMP=0x0000000000013bee
- (void)dealloc;	// IMP=0x0000000000013a68
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001393d
- (long long)indexForHighlightedKey;	// IMP=0x0000000000013761
- (void)highlightKeyAtIndex:(long long)arg1;	// IMP=0x00000000000136ae
- (void)performTapActionCancelForHighlightedKey;	// IMP=0x000000000001364a
- (void)performTapActionEndForHighlightedKey;	// IMP=0x0000000000013587
- (void)performTapActionDownForHighlightedKey;	// IMP=0x0000000000013477

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
