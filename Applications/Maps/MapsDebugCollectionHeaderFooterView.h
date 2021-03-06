//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface MapsDebugCollectionHeaderFooterView
{
    NSLayoutConstraint *_collapsedHeightConstraint;	// 8 = 0x8
    NSLayoutConstraint *_topConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomConstraint;	// 24 = 0x18
    _Bool _footer;	// 32 = 0x20
    _Bool _collapsed;	// 33 = 0x21
    UILabel *_textLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000050b975
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic, getter=isFooter) _Bool footer; // @synthesize footer=_footer;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_updateForFooter;	// IMP=0x001000000050b721
- (void)setHidden:(_Bool)arg1;	// IMP=0x001000000050b6d6
- (void)_updateForCollapsed;	// IMP=0x001000000050b5e1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000050b19f

@end

