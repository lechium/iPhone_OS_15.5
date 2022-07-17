//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, PXContextualNotification, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow, _PXContextualNotificationCenterUpdatingView;

@interface PXContextualNotificationCenter : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableSet *_contextualNotifications;	// 8 = 0x8
    NSMutableSet *_contextualNotificationsNeedingUpdate;	// 16 = 0x10
    _PXContextualNotificationCenterUpdatingView *_containerView;	// 24 = 0x18
    UITapGestureRecognizer *_tapGestureRecognizer;	// 32 = 0x20
    UIPanGestureRecognizer *_panGestureRecognizer;	// 40 = 0x28
    PXContextualNotification *_pannedContextualNotification;	// 48 = 0x30
    UIWindow *_window;	// 56 = 0x38
}

+ (id)defaultCenter;	// IMP=0x000000000065b72a
- (void).cxx_destruct;	// IMP=0x000000000065b22d
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) PXContextualNotification *pannedContextualNotification; // @synthesize pannedContextualNotification=_pannedContextualNotification;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) _PXContextualNotificationCenterUpdatingView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) NSMutableSet *contextualNotificationsNeedingUpdate; // @synthesize contextualNotificationsNeedingUpdate=_contextualNotificationsNeedingUpdate;
@property(readonly, nonatomic) NSMutableSet *contextualNotifications; // @synthesize contextualNotifications=_contextualNotifications;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000065b0f1
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000065b02d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000065ae53
- (id)_contextualNotificationAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2 isInsideDismissArea:(_Bool *)arg3 isInsidePassthroughArea:(_Bool *)arg4;	// IMP=0x000000000065aa59
- (void)_handlePanGestureRecognizer:(id)arg1;	// IMP=0x000000000065a716
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x000000000065a625
- (void)_updateAppearanceStateForContextualNotification:(id)arg1;	// IMP=0x000000000065a4e5
- (void)updateContextualNotificationsIfNeeded;	// IMP=0x0000000000659571
- (void)_updateContainerView;	// IMP=0x0000000000659255
- (void)invalidateContextualNotification:(id)arg1;	// IMP=0x000000000065917d
- (id)initWithWindow:(id)arg1;	// IMP=0x00000000006590e0
- (id)init;	// IMP=0x0000000000659066

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
