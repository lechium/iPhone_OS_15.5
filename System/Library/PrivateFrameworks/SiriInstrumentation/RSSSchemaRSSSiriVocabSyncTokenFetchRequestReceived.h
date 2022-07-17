//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived
{
    unsigned long long _syncTokenFetchRequestTransferLatencyInMs;	// 8 = 0x8
    struct {
        unsigned int syncTokenFetchRequestTransferLatencyInMs:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long syncTokenFetchRequestTransferLatencyInMs; // @synthesize syncTokenFetchRequestTransferLatencyInMs=_syncTokenFetchRequestTransferLatencyInMs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d9b59
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d9a9b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d996b
- (unsigned long long)hash;	// IMP=0x00000000002d9943
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d989e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d9872
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d9865
- (void)deleteSyncTokenFetchRequestTransferLatencyInMs;	// IMP=0x00000000002d983b
@property(nonatomic) _Bool hasSyncTokenFetchRequestTransferLatencyInMs;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035b70d

@end
