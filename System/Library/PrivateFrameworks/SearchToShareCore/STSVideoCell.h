//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface STSVideoCell
{
    UIButton *_playButton;	// 8 = 0x8
    UIView *_footerContainer;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIImageView *_providerIconView;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UILabel *_providerLabel;	// 48 = 0x30
    UILabel *_durationLabel;	// 56 = 0x38
    NSMutableArray *_constraints;	// 64 = 0x40
    CDUnknownBlockType _playButtonAction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000c14a
@property(copy, nonatomic) CDUnknownBlockType playButtonAction; // @synthesize playButtonAction=_playButtonAction;
- (void)_updateHiddenViewsAnimated:(_Bool)arg1;	// IMP=0x000000000000c025
- (void)_didPressPlay;	// IMP=0x000000000000bfb4
@property(copy, nonatomic) NSString *duration;
@property(copy, nonatomic) NSString *providerName;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *providerIcon;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000be47
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000bcb9
- (void)updateConstraints;	// IMP=0x000000000000ba1a
- (double)imageAspectRatio;	// IMP=0x000000000000ba0c
- (void)layoutSubviews;	// IMP=0x000000000000b7b9
- (void)prepareForReuse;	// IMP=0x000000000000b776
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000b06b

@end
