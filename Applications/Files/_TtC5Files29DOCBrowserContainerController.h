//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, NSString, _TtC5Files33DOCBrowserContainedViewController;

@interface _TtC5Files29DOCBrowserContainerController : UIViewController
{
    MISSING_TYPE *dataSource;	// 8 = 0x8
    MISSING_TYPE *contentViewController;	// 24 = 0x18
    MISSING_TYPE *allowsPickingMultipleItems;	// 32 = 0x20
    MISSING_TYPE *viewControllerBecomingVisible;	// 40 = 0x28
    MISSING_TYPE *visibleViewController;	// 48 = 0x30
    MISSING_TYPE *state;	// 56 = 0x38
    MISSING_TYPE *queue;	// 64 = 0x40
    MISSING_TYPE *stateReporting;	// 72 = 0x48
    MISSING_TYPE *actionReporting;	// 88 = 0x58
    MISSING_TYPE *displayMenuDelegate;	// 96 = 0x60
    MISSING_TYPE *preventAppearanceForwarding;	// 112 = 0x70
    MISSING_TYPE *additionalLeadingNavigationBarButtonItems;	// 120 = 0x78
    MISSING_TYPE *additionalTrailingNavigationBarButtonItems;	// 128 = 0x80
    MISSING_TYPE *isUserInteractionEnabled;	// 136 = 0x88
    MISSING_TYPE *_containerNavigationItem;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00400000001bb870
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001bb800
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000001bb670
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001bb4c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001bb300
@property(nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00100000001bad80
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00100000001bac20
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001ba190
- (void)viewDidLoad;	// IMP=0x00100000001b8e50
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b8c60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001b8c10
- (void)activateContentViewController;	// IMP=0x00100000001b8ba0
@property(nonatomic, copy) NSArray *additionalTrailingNavigationBarButtonItems;
@property(nonatomic, copy) NSArray *additionalLeadingNavigationBarButtonItems;
@property(nonatomic) _Bool preventAppearanceForwarding; // @synthesize preventAppearanceForwarding;
@property(nonatomic) _Bool allowsPickingMultipleItems; // @synthesize allowsPickingMultipleItems;
@property(nonatomic, retain) _TtC5Files33DOCBrowserContainedViewController *contentViewController; // @synthesize contentViewController;

@end

