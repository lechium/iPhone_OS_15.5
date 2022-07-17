//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIContentView-Protocol.h>
#import <UIKitCore/_UIContentViewComponentDescribing-Protocol.h>

@class NSLayoutRect, NSString, UIImageView, UILabel, _UIBasicCellContentViewConfiguration, _UIContentViewEditingController;

@interface _UIBasicCellContentView <_UIContentViewComponentDescribing, _UIContentView>
{
    _UIBasicCellContentViewConfiguration *_animatingFromConfiguration;	// 120 = 0x78
    _UIBasicCellContentViewConfiguration *_animatingToConfiguration;	// 128 = 0x80
    double _preferredMaxLayoutWidth;	// 136 = 0x88
    _UIContentViewEditingController *_editingController;	// 144 = 0x90
    _UIBasicCellContentViewConfiguration *_configuration;	// 152 = 0x98
    UIImageView *_imageView;	// 160 = 0xa0
    UILabel *_textLabel;	// 168 = 0xa8
    CDUnknownBlockType _primaryTextFrameDidChangeHandler;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000011c104c
@property(copy, nonatomic, setter=_setPrimaryTextFrameDidChangeHandler:) CDUnknownBlockType _primaryTextFrameDidChangeHandler; // @synthesize _primaryTextFrameDidChangeHandler;
@property(readonly, nonatomic) struct CGRect _primaryTextLayoutFrame;
@property(readonly, nonatomic) NSLayoutRect *_primaryTextLayoutRect;
@property(readonly, nonatomic) _Bool _preventFocus;
- (_Bool)becomeFirstResponder;	// IMP=0x00000000011c0ebc
- (void)layoutSubviews;	// IMP=0x00000000011c05b9
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets)arg1;	// IMP=0x00000000011c0552
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000011c026c
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000011bfb46
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000011bfaf6
- (double)_preferredMaxLayoutWidth;	// IMP=0x00000000011bfad2
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;	// IMP=0x00000000011bfa53
- (void)_prepareForFirstIntrinsicContentSizeCalculation;	// IMP=0x00000000011bfa0f
- (_Bool)_needsDoubleUpdateConstraintsPass;	// IMP=0x00000000011bf981
- (double)_multilineContextWidth;	// IMP=0x00000000011bf973
- (void)_setMultilineContextWidth:(double)arg1;	// IMP=0x00000000011bf96d
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) _UIBasicCellContentViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) NSString *description;
- (id)_encodableSubviews;	// IMP=0x00000000011beecb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011bee4e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011becf9
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000011beb77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
