//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFAggregatedCharacteristicValueSource-Protocol.h>
#import <Home/HFLightProfileAggregatedValueSource-Protocol.h>

@class HFServiceDescriptor, NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFLightProfileAggregatedValueSource, HFAggregatedCharacteristicValueSource>
{
    NSSet *_allServices;	// 8 = 0x8
    NSSet *_characteristics;	// 16 = 0x10
    HFServiceDescriptor *_primaryServiceDescriptor;	// 24 = 0x18
    id <HFCharacteristicValueSource> _valueSource;	// 32 = 0x20
    NSDictionary *_characteristicsByType;	// 40 = 0x28
}

+ (id)na_identity;	// IMP=0x0000000000011367
- (void).cxx_destruct;	// IMP=0x0000000000011585
@property(readonly, copy, nonatomic) NSDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HFServiceDescriptor *primaryServiceDescriptor; // @synthesize primaryServiceDescriptor=_primaryServiceDescriptor;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011496
- (void)commitTransactionWithReason:(id)arg1;	// IMP=0x00000000000112f5
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;	// IMP=0x000000000001125b
- (id)allCharacteristicsForCharacteristicType:(id)arg1;	// IMP=0x00000000000111d8
- (id)metadataForCharacteristicType:(id)arg1;	// IMP=0x0000000000011128
- (id)writeValuesForCharacteristicTypes:(id)arg1;	// IMP=0x0000000000010e75
- (id)writeValuesForCharacteristicRecipes:(id)arg1;	// IMP=0x0000000000010b41
- (id)readValuesForCharacteristicTypes:(id)arg1;	// IMP=0x00000000000109fe
- (id)readValuesForServiceStateRecipe:(id)arg1;	// IMP=0x00000000000108d3
@property(readonly, copy, nonatomic) NSSet *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, copy, nonatomic) NSSet *allServices; // @synthesize allServices=_allServices;
- (id)copyWithValueSource:(id)arg1;	// IMP=0x00000000000106af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001065c
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3;	// IMP=0x0000000000010555
- (id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3;	// IMP=0x0000000000010425
- (id)init;	// IMP=0x0000000000010370
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004558a
- (id)writeNaturalLightEnabledState:(_Bool)arg1;	// IMP=0x0000000000045286
- (_Bool)isNaturalLightingEnabled;	// IMP=0x0000000000045177
- (_Bool)isNaturalLightingSupported;	// IMP=0x0000000000044fbb
@property(readonly, nonatomic) NSSet *lightProfiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

