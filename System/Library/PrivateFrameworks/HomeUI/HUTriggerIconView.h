//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HUIconView, NSArray;

@interface HUTriggerIconView : UIView
{
    HUIconView *_iconView;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000385e11
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000385d6d
- (void)layoutSubviews;	// IMP=0x0000000000385cd7
- (id)initWithIconDescriptor:(id)arg1;	// IMP=0x0000000000385c15

@end
