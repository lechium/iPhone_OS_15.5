//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIPanGestureRecognizer, UIView, _UIDynamicAnimationGroup;
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate>
{
    double _prevResizingOffset;	// 8 = 0x8
    double _resizingOffset;	// 16 = 0x10
    double _foregroundOpacity;	// 24 = 0x18
    _UIDynamicAnimationGroup *_resizingAnimationGroup;	// 32 = 0x20
    UIView *_grabber;	// 40 = 0x28
    UIColor *_grabberColor;	// 48 = 0x30
    _Bool _isResizing;	// 56 = 0x38
    id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;	// 64 = 0x40
    UIPanGestureRecognizer *_gestureRecognizer;	// 72 = 0x48
}

+ (double)savedResizingOffset;	// IMP=0x0000000001086738
- (void).cxx_destruct;	// IMP=0x00000000010874ee
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) double resizingOffset; // @synthesize resizingOffset=_resizingOffset;
@property(nonatomic) __weak id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(_Bool)arg2;	// IMP=0x0000000001087441
- (void)handleResizeGesture:(id)arg1;	// IMP=0x0000000001086d7e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000001086c4b
- (void)stopResizing;	// IMP=0x0000000001086c28
- (void)uninstallGestureRecognizers;	// IMP=0x0000000001086bb2
- (void)updateGestureRecognizers;	// IMP=0x0000000001086a44
- (void)dimKeys:(id)arg1;	// IMP=0x0000000001086849
- (void)setRenderConfig:(id)arg1;	// IMP=0x00000000010867cc
@property(readonly, nonatomic) _Bool isResizing;
- (void)saveResizingStopIndex:(unsigned long long)arg1;	// IMP=0x000000000108672b
- (void)reloadResizingOffset;	// IMP=0x00000000010866fc
- (void)updateGrabber;	// IMP=0x0000000001086418
- (id)init;	// IMP=0x00000000010863d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

