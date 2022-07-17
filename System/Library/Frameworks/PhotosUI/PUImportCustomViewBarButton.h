//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface PUImportCustomViewBarButton : UIButton
{
    UIView *_customView;	// 8 = 0x8
    NSString *_customAccessibilityLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001aeab4
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (id)accessibilityLabel;	// IMP=0x00000000001ae9e2
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001ae959
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000001ae91c
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001ae8c2
- (void)sizeToFit;	// IMP=0x00000000001ae885
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ae817
- (void)updateConstraints;	// IMP=0x00000000001ae58e
- (id)initWithCustomView:(id)arg1;	// IMP=0x00000000001ae4da

@end
