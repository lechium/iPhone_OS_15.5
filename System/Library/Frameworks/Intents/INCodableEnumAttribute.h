//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableEnum, NSString;

@interface INCodableEnumAttribute <NSSecureCoding>
{
    INCodableEnum *_codableEnum;	// 8 = 0x8
    NSString *_enumNamespace;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018fad4
- (void).cxx_destruct;	// IMP=0x000000000018faa3
@property(copy, nonatomic) NSString *enumNamespace; // @synthesize enumNamespace=_enumNamespace;
@property(retain, nonatomic) INCodableEnum *codableEnum; // @synthesize codableEnum=_codableEnum;
- (id)valueWithName:(id)arg1;	// IMP=0x000000000018f867
- (id)valueForIndex:(unsigned long long)arg1;	// IMP=0x000000000018f808
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018f70a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018f636
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x000000000018f421
- (void)updateWithDictionary:(id)arg1;	// IMP=0x000000000018f142
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018eff9
- (unsigned long long)hash;	// IMP=0x000000000018ef7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018eece
- (Class)_relationshipValueTransformerClass;	// IMP=0x000000000018eebd
- (Class)resolutionResultClass;	// IMP=0x000000000018eeac
- (long long)valueType;	// IMP=0x000000000018ed19
- (id)__INCodableDescriptionEnumTypeNamespaceKey;	// IMP=0x000000000018fc3c
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;	// IMP=0x000000000018fb8c
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;	// IMP=0x000000000018fadc
- (id)__INCodableDescriptionEnumTypeKey;	// IMP=0x000000000018fc94
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;	// IMP=0x000000000018fbe4
- (id)__INTypeCodableDescriptionEnumTypeKey;	// IMP=0x000000000018fb34

@end

