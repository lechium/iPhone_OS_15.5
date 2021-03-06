//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface FLOWSchemaFLOWVoiceShortcutAction
{
    NSString *_appId;	// 8 = 0x8
    NSString *_intentCategory;	// 16 = 0x10
    NSString *_intentName;	// 24 = 0x18
    NSString *_intentNLDomain;	// 32 = 0x20
    _Bool _hasAppId;	// 40 = 0x28
    _Bool _hasIntentCategory;	// 41 = 0x29
    _Bool _hasIntentName;	// 42 = 0x2a
    _Bool _hasIntentNLDomain;	// 43 = 0x2b
}

- (void).cxx_destruct;	// IMP=0x000000000016ee0d
@property(nonatomic) _Bool hasIntentNLDomain; // @synthesize hasIntentNLDomain=_hasIntentNLDomain;
@property(nonatomic) _Bool hasIntentName; // @synthesize hasIntentName=_hasIntentName;
@property(nonatomic) _Bool hasIntentCategory; // @synthesize hasIntentCategory=_hasIntentCategory;
@property(nonatomic) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
@property(copy, nonatomic) NSString *intentNLDomain; // @synthesize intentNLDomain=_intentNLDomain;
@property(copy, nonatomic) NSString *intentName; // @synthesize intentName=_intentName;
@property(copy, nonatomic) NSString *intentCategory; // @synthesize intentCategory=_intentCategory;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000016eaef
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000016ea31
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000016e7c0
- (unsigned long long)hash;	// IMP=0x000000000016e73c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016e280
- (void)writeTo:(id)arg1;	// IMP=0x000000000016e150
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016df14
- (void)deleteIntentNLDomain;	// IMP=0x000000000016df00
- (void)deleteIntentName;	// IMP=0x000000000016ded7
- (void)deleteIntentCategory;	// IMP=0x000000000016deae
- (void)deleteAppId;	// IMP=0x000000000016de85
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000345446

@end

