//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface AVTShadowView : UIView
{
    CALayer *_separator;	// 8 = 0x8
}

+ (double)defaultHeightForSuperview:(id)arg1;	// IMP=0x000000000005da0a
- (void).cxx_destruct;	// IMP=0x000000000005dd82
@property(retain, nonatomic) CALayer *separator; // @synthesize separator=_separator;
- (void)layoutSubviews;	// IMP=0x000000000005dca8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005dba0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005da1f

@end

