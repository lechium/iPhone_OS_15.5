//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, HUIconView, NSLayoutConstraint, NSString, UICellAccessoryCustomView, UIColor, UIView;
@protocol HUResizableCellDelegate;

@interface HUIconCollectionListCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _iconForegroundColorFollowsTintColor;	// 9 = 0x9
    _Bool _iconTintColorFollowsDisabledState;	// 10 = 0xa
    _Bool _separatorInsetLinesUpWithText;	// 11 = 0xb
    HFItem *_item;	// 16 = 0x10
    UIColor *_iconForegroundColor;	// 24 = 0x18
    double _iconAlpha;	// 32 = 0x20
    unsigned long long _iconSize;	// 40 = 0x28
    unsigned long long _iconDisplayStyle;	// 48 = 0x30
    HUIconView *_iconView;	// 56 = 0x38
    NSLayoutConstraint *_iconSizeConstraint;	// 64 = 0x40
    UIView *_iconContainerView;	// 72 = 0x48
    UICellAccessoryCustomView *_iconAccessoryView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000369497
@property(retain, nonatomic) UICellAccessoryCustomView *iconAccessoryView; // @synthesize iconAccessoryView=_iconAccessoryView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) NSLayoutConstraint *iconSizeConstraint; // @synthesize iconSizeConstraint=_iconSizeConstraint;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool separatorInsetLinesUpWithText; // @synthesize separatorInsetLinesUpWithText=_separatorInsetLinesUpWithText;
@property(nonatomic) _Bool iconTintColorFollowsDisabledState; // @synthesize iconTintColorFollowsDisabledState=_iconTintColorFollowsDisabledState;
@property(nonatomic) unsigned long long iconDisplayStyle; // @synthesize iconDisplayStyle=_iconDisplayStyle;
@property(nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double iconAlpha; // @synthesize iconAlpha=_iconAlpha;
@property(nonatomic) _Bool iconForegroundColorFollowsTintColor; // @synthesize iconForegroundColorFollowsTintColor=_iconForegroundColorFollowsTintColor;
@property(retain, nonatomic) UIColor *iconForegroundColor; // @synthesize iconForegroundColor=_iconForegroundColor;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)_updateIcon;	// IMP=0x0000000000369170
- (void)_createIconView;	// IMP=0x0000000000368c2f
- (id)_buildAccessories;	// IMP=0x0000000000368ba4
- (void)updateAccessories;	// IMP=0x0000000000368b58
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0000000000368aac
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000003689c0
@property(nonatomic) _Bool disableContinuousIconAnimation;
- (id)configurationState;	// IMP=0x0000000000368767
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003685b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

