//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class CLKFont, NSArray, NSLayoutConstraint, NSString, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextThumbnailCell <CLKMonochromeFilterProvider>
{
    UILayoutGuide *_labelLayoutGuide;	// 8 = 0x8
    UILayoutGuide *_imageLayoutGuide;	// 16 = 0x10
    NTKUpNextImageView *_imageView;	// 24 = 0x18
    NTKColoringLabel *_headerLabel;	// 32 = 0x20
    NTKColoringLabel *_descriptionLine1Label;	// 40 = 0x28
    NTKColoringLabel *_descriptionLine2Label;	// 48 = 0x30
    NTKColoringLabel *_descriptionLine3Label;	// 56 = 0x38
    CLKFont *_standardFont;	// 64 = 0x40
    CLKFont *_italicFont;	// 72 = 0x48
    CLKFont *_boldFont;	// 80 = 0x50
    NSArray *_withHeaderConstraints;	// 88 = 0x58
    NSArray *_withoutHeaderConstraints;	// 96 = 0x60
    NSArray *_withDescription2Constraints;	// 104 = 0x68
    NSArray *_withoutDescription2Constraints;	// 112 = 0x70
    NSArray *_withDescription3Constraints;	// 120 = 0x78
    NSArray *_withoutDescription3Constraints;	// 128 = 0x80
    NSLayoutConstraint *_imageLayoutGuideWidthConstraint;	// 136 = 0x88
    NSLayoutConstraint *_imageLayoutGuideHeightConstraint;	// 144 = 0x90
    _Bool _showingHeader;	// 152 = 0x98
    _Bool _showingThirdLine;	// 153 = 0x99
    _Bool _showingSmallThumbnail;	// 154 = 0x9a
}

+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;	// IMP=0x00000000001f48b4
- (void).cxx_destruct;	// IMP=0x00000000001f7fc9
- (void)updateMonochromeColor;	// IMP=0x00000000001f7cc5
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x00000000001f7891
- (void)prepareForReuse;	// IMP=0x00000000001f7763
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;	// IMP=0x00000000001f76da
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;	// IMP=0x00000000001f763f
- (id)filterForView:(id)arg1 style:(long long)arg2;	// IMP=0x00000000001f75ae
- (void)setPaused:(_Bool)arg1;	// IMP=0x00000000001f747e
- (void)configureWithContent:(id)arg1;	// IMP=0x00000000001f6f0c
- (void)updateConstraints;	// IMP=0x00000000001f6918
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f4a7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

