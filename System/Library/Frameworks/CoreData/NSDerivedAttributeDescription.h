//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription
{
    NSExpression *_derivationExpression;	// 8 = 0x8
    NSPredicate *_filteringPredicate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002245f5
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;	// IMP=0x0000000000225a29
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x00000000002256dd
- (void)_createCachesAndOptimizeState;	// IMP=0x0000000000224d2c
- (void)setRenamingIdentifier:(id)arg1;	// IMP=0x0000000000224c63
- (void)setDefaultValue:(id)arg1;	// IMP=0x0000000000224bf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000224b5c
- (_Bool)_isSchemaEqual:(id)arg1;	// IMP=0x0000000000224ab7
@property(retain) NSExpression *derivationExpression;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002247dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000224758
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000224631
- (void)setReadOnly:(_Bool)arg1;	// IMP=0x000000000022461f
- (_Bool)isReadOnly;	// IMP=0x0000000000224617
- (void)setTransient:(_Bool)arg1;	// IMP=0x0000000000224605
- (_Bool)isTransient;	// IMP=0x00000000002245fd
- (id)description;	// IMP=0x000000000022451b
- (unsigned long long)_propertyType;	// IMP=0x0000000000224510
- (void)dealloc;	// IMP=0x00000000002244a5

@end
