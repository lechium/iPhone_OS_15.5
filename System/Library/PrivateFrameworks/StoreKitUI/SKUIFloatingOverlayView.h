//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIFloatingOverlayView : UIView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    UIView *_contentView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000031496f
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003148fa
- (void)layoutSubviews;	// IMP=0x0000000000314864
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000314556

@end
