//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@interface SFPersonImageView : UIImageView
{
    _Bool _imageIsSquare;	// 8 = 0x8
    double _highlightDarkeningAlpha;	// 16 = 0x10
}

+ (id)darkenImage:(id)arg1 toLevel:(double)arg2;	// IMP=0x0000000000004bf8
@property(nonatomic) double highlightDarkeningAlpha; // @synthesize highlightDarkeningAlpha=_highlightDarkeningAlpha;
@property(nonatomic) _Bool imageIsSquare; // @synthesize imageIsSquare=_imageIsSquare;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000004acc
- (void)setImage:(id)arg1;	// IMP=0x0000000000004a8b
- (void)layoutSubviews;	// IMP=0x0000000000004916
- (id)initWithImage:(id)arg1 isSquare:(_Bool)arg2;	// IMP=0x0000000000004892

@end

