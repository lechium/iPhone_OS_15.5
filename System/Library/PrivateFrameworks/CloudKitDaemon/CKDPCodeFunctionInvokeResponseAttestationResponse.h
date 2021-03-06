//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying>
{
    NSMutableArray *_attestations;	// 8 = 0x8
}

+ (Class)attestationsType;	// IMP=0x00000000001c3afd
- (void).cxx_destruct;	// IMP=0x00000000001c4590
@property(retain, nonatomic) NSMutableArray *attestations; // @synthesize attestations=_attestations;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c4436
- (unsigned long long)hash;	// IMP=0x00000000001c4419
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c437f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c41bc
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c40f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c3fc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c3fb8
- (id)dictionaryRepresentation;	// IMP=0x00000000001c3bbd
- (id)description;	// IMP=0x00000000001c3b0e
- (id)attestationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c3ae0
- (unsigned long long)attestationsCount;	// IMP=0x00000000001c3ac3
- (void)addAttestations:(id)arg1;	// IMP=0x00000000001c3a59
- (void)clearAttestations;	// IMP=0x00000000001c3a3c

@end

