//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSString, _NTKPolygonCylinderTransformView;

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView>
{
    _NTKPolygonCylinderTransformView *_transformView;	// 8 = 0x8
    double _rotationAngle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000299d49
- (void)_updateTransform;	// IMP=0x0000000000299b98
- (void)_informFaceViewsOfRotation;	// IMP=0x0000000000299a8f
- (void)_setRotationAngle:(double)arg1;	// IMP=0x0000000000299a21
- (double)_rotationAngleForFaceIndex:(long long)arg1;	// IMP=0x00000000002999f0
- (void)layoutSubviews;	// IMP=0x0000000000299952
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;	// IMP=0x00000000002998ae
- (void)transitionToSideAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000299880
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000299863
- (id)viewForSideAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000299846
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000299829
@property(readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property(nonatomic) unsigned long long numberOfSides;
- (id)init;	// IMP=0x0000000000299625

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
