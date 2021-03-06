//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>
{
    NSData *_articleRecordData;	// 8 = 0x8
    NSData *_masterIssueRecordData;	// 16 = 0x10
    NSData *_sourceChannelRecordData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c340
@property(retain, nonatomic) NSData *masterIssueRecordData; // @synthesize masterIssueRecordData=_masterIssueRecordData;
@property(retain, nonatomic) NSData *sourceChannelRecordData; // @synthesize sourceChannelRecordData=_sourceChannelRecordData;
@property(retain, nonatomic) NSData *articleRecordData; // @synthesize articleRecordData=_articleRecordData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000c24e
- (unsigned long long)hash;	// IMP=0x000000000000c1e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c0e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c025
- (void)writeTo:(id)arg1;	// IMP=0x000000000000bfab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000bf9e
- (id)dictionaryRepresentation;	// IMP=0x000000000000bd6d
- (id)description;	// IMP=0x000000000000bcbe
@property(readonly, nonatomic) _Bool hasMasterIssueRecordData;
@property(readonly, nonatomic) _Bool hasSourceChannelRecordData;
@property(readonly, nonatomic) _Bool hasArticleRecordData;

@end

