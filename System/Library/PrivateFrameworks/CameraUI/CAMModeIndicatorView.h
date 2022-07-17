//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CAMModeDialItem, UIImageView;

@interface CAMModeIndicatorView : UIControl
{
    long long _selectedMode;	// 8 = 0x8
    CAMModeDialItem *__modeTextView;	// 16 = 0x10
    UIImageView *__symbolView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001891a8
@property(readonly, nonatomic) UIImageView *_symbolView; // @synthesize _symbolView=__symbolView;
@property(readonly, nonatomic) CAMModeDialItem *_modeTextView; // @synthesize _modeTextView=__modeTextView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
- (void)_updateModeIndicatorAnimated:(_Bool)arg1;	// IMP=0x0000000000188d51
- (struct CGSize)_symbolSize;	// IMP=0x0000000000188d40
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000188cf3
- (void)layoutSubviews;	// IMP=0x0000000000188a98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001888c7

@end
