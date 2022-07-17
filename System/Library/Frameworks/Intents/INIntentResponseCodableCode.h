//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INIntentResponseCodableDescription, NSArray, NSString;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding>
{
    _Bool _success;	// 8 = 0x8
    long long _value;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_formatString;	// 32 = 0x20
    NSString *_formatStringLocID;	// 40 = 0x28
    NSString *_conciseFormatString;	// 48 = 0x30
    NSString *_conciseFormatStringLocID;	// 56 = 0x38
    INIntentResponseCodableDescription *__codableDescription;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000034d2cd
- (void).cxx_destruct;	// IMP=0x000000000034d27b
@property(nonatomic, setter=_setCodableDescription:) __weak INIntentResponseCodableDescription *_codableDescription; // @synthesize _codableDescription=__codableDescription;
@property(copy, nonatomic) NSString *conciseFormatStringLocID; // @synthesize conciseFormatStringLocID=_conciseFormatStringLocID;
@property(copy, nonatomic) NSString *conciseFormatString; // @synthesize conciseFormatString=_conciseFormatString;
@property(copy, nonatomic) NSString *formatStringLocID; // @synthesize formatStringLocID=_formatStringLocID;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long value; // @synthesize value=_value;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000034cf0f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000034ce32
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x000000000034c29b
- (id)dictionaryRepresentation;	// IMP=0x000000000034c24f
- (void)updateWithDictionary:(id)arg1;	// IMP=0x000000000034bf67
- (id)_parameterNamesFromString:(id)arg1;	// IMP=0x000000000034bc97
@property(readonly, nonatomic) NSArray *parameterNames;
- (id)__INCodableDescriptionNameKey;	// IMP=0x000000000034d32d
- (id)__INCodableDescriptionFormatStringKey;	// IMP=0x000000000034d4e5
- (id)__INCodableDescriptionFormatStringIDKey;	// IMP=0x000000000034d3dd
- (id)__INCodableDescriptionConciseFormatStringKey;	// IMP=0x000000000034d69d
- (id)__INCodableDescriptionConciseFormatStringIDKey;	// IMP=0x000000000034d595
- (id)__INCodableDescriptionSuccessKey;	// IMP=0x000000000034d2d5
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;	// IMP=0x000000000034d385
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;	// IMP=0x000000000034d53d
- (id)__INCodableDescriptionFormatStringDictionaryKey;	// IMP=0x000000000034d48d
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;	// IMP=0x000000000034d435
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;	// IMP=0x000000000034d645
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;	// IMP=0x000000000034d5ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
