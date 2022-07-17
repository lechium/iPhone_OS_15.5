//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingeStarted
{
    int _stopReason;	// 8 = 0x8
    struct {
        unsigned int stopReason:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int stopReason; // @synthesize stopReason=_stopReason;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001e1612
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001e1554
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001e13c3
- (unsigned long long)hash;	// IMP=0x00000000001e1398
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e12f3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e12c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e12bb
- (void)deleteStopReason;	// IMP=0x00000000001e1291
@property(nonatomic) _Bool hasStopReason;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034c695

@end
