//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineBorderedView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    NSLayoutConstraint *_bottomConstraint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007fde7
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2;	// IMP=0x000000000007f59e

@end

