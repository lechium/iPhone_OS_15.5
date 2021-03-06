//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableAttributeDefaultValueProviding-Protocol.h>

@class NSString;

@interface INCodableStringAttributeMetadata <INCodableAttributeDefaultValueProviding>
{
    _Bool _multiline;	// 8 = 0x8
    _Bool _disableAutocorrect;	// 9 = 0x9
    _Bool _disableSmartDashes;	// 10 = 0xa
    _Bool _disableSmartQuotes;	// 11 = 0xb
    NSString *_defaultValue;	// 16 = 0x10
    NSString *_defaultValueID;	// 24 = 0x18
    long long _capitalization;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b8fa6
- (void).cxx_destruct;	// IMP=0x00000000001b8ed7
@property(nonatomic) long long capitalization; // @synthesize capitalization=_capitalization;
@property(copy, nonatomic) NSString *defaultValueID; // @synthesize defaultValueID=_defaultValueID;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) _Bool disableSmartQuotes; // @synthesize disableSmartQuotes=_disableSmartQuotes;
@property(nonatomic) _Bool disableSmartDashes; // @synthesize disableSmartDashes=_disableSmartDashes;
@property(nonatomic) _Bool disableAutocorrect; // @synthesize disableAutocorrect=_disableAutocorrect;
@property(nonatomic, getter=isMultiline) _Bool multiline; // @synthesize multiline=_multiline;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b8c0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b8ad5
- (id)localizedDefaultValueWithLocalizer:(id)arg1;	// IMP=0x00000000001b8a0d
@property(readonly, copy, nonatomic) NSString *localizedDefaultValue;
- (id)defaultValueForIntentDefaultValueProvider;	// IMP=0x00000000001b89af
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x00000000001b843e
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000001b7fc5
- (id)__INCodableDescriptionMultilineKey;	// IMP=0x00000000001b947e
- (id)__INIntentResponseCodableDescriptionMultilineKey;	// IMP=0x00000000001b9216
- (id)__INTypeCodableDescriptionMultilineKey;	// IMP=0x00000000001b8fae
- (id)__INCodableDescriptionDisableAutocorrectKey;	// IMP=0x00000000001b9586
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;	// IMP=0x00000000001b931e
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;	// IMP=0x00000000001b90b6
- (id)__INCodableDescriptionDisableSmartDashesKey;	// IMP=0x00000000001b952e
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;	// IMP=0x00000000001b92c6
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;	// IMP=0x00000000001b905e
- (id)__INCodableDescriptionDisableSmartQuotesKey;	// IMP=0x00000000001b94d6
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;	// IMP=0x00000000001b926e
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;	// IMP=0x00000000001b9006
- (id)__INCodableDescriptionDefaultValueKey;	// IMP=0x00000000001b9636
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;	// IMP=0x00000000001b93ce
- (id)__INTypeCodableDescriptionDefaultValueKey;	// IMP=0x00000000001b9166
- (id)__INCodableDescriptionDefaultValueIDKey;	// IMP=0x00000000001b95de
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;	// IMP=0x00000000001b9376
- (id)__INTypeCodableDescriptionDefaultValueIDKey;	// IMP=0x00000000001b910e
- (id)__INCodableDescriptionCapitalizationKey;	// IMP=0x00000000001b968e
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;	// IMP=0x00000000001b9426
- (id)__INTypeCodableDescriptionCapitalizationKey;	// IMP=0x00000000001b91be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

