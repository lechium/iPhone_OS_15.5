//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSSPropertySource-Protocol.h>

@class NSString;

@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource>
{
    struct TSSPropertyStore *mStore;	// 8 = 0x8
}

+ (id)propertyMapWithPropertiesAndValues:(int)arg1;	// IMP=0x00000000000aedc3
+ (id)propertyMapWithPropertyMap:(id)arg1;	// IMP=0x00000000000aeda6
+ (id)propertyMap;	// IMP=0x00000000000aed94
- (id)propertyMapWithProperties:(id)arg1;	// IMP=0x00000000000afe76
- (id)propertyMapByRemovingValuesForProperties:(id)arg1;	// IMP=0x00000000000afde6
- (id)propertyMapByRemovingValuesFromPropertyMap:(id)arg1;	// IMP=0x00000000000afda4
- (id)propertyMapByAddingValuesFromPropertyMap:(id)arg1;	// IMP=0x00000000000afd62
- (id)diffPropertyNames:(id)arg1;	// IMP=0x00000000000afd50
- (id)diffOnlyDifferences:(id)arg1;	// IMP=0x00000000000afcdf
- (id)diff:(id)arg1;	// IMP=0x00000000000afc6b
- (void)minusPropertyMap:(id)arg1;	// IMP=0x00000000000afc53
- (void)filterWithProperties:(id)arg1;	// IMP=0x00000000000afb22
- (void)removeAllPropertyValues;	// IMP=0x00000000000afb14
- (void)removeValuesForProperties:(id)arg1;	// IMP=0x00000000000af9a9
- (void)removeValueForProperty:(int)arg1;	// IMP=0x00000000000af999
- (_Bool)containsAnyPropertyInProperties:(id)arg1;	// IMP=0x00000000000af8b5
- (_Bool)definesProperty:(int)arg1;	// IMP=0x00000000000af8a3
- (_Bool)containsProperty:(int)arg1;	// IMP=0x00000000000af893
- (void)removeValuesFromPropertyMap:(id)arg1;	// IMP=0x00000000000af87b
- (void)addValuesFromPropertyMap:(id)arg1;	// IMP=0x00000000000af863
- (void)setBoolValue:(_Bool)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af853
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af843
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af833
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af823
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af813
- (void)setObject:(id)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af803
- (void)setBoxedObject:(id)arg1 forProperty:(int)arg2;	// IMP=0x00000000000af7f3
- (double)CGFloatValueForProperty:(int)arg1;	// IMP=0x00000000000af7e3
- (double)doubleValueForProperty:(int)arg1;	// IMP=0x00000000000af7d3
- (float)floatValueForProperty:(int)arg1;	// IMP=0x00000000000af7c3
- (int)intValueForProperty:(int)arg1;	// IMP=0x00000000000af7b3
- (id)objectForProperty:(int)arg1;	// IMP=0x00000000000af7a3
- (id)boxedObjectForProperty:(int)arg1;	// IMP=0x00000000000af793
@property(readonly, copy) NSString *description;
- (void)enumeratePropertiesAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000af398
- (id)old_description;	// IMP=0x00000000000af30c
- (void)p_getAllKeys:(int *)arg1;	// IMP=0x00000000000af2fb
- (id)allProperties;	// IMP=0x00000000000af245
- (id)allKeys;	// IMP=0x00000000000af15e
- (unsigned long long)count;	// IMP=0x00000000000af150
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af101
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af0ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af09b
- (void)dealloc;	// IMP=0x00000000000af061
- (id)initWithFirstKey:(int)arg1 andArgumentList:(struct __va_list_tag [1])arg2;	// IMP=0x00000000000aeff8
- (id)initWithPropertiesAndValues:(int)arg1;	// IMP=0x00000000000aef54
- (id)initWithPropertyMap:(id)arg1;	// IMP=0x00000000000aeee2
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000aeed0
- (id)init;	// IMP=0x00000000000aee89
- (void)pSetArrayOfFloats:(double [9])arg1 forProperty:(int)arg2;	// IMP=0x00000000002ea1bf
- (void)pSetArrayOfObjects:(id [9])arg1 forProperty:(int)arg2;	// IMP=0x00000000002ea15c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
