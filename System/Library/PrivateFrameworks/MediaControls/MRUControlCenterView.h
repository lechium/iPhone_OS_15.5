//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUControlCenterButton, MRUVisualStylingProvider, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface MRUControlCenterView : UIView
{
    _Bool _transitioning;	// 8 = 0x8
    _Bool _showMoreButton;	// 9 = 0x9
    _Bool _showAlertView;	// 10 = 0xa
    UIView *_contentView;	// 16 = 0x10
    UIView *_alertView;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    UICollectionViewFlowLayout *_collectionViewLayout;	// 48 = 0x30
    MRUControlCenterButton *_moreButton;	// 56 = 0x38
    MRUVisualStylingProvider *_stylingProvider;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    double _cornerRadius;	// 80 = 0x50
    UIView *_materialView;	// 88 = 0x58
    struct CGSize _forcedContentSize;	// 96 = 0x60
    struct CGRect _transitionFrame;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000005d1f7
@property(retain, nonatomic) UIView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) struct CGSize forcedContentSize; // @synthesize forcedContentSize=_forcedContentSize;
@property(nonatomic) _Bool showAlertView; // @synthesize showAlertView=_showAlertView;
@property(nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect transitionFrame; // @synthesize transitionFrame=_transitionFrame;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRUControlCenterButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)updateVisibility;	// IMP=0x000000000005cec0
- (void)updateCollectionViewContentInset;	// IMP=0x000000000005cd1e
- (void)setStylingProvider:(id)arg1;	// IMP=0x000000000005ca0f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000005c95b
- (void)layoutSubviewsHorizontal;	// IMP=0x000000000005c3c4
- (void)layoutSubviewsIPad;	// IMP=0x000000000005be86
- (void)layoutSubviewsVertical;	// IMP=0x000000000005b776
- (void)layoutSubviews;	// IMP=0x000000000005b4a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005b1ea

@end

