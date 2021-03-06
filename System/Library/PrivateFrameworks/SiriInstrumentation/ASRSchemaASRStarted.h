//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface ASRSchemaASRStarted
{
    int _task;	// 8 = 0x8
    int _modelLocale;	// 12 = 0xc
    NSString *_datapackVersion;	// 16 = 0x10
    _Bool _isHighQualityAsset;	// 24 = 0x18
    NSString *_hammerVersion;	// 32 = 0x20
    NSString *_geoLanguageModelRegion;	// 40 = 0x28
    _Bool _geoLanguageModelLoaded;	// 48 = 0x30
    unsigned long long _speechProfileAgeInNs;	// 56 = 0x38
    SISchemaUUID *_dictationUiInteractionId;	// 64 = 0x40
    NSString *_portraitExperimentVariantName;	// 72 = 0x48
    struct {
        unsigned int task:1;
        unsigned int modelLocale:1;
        unsigned int isHighQualityAsset:1;
        unsigned int geoLanguageModelLoaded:1;
        unsigned int speechProfileAgeInNs:1;
    } _has;	// 80 = 0x50
    _Bool _hasDatapackVersion;	// 84 = 0x54
    _Bool _hasHammerVersion;	// 85 = 0x55
    _Bool _hasGeoLanguageModelRegion;	// 86 = 0x56
    _Bool _hasDictationUiInteractionId;	// 87 = 0x57
    _Bool _hasPortraitExperimentVariantName;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000003fa34
@property(nonatomic) _Bool hasPortraitExperimentVariantName; // @synthesize hasPortraitExperimentVariantName=_hasPortraitExperimentVariantName;
@property(nonatomic) _Bool hasDictationUiInteractionId; // @synthesize hasDictationUiInteractionId=_hasDictationUiInteractionId;
@property(nonatomic) _Bool hasGeoLanguageModelRegion; // @synthesize hasGeoLanguageModelRegion=_hasGeoLanguageModelRegion;
@property(nonatomic) _Bool hasHammerVersion; // @synthesize hasHammerVersion=_hasHammerVersion;
@property(nonatomic) _Bool hasDatapackVersion; // @synthesize hasDatapackVersion=_hasDatapackVersion;
@property(copy, nonatomic) NSString *portraitExperimentVariantName; // @synthesize portraitExperimentVariantName=_portraitExperimentVariantName;
@property(retain, nonatomic) SISchemaUUID *dictationUiInteractionId; // @synthesize dictationUiInteractionId=_dictationUiInteractionId;
@property(nonatomic) unsigned long long speechProfileAgeInNs; // @synthesize speechProfileAgeInNs=_speechProfileAgeInNs;
@property(nonatomic) _Bool geoLanguageModelLoaded; // @synthesize geoLanguageModelLoaded=_geoLanguageModelLoaded;
@property(copy, nonatomic) NSString *geoLanguageModelRegion; // @synthesize geoLanguageModelRegion=_geoLanguageModelRegion;
@property(copy, nonatomic) NSString *hammerVersion; // @synthesize hammerVersion=_hammerVersion;
@property(nonatomic) _Bool isHighQualityAsset; // @synthesize isHighQualityAsset=_isHighQualityAsset;
@property(copy, nonatomic) NSString *datapackVersion; // @synthesize datapackVersion=_datapackVersion;
@property(nonatomic) int modelLocale; // @synthesize modelLocale=_modelLocale;
@property(nonatomic) int task; // @synthesize task=_task;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003f402
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000003f344
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000003ea58
- (unsigned long long)hash;	// IMP=0x000000000003e8e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e1c2
- (void)writeTo:(id)arg1;	// IMP=0x000000000003df8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003df82
- (void)deletePortraitExperimentVariantName;	// IMP=0x000000000003df6e
- (void)deleteDictationUiInteractionId;	// IMP=0x000000000003df45
- (void)deleteSpeechProfileAgeInNs;	// IMP=0x000000000003df06
@property(nonatomic) _Bool hasSpeechProfileAgeInNs;
- (void)deleteGeoLanguageModelLoaded;	// IMP=0x000000000003de90
@property(nonatomic) _Bool hasGeoLanguageModelLoaded;
- (void)deleteGeoLanguageModelRegion;	// IMP=0x000000000003de31
- (void)deleteHammerVersion;	// IMP=0x000000000003de08
- (void)deleteIsHighQualityAsset;	// IMP=0x000000000003ddc9
@property(nonatomic) _Bool hasIsHighQualityAsset;
- (void)deleteDatapackVersion;	// IMP=0x000000000003dd6a
- (void)deleteModelLocale;	// IMP=0x000000000003dd2b
@property(nonatomic) _Bool hasModelLocale;
- (void)deleteTask;	// IMP=0x000000000003dcb8
@property(nonatomic) _Bool hasTask;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003313ad
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331375

@end

