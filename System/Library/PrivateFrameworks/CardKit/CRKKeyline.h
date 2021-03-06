//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface CRKKeyline : UIView
{
    UIView *_keylineView;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _direction;	// 24 = 0x18
    unsigned long long _visualEffectStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000f249
@property(readonly) unsigned long long visualEffectStyle; // @synthesize visualEffectStyle=_visualEffectStyle;
@property(readonly) long long direction; // @synthesize direction=_direction;
@property(readonly) long long type; // @synthesize type=_type;
- (void)layoutSubviews;	// IMP=0x000000000000f0c4
- (double)defaultKeylineInsetForCurrentDevice;	// IMP=0x000000000000f05b
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000f043
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000efe2
- (double)_roundedKeylineThickness;	// IMP=0x000000000000ef63
- (id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1;	// IMP=0x000000000000ef2f
- (id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3;	// IMP=0x000000000000edff

@end

