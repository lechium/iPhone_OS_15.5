//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

#import <LoginUILogViewer/UICollectionViewDataSource-Protocol.h>
#import <LoginUILogViewer/UICollectionViewDelegate-Protocol.h>
#import <LoginUILogViewer/UIGestureRecognizerDelegate-Protocol.h>

@class LUILogLocatorView, LUILogOptionsView, NSArray, NSString, UIActivityIndicatorView, UILabel, UIPanGestureRecognizer, UITextView, UIView;
@protocol LUILogContentViewControllerDelegate;

@interface LUILogContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    UITextView *_textView;	// 8 = 0x8
    id <LUILogContentViewControllerDelegate> _delegate;	// 16 = 0x10
    LUILogOptionsView *_logOptionsView;	// 24 = 0x18
    LUILogLocatorView *_logLocatorView;	// 32 = 0x20
    UIActivityIndicatorView *_spinner;	// 40 = 0x28
    NSArray *_screenshotItems;	// 48 = 0x30
    UIView *_textViewHolderView;	// 56 = 0x38
    UIPanGestureRecognizer *_panGesture;	// 64 = 0x40
    UILabel *_scrollIndicatorView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000cf5d
@property(retain, nonatomic) UILabel *scrollIndicatorView; // @synthesize scrollIndicatorView=_scrollIndicatorView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIView *textViewHolderView; // @synthesize textViewHolderView=_textViewHolderView;
@property(retain, nonatomic) NSArray *screenshotItems; // @synthesize screenshotItems=_screenshotItems;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) LUILogLocatorView *logLocatorView; // @synthesize logLocatorView=_logLocatorView;
@property(retain, nonatomic) LUILogOptionsView *logOptionsView; // @synthesize logOptionsView=_logOptionsView;
@property(nonatomic) __weak id <LUILogContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000ce25
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000000cdfb
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000000cded
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000000cddc
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000000ccd8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000000c914
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000000c8d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000c7c5
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000000c62d
- (void)handlePan:(id)arg1;	// IMP=0x000000000000c024
- (void)downArrowButtonTapped:(id)arg1;	// IMP=0x000000000000bf83
- (void)upArrowButtonTapped:(id)arg1;	// IMP=0x000000000000bf42
- (void)screenshotButtonTapped:(id)arg1;	// IMP=0x000000000000be99
- (void)logOptionButtonTapped:(id)arg1;	// IMP=0x000000000000bc82
- (void)_applyScreenShotAnimation;	// IMP=0x000000000000bb3b
- (struct _NSRange)_visibleRangeOfTextView:(id)arg1;	// IMP=0x000000000000b9a5
- (id)_generateScreenshotItem;	// IMP=0x000000000000b827
- (void)clearScreenshots;	// IMP=0x000000000000b80e
- (id)_dateWithPercentage:(double)arg1;	// IMP=0x000000000000b5d4
- (id)_createLogLocatorView;	// IMP=0x000000000000b534
- (id)_createLogTextView;	// IMP=0x000000000000b447
- (id)_createLogOptionsView;	// IMP=0x000000000000b42e
- (void)showSpinner:(_Bool)arg1;	// IMP=0x000000000000b3d4
- (void)enableTimeConsumingOptions:(_Bool)arg1;	// IMP=0x000000000000b29d
- (void)showLogTextView;	// IMP=0x000000000000b1e2
- (void)showLogOptionsView;	// IMP=0x000000000000b12c
- (void)_setupTextViewGesture;	// IMP=0x000000000000b047
- (void)_setupButtonActions;	// IMP=0x000000000000ad31
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000a654
- (void)loadView;	// IMP=0x000000000000a380
- (void)dealloc;	// IMP=0x000000000000a2d8
- (void)viewDidLoad;	// IMP=0x000000000000a1c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

