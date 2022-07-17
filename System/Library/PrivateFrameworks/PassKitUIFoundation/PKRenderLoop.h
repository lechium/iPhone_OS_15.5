//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScreen;
@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject
{
    id <PKRenderLoopDelegate> _delegate;	// 8 = 0x8
    _Bool _drawing;	// 16 = 0x10
    _Bool _invalidated;	// 17 = 0x11
    CADisplayLink *_displayLink;	// 24 = 0x18
    _Bool _effectivePaused;	// 32 = 0x20
    _Bool _background;	// 33 = 0x21
    _Bool _delegateObservesForcingPause;	// 34 = 0x22
    _Bool _lastForcingPauseNotification;	// 35 = 0x23
    _Bool _inApplicationContext;	// 36 = 0x24
    _Bool _paused;	// 37 = 0x25
    _Bool _forcingPause;	// 38 = 0x26
    UIScreen *_screen;	// 40 = 0x28
    long long _preferredFramesPerSecond;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000066e2
@property(nonatomic) __weak id <PKRenderLoopDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isForcingPause) _Bool forcingPause; // @synthesize forcingPause=_forcingPause;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) _Bool inApplicationContext; // @synthesize inApplicationContext=_inApplicationContext;
@property(readonly, nonatomic, getter=isDrawing) _Bool drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000000000666d
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000000664f
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000006631
- (void)_updateEffectivePausedState;	// IMP=0x00000000000064ff
- (void)_updateApplicationState;	// IMP=0x00000000000063a2
- (void)_drawAtTime:(double)arg1;	// IMP=0x0000000000006309
- (void)_didDraw;	// IMP=0x0000000000006303
- (void)_willDraw;	// IMP=0x00000000000062fd
- (void)_drawWithDisplayLink:(id)arg1;	// IMP=0x0000000000006246
- (void)invalidate;	// IMP=0x00000000000061dc
- (_Bool)attachToScreen:(id)arg1;	// IMP=0x0000000000006055
- (void)dealloc;	// IMP=0x0000000000005fd3
- (id)init;	// IMP=0x0000000000005f75

@end
