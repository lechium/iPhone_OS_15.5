//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionCondition-Protocol.h>

@class NSMutableIndexSet, NSString;

@interface SXTraitDistanceComponentInsertionCondition : NSObject <SXComponentInsertionCondition>
{
    unsigned long long _componentTrait;	// 8 = 0x8
    unsigned long long _otherComponentTrait;	// 16 = 0x10
    NSMutableIndexSet *_traitAreas;	// 24 = 0x18
    NSMutableIndexSet *_otherTraitAreas;	// 32 = 0x20
    struct _SXConvertibleValue _distance;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b5579
@property(retain, nonatomic) NSMutableIndexSet *otherTraitAreas; // @synthesize otherTraitAreas=_otherTraitAreas;
@property(retain, nonatomic) NSMutableIndexSet *traitAreas; // @synthesize traitAreas=_traitAreas;
@property(readonly, nonatomic) struct _SXConvertibleValue distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) unsigned long long otherComponentTrait; // @synthesize otherComponentTrait=_otherComponentTrait;
@property(readonly, nonatomic) unsigned long long componentTrait; // @synthesize componentTrait=_componentTrait;
- (void)inspectTraitAreasForComponents:(id)arg1 layoutProvider:(id)arg2;	// IMP=0x00000000000b5091
- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;	// IMP=0x00000000000b4ee3
- (void)insertedComponent:(id)arg1 approximateLocation:(struct CGPoint)arg2;	// IMP=0x00000000000b4dba
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;	// IMP=0x00000000000b4d05
- (id)initWithTrait:(unsigned long long)arg1 otherTrait:(unsigned long long)arg2 distance:(struct _SXConvertibleValue)arg3;	// IMP=0x00000000000b4ca3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

