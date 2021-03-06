//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REUpNextImageView, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextLargeWithDetailTextCell
{
    UILayoutGuide *_contentLayoutGuide;	// 8 = 0x8
    REUpNextImageView *_bodyImage;	// 16 = 0x10
    UILabel *_headerLabel;	// 24 = 0x18
    UILabel *_bodyLabel;	// 32 = 0x20
    UILabel *_detail1Label;	// 40 = 0x28
    UILabel *_detail2Label;	// 48 = 0x30
    UIVisualEffectView *_headerEffectView;	// 56 = 0x38
    UIVisualEffectView *_bodyEffectView;	// 64 = 0x40
    UIVisualEffectView *_detail1EffectView;	// 72 = 0x48
    UIVisualEffectView *_detail2EffectView;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x0000000000008c3f
- (void).cxx_destruct;	// IMP=0x000000000000af92
- (void)configureWithContent:(id)arg1;	// IMP=0x000000000000ad4b
- (id)secondaryEffectViews;	// IMP=0x000000000000ac89
- (id)primaryEffectViews;	// IMP=0x000000000000ac10
- (void)defaultTextColorDidChange;	// IMP=0x000000000000ab0b
- (void)_updateHeaderColor;	// IMP=0x000000000000aa04
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000008d01

@end

