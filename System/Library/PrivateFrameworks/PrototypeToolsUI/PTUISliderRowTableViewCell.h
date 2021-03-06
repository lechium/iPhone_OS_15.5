//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeToolsUI/PTUINumericKeypadDelegate-Protocol.h>

@class UILabel, UISlider;

@interface PTUISliderRowTableViewCell <PTUINumericKeypadDelegate>
{
    UISlider *_slider;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008349
- (void)numericKeypadWillDismiss:(id)arg1;	// IMP=0x00000000000082aa
- (void)numericKeypadDidUpdateValue:(id)arg1;	// IMP=0x0000000000008242
- (void)labelTapped;	// IMP=0x0000000000008168
- (void)_valueChanged:(id)arg1;	// IMP=0x00000000000080b9
- (void)updateDisplayedValue;	// IMP=0x000000000000801f
- (void)updateCellCharacteristics;	// IMP=0x0000000000007f42
- (void)updateLabel;	// IMP=0x0000000000007d67
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000079d7

@end

