//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HULinkedApplicationRatingView, NSArray, NSString, NSURL, UIButton, UIImageView, UILabel;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationView : UIView <HUCellProtocol>
{
    _Bool _isInstalled;	// 8 = 0x8
    HFItem *_item;	// 16 = 0x10
    UIImageView *_iconView;	// 24 = 0x18
    UILabel *_nameLabel;	// 32 = 0x20
    UILabel *_publisherLabel;	// 40 = 0x28
    HULinkedApplicationRatingView *_ratingView;	// 48 = 0x30
    UILabel *_priceLabel;	// 56 = 0x38
    UILabel *_installedLabel;	// 64 = 0x40
    UIButton *_viewButton;	// 72 = 0x48
    NSString *_bundleID;	// 80 = 0x50
    NSURL *_storeURL;	// 88 = 0x58
    NSArray *_currentConstraints;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000006589b
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(retain, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UILabel *installedLabel; // @synthesize installedLabel=_installedLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) HULinkedApplicationRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)_viewButtonTapped:(id)arg1;	// IMP=0x00000000000655e3
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x0000000000065209
- (void)updateConstraints;	// IMP=0x000000000006438f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000063c2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
