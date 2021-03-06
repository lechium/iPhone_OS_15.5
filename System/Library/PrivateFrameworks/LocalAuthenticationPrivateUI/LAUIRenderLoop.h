//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol LAUIRenderLoopDelegate;

__attribute__((visibility("hidden")))
@interface LAUIRenderLoop : NSObject
{
    CADisplayLink *_display_link;	// 8 = 0x8
    _Bool _effective_paused;	// 16 = 0x10
    _Bool _background;	// 17 = 0x11
    _Bool _in_application_context;	// 18 = 0x12
    _Bool _invalidated;	// 19 = 0x13
    _Bool _drawing;	// 20 = 0x14
    _Bool _paused;	// 21 = 0x15
    long long _preferred_fps;	// 24 = 0x18
    id <LAUIRenderLoopDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014046
@property(nonatomic) __weak id <LAUIRenderLoopDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic, getter=isDrawing) _Bool drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferred_fps;
@property(nonatomic, getter=isInApplicationContext) _Bool inApplicationContext; // @synthesize inApplicationContext=_in_application_context;
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000000013f28
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000013f0b
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000013e42
- (void)_updateEffectivePausedState;	// IMP=0x0000000000013be5
- (_Bool)_preferredPauseState;	// IMP=0x0000000000013bdd
- (void)_didDraw;	// IMP=0x0000000000013bd7
- (void)_willDraw;	// IMP=0x0000000000013bd1
- (void)_drawAtTime:(double)arg1;	// IMP=0x0000000000013b21
- (void)_drawWithDisplayLink:(id)arg1;	// IMP=0x0000000000013abf
- (void)_didInvalidate;	// IMP=0x0000000000013a78
- (void)invalidate;	// IMP=0x0000000000013a5a
- (void)attachToScreen:(id)arg1;	// IMP=0x00000000000138fb
- (void)dealloc;	// IMP=0x0000000000013821
- (id)init;	// IMP=0x00000000000137e1

@end

