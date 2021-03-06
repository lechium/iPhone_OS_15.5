//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView
{
    UIImageView *_highlight;	// 8 = 0x8
    double _highlightAlpha;	// 16 = 0x10
    double _highlightHeight;	// 24 = 0x18
}

+ (id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2;	// IMP=0x00000000001cd568
+ (id)imageCache;	// IMP=0x00000000001cd45a
- (void).cxx_destruct;	// IMP=0x00000000001cd9c3
@property(readonly, nonatomic) double highlightHeight; // @synthesize highlightHeight=_highlightHeight;
@property(readonly, nonatomic) double highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
- (void)layoutSubviews;	// IMP=0x00000000001cd94a
- (id)initWithFrame:(struct CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3;	// IMP=0x00000000001cd7f0

@end

