//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVLoadingButtonView, UIFont;

@interface AVHomeLoadingButtonControlItem
{
    UIFont *_titleFont;	// 8 = 0x8
    AVLoadingButtonView *_loadingButtonView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dd2db
@property(retain, nonatomic) AVLoadingButtonView *loadingButtonView; // @synthesize loadingButtonView=_loadingButtonView;
- (void)_updateTintColor;	// IMP=0x00000000000dd216
- (void)setTitleFont:(id)arg1;	// IMP=0x00000000000dd101
- (id)titleFont;	// IMP=0x00000000000dd0ec
@property(nonatomic) _Bool showsLoadingIndicator;
- (void)_buttonTouchUpInside:(id)arg1;	// IMP=0x00000000000dcfe9
- (id)view;	// IMP=0x00000000000dcfd7
- (id)initWithTitle:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000dcef5

@end
