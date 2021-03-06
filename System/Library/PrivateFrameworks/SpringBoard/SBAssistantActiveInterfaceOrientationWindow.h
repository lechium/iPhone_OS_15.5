//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAssistantRootViewController;

@interface SBAssistantActiveInterfaceOrientationWindow
{
    _Bool _touchesPassThroughToSpringBoard;	// 8 = 0x8
}

+ (id)_traitsArbiterOrientationActuationRole;	// IMP=0x0000000000690f0a
+ (_Bool)_isSecure;	// IMP=0x0000000000690e3f
+ (_Bool)sb_autorotates;	// IMP=0x0000000000690cbd
+ (id)defaultLayoutStrategy;	// IMP=0x0000000000690ca4
@property(nonatomic) _Bool touchesPassThroughToSpringBoard; // @synthesize touchesPassThroughToSpringBoard=_touchesPassThroughToSpringBoard;
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x0000000000690efa
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;	// IMP=0x0000000000690e47
- (_Bool)_canBecomeKeyWindow;	// IMP=0x0000000000690e37
- (_Bool)isOpaque;	// IMP=0x0000000000690e2f
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000690dd2
@property(readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController; // @dynamic assistantRootViewController;
- (id)initWithRole:(id)arg1 debugName:(id)arg2;	// IMP=0x0000000000690cd4

@end

