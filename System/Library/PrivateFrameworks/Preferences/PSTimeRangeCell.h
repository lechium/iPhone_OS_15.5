//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UILabel;
@protocol PSTimeRangeCellDelegate;

@interface PSTimeRangeCell
{
    UILabel *_fromTitle;	// 120 = 0x78
    UILabel *_toTitle;	// 128 = 0x80
    UILabel *_fromTime;	// 136 = 0x88
    UILabel *_toTime;	// 144 = 0x90
    NSArray *_constraints;	// 152 = 0x98
    id <PSTimeRangeCellDelegate> _delegate;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000be11d
- (id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2;	// IMP=0x00000000000bdf3c
- (id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2;	// IMP=0x00000000000bddad
- (void)updateConstraints;	// IMP=0x00000000000bdb0c
- (void)layoutSubviews;	// IMP=0x00000000000bda07
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000bd71f

@end
