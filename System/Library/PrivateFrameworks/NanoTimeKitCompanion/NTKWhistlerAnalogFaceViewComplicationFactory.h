//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory-Protocol.h>

@class NSString, NTKFaceView, NTKUtilityComplicationFactory;

@interface NTKWhistlerAnalogFaceViewComplicationFactory <NTKFaceViewComplicationFactory>
{
    NTKUtilityComplicationFactory *_complicationFactory;	// 8 = 0x8
    _Bool _usesNarrowTopSlots;	// 16 = 0x10
    NTKFaceView *_faceView;	// 24 = 0x18
    double _dialDiameter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004a684
@property(nonatomic) double dialDiameter; // @synthesize dialDiameter=_dialDiameter;
@property(nonatomic) __weak NTKFaceView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) _Bool usesNarrowTopSlots; // @synthesize usesNarrowTopSlots=_usesNarrowTopSlots;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;	// IMP=0x000000000004a4d1
- (_Bool)_convertCircularSlot:(id)arg1 toPosition:(long long *)arg2;	// IMP=0x000000000004a437
- (_Bool)_convertCornerSlot:(id)arg1 toPosition:(long long *)arg2;	// IMP=0x000000000004a37e
- (id)_cornerKeylineViewForSlot:(id)arg1;	// IMP=0x000000000004a2d5
- (_Bool)_isCornerComplicationForSlot:(id)arg1;	// IMP=0x000000000004a237
- (_Bool)isCornerComplicationForSlot:(id)arg1;	// IMP=0x000000000004a225
- (_Bool)_isCenterComplicationForSlot:(id)arg1;	// IMP=0x000000000004a1a1
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;	// IMP=0x000000000004a094
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;	// IMP=0x0000000000049f75
- (void)loadLayoutRulesForFaceView:(id)arg1 dialDiameter:(double)arg2;	// IMP=0x0000000000049839
- (void)loadLayoutRulesForFaceView:(id)arg1;	// IMP=0x000000000030f01b
- (long long)complicationPickerStyleForSlot:(id)arg1;	// IMP=0x00000000000497b1
- (id)keylineViewForComplicationSlot:(id)arg1;	// IMP=0x00000000000496af
- (struct CGPoint)circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect)arg2;	// IMP=0x000000000004947f
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000000493e9
- (void)loadLayoutRules;	// IMP=0x0000000000049390
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;	// IMP=0x0000000000049310
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;	// IMP=0x0000000000049287
- (id)initForDevice:(id)arg1;	// IMP=0x0000000000049207
- (id)initWithFaceView:(id)arg1 dialDiameter:(double)arg2 device:(id)arg3;	// IMP=0x0000000000049140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

