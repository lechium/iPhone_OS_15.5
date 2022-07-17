//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NETSchemaNETSessionConnectionNetwork, NSArray, NSData;

@interface NETSchemaNETSessionConnectionSnapshotCaptured
{
    unsigned int _sequenceNumber;	// 8 = 0x8
    int _snapshotTriggerReason;	// 12 = 0xc
    NETSchemaNETSessionConnectionNetwork *_network;	// 16 = 0x10
    NSArray *_networkInterfaces;	// 24 = 0x18
    struct {
        unsigned int sequenceNumber:1;
        unsigned int snapshotTriggerReason:1;
    } _has;	// 32 = 0x20
    _Bool _hasNetwork;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000262a29
@property(nonatomic) _Bool hasNetwork; // @synthesize hasNetwork=_hasNetwork;
@property(copy, nonatomic) NSArray *networkInterfaces; // @synthesize networkInterfaces=_networkInterfaces;
@property(retain, nonatomic) NETSchemaNETSessionConnectionNetwork *network; // @synthesize network=_network;
@property(nonatomic) int snapshotTriggerReason; // @synthesize snapshotTriggerReason=_snapshotTriggerReason;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002625d0
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000262512
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000026209a
- (unsigned long long)hash;	// IMP=0x0000000000261ffe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000261cd6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000261b04
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000261af7
- (id)networkInterfacesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000261ada
- (unsigned long long)networkInterfacesCount;	// IMP=0x0000000000261abd
- (void)addNetworkInterfaces:(id)arg1;	// IMP=0x0000000000261a43
- (void)deleteNetworkInterfaces;	// IMP=0x0000000000261a31
- (void)clearNetworkInterfaces;	// IMP=0x0000000000261a14
- (void)deleteNetwork;	// IMP=0x0000000000261a00
- (void)deleteSnapshotTriggerReason;	// IMP=0x00000000002619c1
@property(nonatomic) _Bool hasSnapshotTriggerReason;
- (void)deleteSequenceNumber;	// IMP=0x000000000026194e
@property(nonatomic) _Bool hasSequenceNumber;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000352a91
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000352a59

@end
