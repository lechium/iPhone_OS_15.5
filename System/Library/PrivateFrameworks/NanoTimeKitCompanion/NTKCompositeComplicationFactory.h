//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NTKCompositeComplicationFactory : NSObject <NTKFaceViewComplicationFactory>
{
    NSMutableDictionary *_factoriesBySlot;	// 8 = 0x8
    NSMutableOrderedSet *_factories;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b5b7
@property(retain, nonatomic) NSMutableOrderedSet *factories; // @synthesize factories=_factories;
@property(retain, nonatomic) NSMutableDictionary *factoriesBySlot; // @synthesize factoriesBySlot=_factoriesBySlot;
- (_Bool)slotSupportsCurvedText:(id)arg1;	// IMP=0x000000000000b4e4
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;	// IMP=0x000000000000b42c
- (void)loadLayoutRules;	// IMP=0x000000000000b3d3
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;	// IMP=0x000000000000b2d3
- (id)keylineViewForComplicationSlot:(id)arg1;	// IMP=0x000000000000b22f
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;	// IMP=0x000000000000b113
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;	// IMP=0x000000000000b067
- (long long)complicationPickerStyleForSlot:(id)arg1;	// IMP=0x000000000000afc0
- (void)deregisterFactoryAtSlots:(id)arg1;	// IMP=0x000000000000af55
- (void)deregisterFactoryAtSlot:(id)arg1;	// IMP=0x000000000000ae49
- (void)registerFactory:(id)arg1 forSlots:(id)arg2;	// IMP=0x000000000000ad92
- (void)registerFactory:(id)arg1 forSlot:(id)arg2;	// IMP=0x000000000000acc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
