//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaSiriUISettings
{
    _Bool _alwaysShowUserSpeechTranscript;	// 8 = 0x8
    _Bool _alwaysBlurBackground;	// 9 = 0x9
    _Bool _alwaysShowSiriDialog;	// 10 = 0xa
    struct {
        unsigned int alwaysShowUserSpeechTranscript:1;
        unsigned int alwaysBlurBackground:1;
        unsigned int alwaysShowSiriDialog:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool alwaysShowSiriDialog; // @synthesize alwaysShowSiriDialog=_alwaysShowSiriDialog;
@property(nonatomic) _Bool alwaysBlurBackground; // @synthesize alwaysBlurBackground=_alwaysBlurBackground;
@property(nonatomic) _Bool alwaysShowUserSpeechTranscript; // @synthesize alwaysShowUserSpeechTranscript=_alwaysShowUserSpeechTranscript;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e9deb
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e9d2d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e9b37
- (unsigned long long)hash;	// IMP=0x00000000002e9ad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e99b8
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e9925
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e9918
- (void)deleteAlwaysShowSiriDialog;	// IMP=0x00000000002e98ee
@property(nonatomic) _Bool hasAlwaysShowSiriDialog;
- (void)deleteAlwaysBlurBackground;	// IMP=0x00000000002e9879
@property(nonatomic) _Bool hasAlwaysBlurBackground;
- (void)deleteAlwaysShowUserSpeechTranscript;	// IMP=0x00000000002e9806
@property(nonatomic) _Bool hasAlwaysShowUserSpeechTranscript;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035c66f

@end
