//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/UIPointerInteractionDelegate-Protocol.h>

@class NSMapTable, NSString, UIPointerInteraction, UIView, UIWindow;

@interface SBSystemPointerInteractionManager : NSObject <UIPointerInteractionDelegate>
{
    UIPointerInteraction *_pointerInteraction;	// 8 = 0x8
    NSMapTable *_registeredViewsToDelegates;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    UIView *_activePointerRegionView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000183e0b
@property(readonly, nonatomic) UIView *activePointerRegionView; // @synthesize activePointerRegionView=_activePointerRegionView;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000183ddd
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000183da8
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000183c76
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000183691
- (void)unregisterView:(id)arg1;	// IMP=0x000000000018367b
- (void)registerView:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000183581
- (id)initWithPointerInteractionWindow:(id)arg1;	// IMP=0x00000000001834a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
