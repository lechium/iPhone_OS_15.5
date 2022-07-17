//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface PXGradientView : UIView
{
    NSArray *_colors;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x000000000088b0b2
- (void).cxx_destruct;	// IMP=0x000000000088b062
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000088af90
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
- (void)_updateGradientLayerColors;	// IMP=0x000000000088ac5c
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;

@end
