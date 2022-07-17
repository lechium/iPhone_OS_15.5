//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIViewHost-Protocol.h>

@class NSMutableDictionary, NSString, UIKBRenderConfig, UIScreen;

__attribute__((visibility("hidden")))
@interface UIInputSetContainerView <_UIViewHost>
{
    UIKBRenderConfig *_renderConfig;	// 120 = 0x78
    NSMutableDictionary *_hostedViews;	// 128 = 0x80
    _Bool _disableGeometryObserverNotifications;	// 136 = 0x88
    struct CGPoint _offsetOrigin;	// 144 = 0x90
}

+ (_Bool)_notifyOnExplicitLayout;	// IMP=0x0000000000a4aad5
+ (_Bool)_shouldHitTestInputViewFirst;	// IMP=0x0000000000a4a7f8
@property(nonatomic) struct CGPoint offsetOrigin; // @synthesize offsetOrigin=_offsetOrigin;
- (_Bool)_isTransparentFocusRegion;	// IMP=0x0000000000a4aef4
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000000a4aeb3
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000a4ae55
- (_Bool)_disableGeometryObserverNotification;	// IMP=0x0000000000a4adde
- (void)performWithoutGeometryObserverNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a4adb8
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x0000000000a4ace8
- (void)didAddSubview:(id)arg1;	// IMP=0x0000000000a4ac5b
- (_Bool)hasHostedViews;	// IMP=0x0000000000a4ac37
- (void)addHostedView:(id)arg1 withViewRemovalHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a4ab08
@property(readonly, retain) UIScreen *hostingScreen;
- (void)_setAccessoryViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000a4aa64
- (struct CGRect)_accessoryViewFrame;	// IMP=0x0000000000a4aa0b
- (id)_inputWindowController;	// IMP=0x0000000000a4a9cc
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000a4a916
- (id)_inheritedRenderConfig;	// IMP=0x0000000000a4a905
- (void)dealloc;	// IMP=0x0000000000a4a8a1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a4a800

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
