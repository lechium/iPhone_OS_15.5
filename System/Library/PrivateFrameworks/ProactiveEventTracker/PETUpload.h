//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PETMetadata;

@interface PETUpload : PBCodable <NSCopying>
{
    NSMutableArray *_aggregatedMessages;	// 8 = 0x8
    NSData *_compressedData;	// 16 = 0x10
    NSData *_compressedMessages;	// 24 = 0x18
    PETMetadata *_metadata;	// 32 = 0x20
    NSMutableArray *_unaggregatedMessages;	// 40 = 0x28
    _Bool _isCompressed;	// 48 = 0x30
    struct {
        unsigned int isCompressed:1;
    } _has;	// 52 = 0x34
}

+ (Class)unaggregatedMessagesType;	// IMP=0x0000000000010645
+ (Class)aggregatedMessagesType;	// IMP=0x0000000000010634
- (void).cxx_destruct;	// IMP=0x000000000001025f
@property(retain, nonatomic) NSData *compressedMessages; // @synthesize compressedMessages=_compressedMessages;
@property(retain, nonatomic) NSData *compressedData; // @synthesize compressedData=_compressedData;
@property(nonatomic) _Bool isCompressed; // @synthesize isCompressed=_isCompressed;
@property(retain, nonatomic) NSMutableArray *unaggregatedMessages; // @synthesize unaggregatedMessages=_unaggregatedMessages;
@property(retain, nonatomic) NSMutableArray *aggregatedMessages; // @synthesize aggregatedMessages=_aggregatedMessages;
@property(retain, nonatomic) PETMetadata *metadata; // @synthesize metadata=_metadata;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000feb7
- (unsigned long long)hash;	// IMP=0x000000000000fde0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fc44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f8ab
- (void)copyTo:(id)arg1;	// IMP=0x000000000000f6c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f432
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f425
- (id)dictionaryRepresentation;	// IMP=0x000000000000ef24
- (id)description;	// IMP=0x000000000000ee75
@property(readonly, nonatomic) _Bool hasCompressedMessages;
@property(readonly, nonatomic) _Bool hasCompressedData;
@property(nonatomic) _Bool hasIsCompressed;
- (id)unaggregatedMessagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000ede9
- (unsigned long long)unaggregatedMessagesCount;	// IMP=0x000000000000edcc
- (void)addUnaggregatedMessages:(id)arg1;	// IMP=0x000000000000ed62
- (void)clearUnaggregatedMessages;	// IMP=0x000000000000ed45
- (id)aggregatedMessagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000ed28
- (unsigned long long)aggregatedMessagesCount;	// IMP=0x000000000000ed0b
- (void)addAggregatedMessages:(id)arg1;	// IMP=0x000000000000eca1
- (void)clearAggregatedMessages;	// IMP=0x000000000000ec84
@property(readonly, nonatomic) _Bool hasMetadata;

@end
