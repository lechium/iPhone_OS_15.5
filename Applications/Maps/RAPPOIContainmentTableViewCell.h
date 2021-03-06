//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;
@protocol RAPPOIContainmentSeeMoreDelegate, RAPTwoLinesViewModel;

__attribute__((visibility("hidden")))
@interface RAPPOIContainmentTableViewCell
{
    UIImageView *_poiIconImageView;	// 8 = 0x8
    UILabel *_poiTitleLabel;	// 16 = 0x10
    UILabel *_localityDescriptionLabel;	// 24 = 0x18
    UIButton *_seePlaceButton;	// 32 = 0x20
    NSLayoutConstraint *_topToTitleConstraint;	// 40 = 0x28
    NSLayoutConstraint *_titleToSubtitleConstraint;	// 48 = 0x30
    NSLayoutConstraint *_subtitleToBottomConstraint;	// 56 = 0x38
    id <RAPTwoLinesViewModel> _viewModel;	// 64 = 0x40
    unsigned long long _muid;	// 72 = 0x48
    id <RAPPOIContainmentSeeMoreDelegate> _seeMoreDelegate;	// 80 = 0x50
}

+ (id)reuseIdentifier;	// IMP=0x0040000000a6a587
- (void).cxx_destruct;	// IMP=0x0020000000a6a600
@property(nonatomic) __weak id <RAPPOIContainmentSeeMoreDelegate> seeMoreDelegate; // @synthesize seeMoreDelegate=_seeMoreDelegate;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) id <RAPTwoLinesViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)prepareForReuse;	// IMP=0x0010000000a6a547
- (void)_updateContent;	// IMP=0x0010000000a6a46a
- (void)_seeMoreButtonPressed;	// IMP=0x0010000000a6a3a7
- (void)_contentSizeChanged;	// IMP=0x0010000000a6a1b4
- (void)_setupConstraints;	// IMP=0x0010000000a698b2
- (void)_setupSubviews;	// IMP=0x0010000000a693fd
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000a69348

@end

