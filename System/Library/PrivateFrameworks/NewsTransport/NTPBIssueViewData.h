//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBIssueViewData : PBCodable <NSCopying>
{
    NSData *_issueViewingSessionId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000174b8a
@property(retain, nonatomic) NSData *issueViewingSessionId; // @synthesize issueViewingSessionId=_issueViewingSessionId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000174b41
- (unsigned long long)hash;	// IMP=0x0000000000174b24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000174a8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174a12
- (void)writeTo:(id)arg1;	// IMP=0x00000000001749ee
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001749e1
- (id)dictionaryRepresentation;	// IMP=0x0000000000174813
- (id)description;	// IMP=0x0000000000174764
@property(readonly, nonatomic) _Bool hasIssueViewingSessionId;

@end

