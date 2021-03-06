//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _HKTimeScopeControlPill
{
    NSArray *_buttons;	// 32 = 0x20
    long long _selectedButtonIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001723a8
- (id)_generateButtonsWithTimeScopes:(id)arg1 shortTextStyle:(_Bool)arg2;	// IMP=0x00000000001720b8
- (void)_buttonSelected:(id)arg1;	// IMP=0x0000000000172072
- (void)_selectButtonAtIndex:(long long)arg1;	// IMP=0x0000000000171ff0
- (void)_deselectAllButtons;	// IMP=0x0000000000171e4c
- (void)_setSelectedButtonIndex:(long long)arg1;	// IMP=0x0000000000171e04
- (void)setSelectedTimeScope:(long long)arg1;	// IMP=0x0000000000171dd3
- (long long)selectedTimeScope;	// IMP=0x0000000000171db6
- (void)layoutSubviews;	// IMP=0x0000000000171b48
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;	// IMP=0x0000000000171a8e

@end

