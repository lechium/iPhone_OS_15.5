//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AccessibilitySharedUISupport/UIGestureRecognizerDelegate-Protocol.h>
#import <AccessibilitySharedUISupport/UIScrollViewDelegate-Protocol.h>

@class NSString, UIPinchGestureRecognizer, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol AXSSImagePreviewViewControllerDelegate;

@interface AXSSImagePreviewViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _isManualZoomActive;	// 8 = 0x8
    id <AXSSImagePreviewViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_contentSnapshot;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 40 = 0x28
    UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 48 = 0x30
    UISwipeGestureRecognizer *_swipeGestureRecognizer;	// 56 = 0x38
    struct UIEdgeInsets _edgeInsets;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000007fa6
@property _Bool isManualZoomActive; // @synthesize isManualZoomActive=_isManualZoomActive;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentSnapshot; // @synthesize contentSnapshot=_contentSnapshot;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) __weak id <AXSSImagePreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_viewShouldExpand;	// IMP=0x0000000000007e21
- (void)_removeGestureRecognizers;	// IMP=0x0000000000007ca7
- (void)_addGestureRecognizers;	// IMP=0x0000000000007a29
- (void)_imagePreviewViewControllerSetupUI;	// IMP=0x0000000000007896
- (void)_stopScrollViewAnimations;	// IMP=0x000000000000782e
- (void)_zoomImage:(double)arg1 withContentOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000007686
- (void)_centerImageIfNeeded;	// IMP=0x000000000000751a
- (void)_zoomImageToBestScaleIfNeeded:(_Bool)arg1;	// IMP=0x000000000000728f
- (void)_fitImageIfNeeded:(_Bool)arg1;	// IMP=0x000000000000700c
- (struct CGSize)_scrollViewClippedSize;	// IMP=0x0000000000006f55
- (void)_toggleManualZoomMode;	// IMP=0x0000000000006ea2
- (_Bool)_isSnapshotViewAttached;	// IMP=0x0000000000006e3f
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000006e37
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000006e2f
- (void)_swipeGestureRecognized:(id)arg1;	// IMP=0x0000000000006da7
- (void)_pinchGestureRecognized:(id)arg1;	// IMP=0x0000000000006d0b
- (void)_doubleTapGestureRecognized:(id)arg1;	// IMP=0x0000000000006c83
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000006c12
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x0000000000006b7d
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x0000000000006ae1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000069c1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000006980
- (void)viewDidLoad;	// IMP=0x000000000000693f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000067d9
- (id)initWithContentSnapshot:(id)arg1;	// IMP=0x000000000000676d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

