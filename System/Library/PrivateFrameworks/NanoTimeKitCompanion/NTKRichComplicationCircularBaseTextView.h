//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationCircularBaseTextView
{
    UIView<NTKColoringView> *_label;	// 8 = 0x8
    double _labelScale;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020022c
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;	// IMP=0x00000000002001da
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint)arg2 centerScale:(double)arg3;	// IMP=0x00000000001fff9d
- (void)_layoutLabel;	// IMP=0x00000000001ffc4c
- (void)layoutSubviews;	// IMP=0x00000000001ffc0b
- (void)setForegroundColor:(id)arg1;	// IMP=0x00000000001ffb95
- (id)_labelFont;	// IMP=0x00000000001ffa06
- (id)_createLabelViewWithFont:(id)arg1;	// IMP=0x0000000000315853
- (id)label;	// IMP=0x00000000001ff9f1
- (id)init;	// IMP=0x00000000001ff859

@end

