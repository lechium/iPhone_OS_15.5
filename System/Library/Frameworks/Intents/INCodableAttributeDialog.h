//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableDescription, NSString;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    _Bool _defaultDialog;	// 8 = 0x8
    INCodableAttribute *_codableAttribute;	// 16 = 0x10
    NSString *_formatString;	// 24 = 0x18
    NSString *_formatStringID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023832
- (void).cxx_destruct;	// IMP=0x0000000000023801
@property(nonatomic, getter=isDefaultDialog) _Bool defaultDialog; // @synthesize defaultDialog=_defaultDialog;
@property(copy, nonatomic) NSString *formatStringID; // @synthesize formatStringID=_formatStringID;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(nonatomic, setter=_setCodableAttribute:) __weak INCodableAttribute *_codableAttribute; // @synthesize _codableAttribute;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023637
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023554
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x0000000000022e96
- (id)dictionaryRepresentation;	// IMP=0x0000000000022e4a
- (void)updateWithDictionary:(id)arg1;	// IMP=0x0000000000022d81
@property(readonly, nonatomic) __weak INCodableDescription *_codableDescription;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3;	// IMP=0x000000000002276d
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3;	// IMP=0x00000000000226c0
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2;	// IMP=0x0000000000022630
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000224e7
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000223a5
- (id)__INCodableDescriptionFormatStringKey;	// IMP=0x0000000000023d0a
- (id)__INCodableDescriptionFormatStringIDKey;	// IMP=0x0000000000023c02
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;	// IMP=0x0000000000023baa
- (id)__INCodableDescriptionFormatStringDictionaryKey;	// IMP=0x0000000000023cb2
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;	// IMP=0x0000000000023c5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
