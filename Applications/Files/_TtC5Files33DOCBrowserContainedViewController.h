//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, _TtC5Files18DOCDocumentManager;
@protocol _TtP5Files34DOCBrowserContainedActionReporting_;

@interface _TtC5Files33DOCBrowserContainedViewController : UIViewController
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *eventReporting;	// 16 = 0x10
    MISSING_TYPE *viewReusing;	// 32 = 0x20
    MISSING_TYPE *actionReporting;	// 48 = 0x30
    MISSING_TYPE *displayMenuDelegate;	// 56 = 0x38
    MISSING_TYPE *needsOverlayUpdateWithAnimation;	// 72 = 0x48
    MISSING_TYPE *documentManager;	// 80 = 0x50
    MISSING_TYPE *allowsPickingMultipleItems;	// 88 = 0x58
    MISSING_TYPE *actionManager;	// 96 = 0x60
    MISSING_TYPE *overlayUpdateDisabledAssertions;	// 104 = 0x68
    MISSING_TYPE *containerNavigationItem;	// 112 = 0x70
    MISSING_TYPE *additionalLeadingNavigationBarButtonItems;	// 120 = 0x78
    MISSING_TYPE *additionalTrailingNavigationBarButtonItems;	// 128 = 0x80
    MISSING_TYPE *isUserInteractionEnabled;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0040000000113340
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001132e0
- (void)effectiveAppearanceDidChange:(id)arg1;	// IMP=0x0010000000113210
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001131c0
- (void)viewDidLoad;	// IMP=0x0010000000113080
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000113050
@property(nonatomic, copy) NSArray *additionalTrailingNavigationBarButtonItems;
@property(nonatomic, copy) NSArray *additionalLeadingNavigationBarButtonItems;
@property(nonatomic) _Bool allowsPickingMultipleItems; // @synthesize allowsPickingMultipleItems;
@property(nonatomic, readonly) _TtC5Files18DOCDocumentManager *documentManager; // @synthesize documentManager;
@property(nonatomic) __weak id <_TtP5Files34DOCBrowserContainedActionReporting_> actionReporting; // @synthesize actionReporting;

@end
