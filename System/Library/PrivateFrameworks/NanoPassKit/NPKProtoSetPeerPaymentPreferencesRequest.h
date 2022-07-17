//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoSetPeerPaymentPreferencesRequest : PBRequest <NSCopying>
{
    NSData *_peerPaymentPreferencesData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000177195
@property(retain, nonatomic) NSData *peerPaymentPreferencesData; // @synthesize peerPaymentPreferencesData=_peerPaymentPreferencesData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017714c
- (unsigned long long)hash;	// IMP=0x000000000017712f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000177095
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017701d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000176ff3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000176fcf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000176fc2
- (id)dictionaryRepresentation;	// IMP=0x0000000000176df4
- (id)description;	// IMP=0x0000000000176d45
@property(readonly, nonatomic) _Bool hasPeerPaymentPreferencesData;

@end
