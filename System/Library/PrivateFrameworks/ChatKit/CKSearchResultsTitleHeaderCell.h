//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <ChatKit/CKSearchResultSupplementryCell-Protocol.h>

@class CALayer, NSString, UIButton, UILabel, UIVisualEffectView;
@protocol CKSearchResultsTitleHeaderCellDelegate;

@interface CKSearchResultsTitleHeaderCell : UICollectionReusableView <CKSearchResultSupplementryCell>
{
    _Bool _useMacSidebarVisualEffectView;	// 8 = 0x8
    id <CKSearchResultsTitleHeaderCellDelegate> _delegate;	// 16 = 0x10
    unsigned long long _sectionIndex;	// 24 = 0x18
    UIButton *_showAllButton;	// 32 = 0x20
    UILabel *_sectionTitle;	// 40 = 0x28
    CALayer *_topHairline;	// 48 = 0x30
    double _titleTopPadding;	// 56 = 0x38
    double _titleBottomPadding;	// 64 = 0x40
    UIVisualEffectView *_macBackgroundVisualEffectView;	// 72 = 0x48
    struct UIEdgeInsets marginInsets;	// 80 = 0x50
}

+ (double)desiredZPosition;	// IMP=0x00000000001e5aff
+ (id)reuseIdentifier;	// IMP=0x00000000001e5af2
+ (id)supplementaryViewType;	// IMP=0x00000000001e5ae5
- (void).cxx_destruct;	// IMP=0x00000000001e6f11
@property(retain, nonatomic) UIVisualEffectView *macBackgroundVisualEffectView; // @synthesize macBackgroundVisualEffectView=_macBackgroundVisualEffectView;
@property(nonatomic) double titleBottomPadding; // @synthesize titleBottomPadding=_titleBottomPadding;
@property(nonatomic) double titleTopPadding; // @synthesize titleTopPadding=_titleTopPadding;
@property(retain, nonatomic) CALayer *topHairline; // @synthesize topHairline=_topHairline;
@property(retain, nonatomic) UILabel *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) _Bool useMacSidebarVisualEffectView; // @synthesize useMacSidebarVisualEffectView=_useMacSidebarVisualEffectView;
@property(retain, nonatomic) UIButton *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) __weak id <CKSearchResultsTitleHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)_showAllButtonTapped:(id)arg1;	// IMP=0x00000000001e6d4c
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000001e6b6b
- (void)setTitle:(id)arg1;	// IMP=0x00000000001e6a7a
- (void)prepareForReuse;	// IMP=0x00000000001e69fb
- (void)layoutSubviews;	// IMP=0x00000000001e5ef7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e5b08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

