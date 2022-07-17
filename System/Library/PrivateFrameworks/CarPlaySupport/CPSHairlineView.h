//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView
{
    long long _axis;	// 8 = 0x8
    NSLayoutConstraint *_strokeThicknessConstraint;	// 16 = 0x10
}

+ (id)grayHairlineViewAlongAxis:(long long)arg1;	// IMP=0x00000000000845cf
- (void).cxx_destruct;	// IMP=0x0000000000084885
@property(retain, nonatomic) NSLayoutConstraint *strokeThicknessConstraint; // @synthesize strokeThicknessConstraint=_strokeThicknessConstraint;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void)_updateStrokeThickness;	// IMP=0x000000000008478d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000008477b
- (id)initWithAxis:(long long)arg1 color:(id)arg2;	// IMP=0x000000000008464d

@end
