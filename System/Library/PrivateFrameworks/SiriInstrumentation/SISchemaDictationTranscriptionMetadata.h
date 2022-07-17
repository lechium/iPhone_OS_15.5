//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaDictationAlternativesPresent;

@interface SISchemaDictationTranscriptionMetadata
{
    int _dictationModel;	// 8 = 0x8
    NSString *_dictationModelVersion;	// 16 = 0x10
    SISchemaDictationAlternativesPresent *_dictationAlternativesPresent;	// 24 = 0x18
    struct {
        unsigned int dictationModel:1;
    } _has;	// 32 = 0x20
    _Bool _hasDictationModelVersion;	// 36 = 0x24
    _Bool _hasDictationAlternativesPresent;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x000000000012b9e2
@property(nonatomic) _Bool hasDictationAlternativesPresent; // @synthesize hasDictationAlternativesPresent=_hasDictationAlternativesPresent;
@property(nonatomic) _Bool hasDictationModelVersion; // @synthesize hasDictationModelVersion=_hasDictationModelVersion;
@property(retain, nonatomic) SISchemaDictationAlternativesPresent *dictationAlternativesPresent; // @synthesize dictationAlternativesPresent=_dictationAlternativesPresent;
@property(copy, nonatomic) NSString *dictationModelVersion; // @synthesize dictationModelVersion=_dictationModelVersion;
@property(nonatomic) int dictationModel; // @synthesize dictationModel=_dictationModel;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012b783
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000012b6c5
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000012b481
- (unsigned long long)hash;	// IMP=0x000000000012b401
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012b11f
- (void)writeTo:(id)arg1;	// IMP=0x000000000012b031
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012b024
- (void)deleteDictationAlternativesPresent;	// IMP=0x000000000012b010
- (void)deleteDictationModelVersion;	// IMP=0x000000000012afe7
- (void)deleteDictationModel;	// IMP=0x000000000012afa8
@property(nonatomic) _Bool hasDictationModel;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000341425
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003413ed

@end
