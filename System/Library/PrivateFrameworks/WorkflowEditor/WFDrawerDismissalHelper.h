//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScrollView, WFDrawerDismissalPanMediator;
@protocol WFDrawerDismissalHelperDelegate;

@interface WFDrawerDismissalHelper : NSObject
{
    _Bool _didDismiss;	// 8 = 0x8
    id <WFDrawerDismissalHelperDelegate> _delegate;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    NSHashTable *_activeGestureRecognizers;	// 32 = 0x20
    WFDrawerDismissalPanMediator *_panMediator;	// 40 = 0x28
    double _dismissalRectTopEdge;	// 48 = 0x30
    double _currentInsideness;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002dd96b
@property(nonatomic) double currentInsideness; // @synthesize currentInsideness=_currentInsideness;
@property(nonatomic) double dismissalRectTopEdge; // @synthesize dismissalRectTopEdge=_dismissalRectTopEdge;
@property(nonatomic) _Bool didDismiss; // @synthesize didDismiss=_didDismiss;
@property(retain, nonatomic) WFDrawerDismissalPanMediator *panMediator; // @synthesize panMediator=_panMediator;
@property(retain, nonatomic) NSHashTable *activeGestureRecognizers; // @synthesize activeGestureRecognizers=_activeGestureRecognizers;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WFDrawerDismissalHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissCardWithPanGestureRecognizer:(id)arg1;	// IMP=0x00000000002dd788
- (void)dismissCardWithVelocity:(double)arg1;	// IMP=0x00000000002dd6bf
- (double)insidenessForGestureRecognizer:(id)arg1;	// IMP=0x00000000002dd58e
- (void)panGestureDidChange:(id)arg1;	// IMP=0x00000000002dd505
- (void)panGestureRecognizerDidEnd:(id)arg1;	// IMP=0x00000000002dd42a
- (void)panGestureRecognizerDidBegin:(id)arg1;	// IMP=0x00000000002dd301
- (void)handlePanGesture:(id)arg1;	// IMP=0x00000000002dd2a9
- (void)dealloc;	// IMP=0x00000000002dd230
- (id)initWithScrollView:(id)arg1;	// IMP=0x00000000002dd0c7

@end

