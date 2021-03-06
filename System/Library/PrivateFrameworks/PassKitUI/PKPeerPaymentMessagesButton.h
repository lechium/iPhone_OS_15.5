//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIActivityIndicatorView, UIColor;

@interface PKPeerPaymentMessagesButton : UIButton
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_highlightedBackgroundColor;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    _Bool _showsActivityIndicator;	// 32 = 0x20
    struct CGSize _imageSize;	// 40 = 0x28
}

+ (struct CGSize)referenceSize;	// IMP=0x0000000000185e5c
- (void).cxx_destruct;	// IMP=0x0000000000186336
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool showsActivityIndicator; // @synthesize showsActivityIndicator=_showsActivityIndicator;
- (void)layoutSubviews;	// IMP=0x0000000000186288
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000018608f
- (id)initWithFrame:(struct CGRect)arg1 usePlatterColor:(_Bool)arg2;	// IMP=0x0000000000185f3e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000185ed3
- (id)init;	// IMP=0x0000000000185e6d

@end

