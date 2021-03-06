//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface WGColorHighlightButton : UIButton
{
    UIColor *_savedBackgroundColor;	// 8 = 0x8
    UIColor *_highlightedBackgroundColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001cccc
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *savedBackgroundColor; // @synthesize savedBackgroundColor=_savedBackgroundColor;
- (void)_updateRealBackgroundColor;	// IMP=0x000000000001cb5e
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000001ca69
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000001c9bc
- (void)layoutSubviews;	// IMP=0x000000000001c8f5
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000001c860

@end

