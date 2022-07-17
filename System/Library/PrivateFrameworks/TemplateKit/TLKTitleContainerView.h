//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUIContainerBoxView, TLKImageView, TLKLabel, TLKRichTextField;

@interface TLKTitleContainerView
{
    TLKRichTextField *_titleField;	// 8 = 0x8
    TLKLabel *_secondaryLabel;	// 16 = 0x10
    NUIContainerBoxView *_secondaryImageViewBoxView;	// 24 = 0x18
    TLKImageView *_secondaryImageView;	// 32 = 0x20
}

+ (_Bool)hasNonBoldFormattingInRichText:(id)arg1;	// IMP=0x00000000000354f1
- (void).cxx_destruct;	// IMP=0x00000000000358f4
@property(retain, nonatomic) TLKImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property(retain, nonatomic) NUIContainerBoxView *secondaryImageViewBoxView; // @synthesize secondaryImageViewBoxView=_secondaryImageViewBoxView;
@property(retain, nonatomic) TLKLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) TLKRichTextField *titleField; // @synthesize titleField=_titleField;
- (id)titleLabel;	// IMP=0x0000000000035810
- (id)secondaryTitleLabelString;	// IMP=0x00000000000357c0
- (id)titleLabelString;	// IMP=0x0000000000035746
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000356f6
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000000356a6
- (id)titleFont;	// IMP=0x0000000000035656
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(_Bool)arg4 useCompactMode:(_Bool)arg5 truncateMiddle:(_Bool)arg6;	// IMP=0x00000000000349c9
- (id)init;	// IMP=0x00000000000348b0

@end
