//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAccessibilityHUDGestureDelegateInternal-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UIGestureRecognizer, UIView;
@protocol UILargeContentViewerInteractionDelegate;

@interface UILargeContentViewerInteraction : NSObject <UIAccessibilityHUDGestureDelegateInternal, UIInteraction>
{
    UIView *_view;	// 8 = 0x8
    id <UILargeContentViewerInteractionDelegate> _delegate;	// 16 = 0x10
}

+ (_Bool)isEnabled;	// IMP=0x00000000010eb872
+ (void)initialize;	// IMP=0x00000000010eb590
- (void).cxx_destruct;	// IMP=0x00000000010ebeae
@property(readonly, nonatomic) __weak id <UILargeContentViewerInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewControllerForAccessibilityHUDGestureManager:(id)arg1;	// IMP=0x00000000010ebd99
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000010ebd91
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000010ebc13
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;	// IMP=0x00000000010ebb12
- (id)_itemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000010eb9f7
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000010eb95d
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000010eb894
@property(readonly, nonatomic) __weak UIView *view;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
- (id)init;	// IMP=0x00000000010eb7e4
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000010eb780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

