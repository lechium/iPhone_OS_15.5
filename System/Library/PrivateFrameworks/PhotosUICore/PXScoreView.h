//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PXScoreView : UIView
{
    UILabel *_label;	// 8 = 0x8
    unsigned long long _colorScale;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000009a8b0a
- (void)setScore:(double)arg1;	// IMP=0x00000000009a8919
- (void)layoutSubviews;	// IMP=0x00000000009a8853
- (id)initWithColorScale:(unsigned long long)arg1;	// IMP=0x00000000009a8826
- (id)init;	// IMP=0x00000000009a86b5

@end

