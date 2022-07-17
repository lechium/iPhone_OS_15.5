//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SADSchemaSADImmediateDownloadTriggered
{
    int _locale;	// 8 = 0x8
    _Bool _existingAssets;	// 12 = 0xc
    unsigned int _retryCount;	// 16 = 0x10
    struct {
        unsigned int locale:1;
        unsigned int existingAssets:1;
        unsigned int retryCount:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool existingAssets; // @synthesize existingAssets=_existingAssets;
@property(nonatomic) int locale; // @synthesize locale=_locale;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002df916
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002df858
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002df2ba
- (unsigned long long)hash;	// IMP=0x00000000002df258
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002df13c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002df0ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002df09e
- (void)deleteRetryCount;	// IMP=0x00000000002df074
@property(nonatomic) _Bool hasRetryCount;
- (void)deleteExistingAssets;	// IMP=0x00000000002defff
@property(nonatomic) _Bool hasExistingAssets;
- (void)deleteLocale;	// IMP=0x00000000002def8c
@property(nonatomic) _Bool hasLocale;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035bda9

@end
