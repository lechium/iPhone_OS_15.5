//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived
{
    unsigned long long _syncDataUpdateNotificationLatencyInMs;	// 8 = 0x8
    struct {
        unsigned int syncDataUpdateNotificationLatencyInMs:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long syncDataUpdateNotificationLatencyInMs; // @synthesize syncDataUpdateNotificationLatencyInMs=_syncDataUpdateNotificationLatencyInMs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d970a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d964c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d951c
- (unsigned long long)hash;	// IMP=0x00000000002d94f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d944f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d9423
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d9416
- (void)deleteSyncDataUpdateNotificationLatencyInMs;	// IMP=0x00000000002d93ec
@property(nonatomic) _Bool hasSyncDataUpdateNotificationLatencyInMs;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035b6d5

@end
