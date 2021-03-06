//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface CARStatusBarButton : UIButton
{
    UIColor *_focusHighlightColor;	// 8 = 0x8
}

+ (id)buttonWithType:(long long)arg1;	// IMP=0x00400000000d1153
- (void).cxx_destruct;	// IMP=0x00200000000d1514
// Error: Property attributes should begin with the type ('T') attribute, property name: focusHighlightColor
// Property attributes: (null)

- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000d14a6
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000d145d
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000d136c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000d1323
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000d12da
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000d11e9

@end

