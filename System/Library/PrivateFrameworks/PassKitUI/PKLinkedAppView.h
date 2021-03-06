//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSArray, NSString, NSURL, PKContinuousButton, PKLinkedAppUserRatingView, PKLinkedApplication, UIActivityIndicatorView, UIColor, UIImageView, UILabel;

@interface PKLinkedAppView <PKLinkedApplicationObserver>
{
    UIImageView *_iconView;	// 8 = 0x8
    UILabel *_appName;	// 16 = 0x10
    PKContinuousButton *_viewButton;	// 24 = 0x18
    UILabel *_appPublisher;	// 32 = 0x20
    PKLinkedAppUserRatingView *_userRatingView;	// 40 = 0x28
    UILabel *_price;	// 48 = 0x30
    UIActivityIndicatorView *_activityIndicator;	// 56 = 0x38
    UILabel *_loadingLabel;	// 64 = 0x40
    PKLinkedApplication *_linkedApplication;	// 72 = 0x48
    UIColor *_mainLabelColor;	// 80 = 0x50
    UIColor *_subTextLabelColor;	// 88 = 0x58
    UIColor *_buttonBackgroundColor;	// 96 = 0x60
    UIColor *_buttonTintColor;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000372797
@property(retain, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;
@property(retain, nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000003726ee
- (void)linkedApplicationDidChangeState:(id)arg1;	// IMP=0x0000000000372624
- (void)setPrice:(id)arg1;	// IMP=0x0000000000372514
- (void)setApplicationName:(id)arg1;	// IMP=0x0000000000372404
- (void)setApplicationIcon:(id)arg1;	// IMP=0x000000000037230b
- (void)setLoadingText:(id)arg1;	// IMP=0x00000000003721bb
@property(copy, nonatomic) NSURL *appLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs;
- (void)reloadApplicationStateIfNecessary;	// IMP=0x0000000000371f2f
- (void)_cleanupViews;	// IMP=0x0000000000371e80
- (void)_layoutLockupView;	// IMP=0x0000000000371125
- (void)_layoutNotAvailableView;	// IMP=0x0000000000371014
- (void)_layoutLoadingView;	// IMP=0x0000000000370b9d
- (void)layoutSubviews;	// IMP=0x0000000000370b37
- (void)didMoveToWindow;	// IMP=0x0000000000370ac1
- (void)dealloc;	// IMP=0x0000000000370a75
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000003708b3
- (id)initWithStoreIDs:(id)arg1 systemAppBundleIdentifiers:(id)arg2 appLaunchURL:(id)arg3 reuseIdentifier:(id)arg4;	// IMP=0x00000000003707e4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000003707c8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000370780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

