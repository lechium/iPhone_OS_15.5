//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface LTSchemaTask
{
    NSString *_translationTask;	// 8 = 0x8
    NSString *_sourceLanguage;	// 16 = 0x10
    NSString *_targetLanguage;	// 24 = 0x18
    NSString *_deviceOS;	// 32 = 0x20
    NSString *_deviceType;	// 40 = 0x28
    NSString *_osVersion;	// 48 = 0x30
    NSString *_bundleIdentifier;	// 56 = 0x38
    _Bool _hasTranslationTask;	// 64 = 0x40
    _Bool _hasSourceLanguage;	// 65 = 0x41
    _Bool _hasTargetLanguage;	// 66 = 0x42
    _Bool _hasDeviceOS;	// 67 = 0x43
    _Bool _hasDeviceType;	// 68 = 0x44
    _Bool _hasOsVersion;	// 69 = 0x45
    _Bool _hasBundleIdentifier;	// 70 = 0x46
}

- (void).cxx_destruct;	// IMP=0x00000000002f9c39
@property(nonatomic) _Bool hasBundleIdentifier; // @synthesize hasBundleIdentifier=_hasBundleIdentifier;
@property(nonatomic) _Bool hasOsVersion; // @synthesize hasOsVersion=_hasOsVersion;
@property(nonatomic) _Bool hasDeviceType; // @synthesize hasDeviceType=_hasDeviceType;
@property(nonatomic) _Bool hasDeviceOS; // @synthesize hasDeviceOS=_hasDeviceOS;
@property(nonatomic) _Bool hasTargetLanguage; // @synthesize hasTargetLanguage=_hasTargetLanguage;
@property(nonatomic) _Bool hasSourceLanguage; // @synthesize hasSourceLanguage=_hasSourceLanguage;
@property(nonatomic) _Bool hasTranslationTask; // @synthesize hasTranslationTask=_hasTranslationTask;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *deviceOS; // @synthesize deviceOS=_deviceOS;
@property(copy, nonatomic) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(copy, nonatomic) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(copy, nonatomic) NSString *translationTask; // @synthesize translationTask=_translationTask;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002f970e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002f9650
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002f92aa
- (unsigned long long)hash;	// IMP=0x00000000002f91d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f8a06
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f8813
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f8806
- (void)deleteBundleIdentifier;	// IMP=0x00000000002f87f2
- (void)deleteOsVersion;	// IMP=0x00000000002f87c9
- (void)deleteDeviceType;	// IMP=0x00000000002f87a0
- (void)deleteDeviceOS;	// IMP=0x00000000002f8777
- (void)deleteTargetLanguage;	// IMP=0x00000000002f874e
- (void)deleteSourceLanguage;	// IMP=0x00000000002f8725
- (void)deleteTranslationTask;	// IMP=0x00000000002f86fc
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035d676

@end

