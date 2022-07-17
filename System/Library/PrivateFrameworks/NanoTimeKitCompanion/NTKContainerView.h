//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol NTKContainerViewLayoutDelegate;

@interface NTKContainerView : UIView
{
    struct {
        unsigned int layoutContainerView:1;
    } _delegateRespondsTo;	// 8 = 0x8
    id <NTKContainerViewLayoutDelegate> _layoutDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001fd596
@property(nonatomic) __weak id <NTKContainerViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001fd317
- (void)layoutSubviews;	// IMP=0x00000000001fd2a7

@end
