//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ToneKit/CAAnimationDelegate-Protocol.h>

@class CAAnimation, NSMutableArray, NSMutableDictionary, NSString;
@protocol NSCopying, TKVibrationRecorderStyleProvider;

@interface TKVibrationRecorderRippleView : UIView <CAAnimationDelegate>
{
    id <TKVibrationRecorderStyleProvider> _styleProvider;	// 8 = 0x8
    struct CGPoint _currentTouchLocation;	// 16 = 0x10
    double _currentTouchStartTime;	// 32 = 0x20
    unsigned long long _numberOfRipplesForCurrentTouch;	// 40 = 0x28
    _Bool _isTrackingTouch;	// 48 = 0x30
    NSMutableArray *_recentTouchesContextQueue;	// 56 = 0x38
    NSMutableArray *_reusableTouchContexts;	// 64 = 0x40
    double _currentSpeedCoefficient;	// 72 = 0x48
    _Bool _needsCurrentSpeedRefresh;	// 80 = 0x50
    _Bool _isAnimating;	// 81 = 0x51
    id <NSCopying> _displayLinkManagerObserverToken;	// 88 = 0x58
    NSMutableArray *_ringLayersQueue;	// 96 = 0x60
    NSMutableArray *_reusableRingLayers;	// 104 = 0x68
    NSMutableDictionary *_ringLayersByIdentifiers;	// 112 = 0x70
    unsigned long long _lastRingLayerIdentifier;	// 120 = 0x78
    CAAnimation *_ringEnlargementAnimation;	// 128 = 0x80
    double _fingerStillSpeed;	// 136 = 0x88
    double _fingerMovingSpeed;	// 144 = 0x90
    double _firstRippleInitialRadius;	// 152 = 0x98
    double _fadeOutRadius;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000028529
@property(nonatomic) double fadeOutRadius; // @synthesize fadeOutRadius=_fadeOutRadius;
@property(nonatomic) double firstRippleInitialRadius; // @synthesize firstRippleInitialRadius=_firstRippleInitialRadius;
@property(nonatomic) double fingerMovingSpeed; // @synthesize fingerMovingSpeed=_fingerMovingSpeed;
@property(nonatomic) double fingerStillSpeed; // @synthesize fingerStillSpeed=_fingerStillSpeed;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000284ab
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002844f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000283f3
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000028397
- (void)_touchEndedAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000028386
- (void)_touchMovedToLocation:(struct CGPoint)arg1;	// IMP=0x000000000002836e
- (void)_touchBeganAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000000282e5
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000281cf
- (void)layoutSubviews;	// IMP=0x0000000000027f85
- (void)_updateRingEnlargementAnimation;	// IMP=0x0000000000027cfc
- (void)_enqueueReusableRingLayer:(id)arg1;	// IMP=0x0000000000027bdc
- (id)_reusableRingLayer;	// IMP=0x0000000000027b6c
- (void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(struct CGPoint)arg2 speed:(double)arg3;	// IMP=0x0000000000027978
- (void)_stopAnimation;	// IMP=0x00000000000278ef
- (void)_startAnimation;	// IMP=0x0000000000027820
- (void)_enqueueReusableTouchContextObject:(id)arg1;	// IMP=0x00000000000277b8
- (id)_reusableTouchContextObject;	// IMP=0x000000000002775e
- (double)_currentSpeed;	// IMP=0x0000000000027425
- (void)_refresh:(id)arg1;	// IMP=0x0000000000026f51
@property(readonly, nonatomic, getter=_isTouchDown) _Bool _touchDown;
- (void)dealloc;	// IMP=0x0000000000026e82
- (id)initWithStyleProvider:(id)arg1;	// IMP=0x0000000000026c02
- (id)init;	// IMP=0x0000000000026bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

