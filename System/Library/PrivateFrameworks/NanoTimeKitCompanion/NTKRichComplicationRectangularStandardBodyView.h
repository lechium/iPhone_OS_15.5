//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel;

@interface NTKRichComplicationRectangularStandardBodyView
{
    NTKColoringLabel *_line1Label;	// 8 = 0x8
    NTKColoringLabel *_line2Label;	// 16 = 0x10
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000009debf
- (void).cxx_destruct;	// IMP=0x000000000009e2e3
- (void)updateMonochromeColor;	// IMP=0x000000000009e276
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x000000000009e1fa
- (void)_editingDidEnd;	// IMP=0x000000000009e1b1
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e134
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000009df1b
- (void)layoutSubviews;	// IMP=0x000000000009db0e
- (id)init;	// IMP=0x000000000009d85f

@end

