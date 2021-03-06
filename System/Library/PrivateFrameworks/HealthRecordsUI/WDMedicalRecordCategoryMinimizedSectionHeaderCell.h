//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKGradient, HKGradientView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell
{
    HKGradientView *_backgroundGradientView;	// 128 = 0x80
    NSLayoutConstraint *_heightConstraint;	// 136 = 0x88
}

+ (double)_pillBackgroundViewHeightConstraint;	// IMP=0x0000000000028111
+ (id)_titleLabelFont;	// IMP=0x00000000000280e9
- (void).cxx_destruct;	// IMP=0x000000000002833a
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) HKGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000281f6
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000002817f
- (double)_cornerRadius;	// IMP=0x0000000000028171
@property(retain, nonatomic) HKGradient *gradient;
- (void)setupSubviews;	// IMP=0x0000000000027d9f

@end

