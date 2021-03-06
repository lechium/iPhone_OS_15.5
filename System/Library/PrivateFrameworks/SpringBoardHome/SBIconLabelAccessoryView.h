//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/SBIconLabelAccessoryView-Protocol.h>

@class NSString, UIImage;

@interface SBIconLabelAccessoryView : UIView <SBIconLabelAccessoryView>
{
    UIImage *_baseImage;	// 8 = 0x8
}

+ (long long)labelAccessorySystemImageScale;	// IMP=0x00000000000e36c1
+ (id)labelAccessorySystemImageName;	// IMP=0x00000000000e36b4
- (void).cxx_destruct;	// IMP=0x00000000000e394e
@property(retain, nonatomic) UIImage *baseImage; // @synthesize baseImage=_baseImage;
@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) _Bool hasBaseline;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000e38e8
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000e388e
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;	// IMP=0x00000000000e3888
- (void)updateWithLegibilitySettings:(id)arg1 labelFont:(id)arg2;	// IMP=0x00000000000e371c
- (void)prepareForReuse;	// IMP=0x00000000000e3716
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e36c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

