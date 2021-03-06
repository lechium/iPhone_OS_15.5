//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAMSemanticStyle, NSNumberFormatter, UILabel;

@interface CAMSemanticStyleDetailView : UIView
{
    CAMSemanticStyle *_semanticStyle;	// 8 = 0x8
    UILabel *__styleTitleLabel;	// 16 = 0x10
    UILabel *__styleDescriptionLabel;	// 24 = 0x18
    UILabel *__toneTitleLabel;	// 32 = 0x20
    UILabel *__warmthTitleLabel;	// 40 = 0x28
    UILabel *__toneValueLabel;	// 48 = 0x30
    UILabel *__warmthValueLabel;	// 56 = 0x38
    NSNumberFormatter *__integerFormatter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000100ec0
@property(readonly, nonatomic) NSNumberFormatter *_integerFormatter; // @synthesize _integerFormatter=__integerFormatter;
@property(readonly, nonatomic) UILabel *_warmthValueLabel; // @synthesize _warmthValueLabel=__warmthValueLabel;
@property(readonly, nonatomic) UILabel *_toneValueLabel; // @synthesize _toneValueLabel=__toneValueLabel;
@property(readonly, nonatomic) UILabel *_warmthTitleLabel; // @synthesize _warmthTitleLabel=__warmthTitleLabel;
@property(readonly, nonatomic) UILabel *_toneTitleLabel; // @synthesize _toneTitleLabel=__toneTitleLabel;
@property(readonly, nonatomic) UILabel *_styleDescriptionLabel; // @synthesize _styleDescriptionLabel=__styleDescriptionLabel;
@property(readonly, nonatomic) UILabel *_styleTitleLabel; // @synthesize _styleTitleLabel=__styleTitleLabel;
@property(retain, nonatomic) CAMSemanticStyle *semanticStyle; // @synthesize semanticStyle=_semanticStyle;
- (id)_descriptionForSemanticStylePreset:(long long)arg1;	// IMP=0x0000000000100dc0
- (void)_updateTextForCurrentStyle;	// IMP=0x0000000000100911
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ff8bc

@end

