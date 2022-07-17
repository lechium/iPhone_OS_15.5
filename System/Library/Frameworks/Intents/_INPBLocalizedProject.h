//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLocalizedProject-Protocol.h>

@class NSString, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <_INPBLocalizedProject, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBAppNames *_appNames;	// 8 = 0x8
    _INPBIntentVocabulary *_intentVocabulary;	// 16 = 0x10
    _INPBLanguageTag *_language;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ba8d7
- (void).cxx_destruct;	// IMP=0x00000000000ba60f
@property(retain, nonatomic) _INPBLanguageTag *language; // @synthesize language=_language;
@property(retain, nonatomic) _INPBIntentVocabulary *intentVocabulary; // @synthesize intentVocabulary=_intentVocabulary;
@property(retain, nonatomic) _INPBAppNames *appNames; // @synthesize appNames=_appNames;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ba484
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba028
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b9f3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b9eac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b9dad
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b9c6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b9c61
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasIntentVocabulary;
@property(readonly, nonatomic) _Bool hasAppNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
