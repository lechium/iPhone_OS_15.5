//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FocusUI/FCUIContentSizeCategoryAdjusting-Protocol.h>

@class NSString, UILabel, _FCUIAddActivityControl;

@interface FCUIAddActivityFooterView : UIView <FCUIContentSizeCategoryAdjusting>
{
    _FCUIAddActivityControl *_addActivityControl;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    _Bool _adjustsFontForContentSizeCategory;	// 24 = 0x18
    NSString *_preferredContentSizeCategory;	// 32 = 0x20
}

+ (id)_preferredFont:(_Bool)arg1 textStyle:(id)arg2 weight:(double)arg3;	// IMP=0x000000000001ea3c
- (void).cxx_destruct;	// IMP=0x000000000001ef56
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_configureActivityTitleLabelIfNecessaryWithTitle:(id)arg1;	// IMP=0x000000000001ed56
- (void)_updateTextAttributesIfNecessary;	// IMP=0x000000000001ed1f
- (void)_updateTextAttributes;	// IMP=0x000000000001ecaa
- (void)_setNeedsTextAttributesUpdate;	// IMP=0x000000000001ec72
- (_Bool)_needsTextAttributesUpdate;	// IMP=0x000000000001ec5d
- (void)_updateTextAttributesForTitleLabel;	// IMP=0x000000000001ebc8
- (void)_configureAddActivityControlIfNecessaryWithAction:(id)arg1;	// IMP=0x000000000001e9a0
- (void)_layoutSubviewsInBounds:(struct CGRect)arg1 measuringOnly:(out struct CGSize *)arg2;	// IMP=0x000000000001e7b2
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x000000000001e75a
- (void)layoutSubviews;	// IMP=0x000000000001e676
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001e5e7
- (id)initWithAction:(id)arg1;	// IMP=0x000000000001e537

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

