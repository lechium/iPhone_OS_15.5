//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString;

@interface SYPeer : PBCodable <NSCopying>
{
    NSString *_generationID;	// 8 = 0x8
    NSString *_peerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a5fb9
@property(retain, nonatomic) NSString *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a5f0c
- (unsigned long long)hash;	// IMP=0x00000000000a5ebf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a5df7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5d59
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a5cfb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a5c99
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a5c8c
- (id)dictionaryRepresentation;	// IMP=0x00000000000a5a75
- (id)description;	// IMP=0x00000000000a59c6
@property(readonly, nonatomic) _Bool hasGenerationID;
- (id)initWithPeerID:(id)arg1 generation:(id)arg2;	// IMP=0x00000000000064f0

@end

