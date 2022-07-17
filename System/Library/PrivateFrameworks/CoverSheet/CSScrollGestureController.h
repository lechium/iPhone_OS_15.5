//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSEventHandling-Protocol.h>
#import <CoverSheet/UIGestureRecognizerDelegate-Protocol.h>

@class CSHorizontalScrollFailureRecognizer, NSString, UIGestureRecognizer, UIScrollView, UIView;
@protocol CSScrollGestureControllerDelegate, CSScrollableView;

@interface CSScrollGestureController : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding, CSEventHandling>
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UIView<CSScrollableView> *_scrollableView;	// 16 = 0x10
    long long _scrollingStrategy;	// 24 = 0x18
    UIGestureRecognizer *_scrollViewGestureRecognizer;	// 32 = 0x20
    id <CSScrollGestureControllerDelegate> _delegate;	// 40 = 0x28
    CSHorizontalScrollFailureRecognizer *_horizontalFailureGestureRecognizer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001212e9
@property(retain, nonatomic) CSHorizontalScrollFailureRecognizer *horizontalFailureGestureRecognizer; // @synthesize horizontalFailureGestureRecognizer=_horizontalFailureGestureRecognizer;
@property(nonatomic) __weak id <CSScrollGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
- (_Bool)_shouldAllowScrollForScrollingStrategy:(long long)arg1;	// IMP=0x0000000000121290
- (_Bool)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)arg1;	// IMP=0x0000000000121283
- (void)_updateForScrollingStrategy:(long long)arg1 fromScrollingStrategy:(long long)arg2;	// IMP=0x00000000001211c8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000012114f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001210ff
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000121086
- (id)succinctDescription;	// IMP=0x0000000000121036
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1;	// IMP=0x0000000000120efc
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000120ef4
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000120eec
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000120ee4
- (_Bool)wouldHandleButtonEvent:(id)arg1;	// IMP=0x0000000000120edc
- (_Bool)handleEvent:(id)arg1;	// IMP=0x0000000000120e64
- (void)conformsToCSEventHandling;	// IMP=0x0000000000120e5e
- (void)invalidate;	// IMP=0x0000000000120e14
- (void)dealloc;	// IMP=0x0000000000120c15
- (id)initWithScrollableView:(id)arg1;	// IMP=0x0000000000120ac8

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
