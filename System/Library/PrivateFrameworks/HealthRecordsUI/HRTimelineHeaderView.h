//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MISSING_TYPE;
@protocol HRTimelineHeaderViewDelegate;

@interface HRTimelineHeaderView : UITableViewHeaderFooterView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *separatorViewHidden;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_titleLabel;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_subtitleLabel;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_backgroundEffectView;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_separatorView;	// 48 = 0x30
}

+ (id)reuseIdentifier;	// IMP=0x00000000000aa8e0
- (void).cxx_destruct;	// IMP=0x00000000000ac440
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ac3c0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ac0b0
- (void)layoutSubviews;	// IMP=0x00000000000abf60
@property(nonatomic) _Bool floating;
- (void)prepareForReuse;	// IMP=0x00000000000ab700
- (void)applyStyleFromNavigationBar:(id)arg1;	// IMP=0x00000000000ab550
- (void)applyTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000000000ab400
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ab1c0
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000000ab100
@property(nonatomic) _Bool separatorViewHidden; // @synthesize separatorViewHidden;
@property(nonatomic) __weak id <HRTimelineHeaderViewDelegate> delegate; // @synthesize delegate;

@end
