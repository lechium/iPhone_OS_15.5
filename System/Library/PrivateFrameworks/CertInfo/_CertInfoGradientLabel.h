//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImage;

@interface _CertInfoGradientLabel : UIView
{
    NSString *_text;	// 8 = 0x8
    UIFont *_font;	// 16 = 0x10
    UIImage *_checkImage;	// 24 = 0x18
    struct CGColor *_patternColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000120f0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000011f49
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000011eb6
- (void)dealloc;	// IMP=0x0000000000011e70
- (id)initWithTrusted:(_Bool)arg1;	// IMP=0x0000000000011b4a

@end

