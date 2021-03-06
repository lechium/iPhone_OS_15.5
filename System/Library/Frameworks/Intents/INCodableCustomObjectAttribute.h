//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INCodableDescription, NSString;

@interface INCodableCustomObjectAttribute
{
    NSString *_objectTypeName;	// 8 = 0x8
    NSString *_objectTypeNamespace;	// 16 = 0x10
    INCodableDescription *_codableDescription;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000025d92e
- (void).cxx_destruct;	// IMP=0x000000000025d3c0
@property(nonatomic) __weak INCodableDescription *codableDescription; // @synthesize codableDescription=_codableDescription;
@property(copy, nonatomic) NSString *objectTypeNamespace; // @synthesize objectTypeNamespace=_objectTypeNamespace;
@property(copy, nonatomic) NSString *objectTypeName; // @synthesize objectTypeName=_objectTypeName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025d23a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000025d168
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025d089
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x000000000025ce85
- (void)updateWithDictionary:(id)arg1;	// IMP=0x000000000025cb5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025c962
- (unsigned long long)hash;	// IMP=0x000000000025c8ae
- (long long)valueType;	// IMP=0x000000000025c8a3
- (id)valueTransformer;	// IMP=0x000000000025c67c
- (Class)resolutionResultClass;	// IMP=0x000000000025c66b
- (Class)_unsafeObjectClass;	// IMP=0x000000000025c5d9
- (Class)_relationshipValueTransformerClass;	// IMP=0x000000000025c5c8
- (Class)objectClass;	// IMP=0x000000000025c439
- (id)__INCodableDescriptionObjectTypeKey;	// IMP=0x000000000025daee
- (id)__INIntentResponseCodableDescriptionObjectTypeKey;	// IMP=0x000000000025da3e
- (id)__INTypeCodableDescriptionObjectTypeKey;	// IMP=0x000000000025d98e
- (id)__INCodableDescriptionObjectTypeNamespaceKey;	// IMP=0x000000000025da96
- (id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;	// IMP=0x000000000025d9e6
- (id)__INTypeCodableDescriptionObjectTypeNamespaceKey;	// IMP=0x000000000025d936

@end

