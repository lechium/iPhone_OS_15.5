//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIButton;

__attribute__((visibility("hidden")))
@interface ButtonTableViewHeaderFooterView
{
    _Bool _stacking;	// 32 = 0x20
    NSMutableArray *_constraints;	// 40 = 0x28
    UIButton *_button;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000934704
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)prepareForReuse;	// IMP=0x0010000000934616
- (void)layoutSubviews;	// IMP=0x00100000009345d8
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0010000000934524
- (void)_updateConstraintsIfNeeded;	// IMP=0x00100000009344d4
- (void)_setConstraints:(_Bool)arg1;	// IMP=0x0010000000934010
- (_Bool)shouldStack;	// IMP=0x0010000000933d69
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0010000000933b25

@end
