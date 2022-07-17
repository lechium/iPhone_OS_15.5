//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoPassSyncReconciledStateAccepted : PBCodable <NSCopying>
{
    NSData *_reconciledStateHash;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e93f0
@property(retain, nonatomic) NSData *reconciledStateHash; // @synthesize reconciledStateHash=_reconciledStateHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e93a7
- (unsigned long long)hash;	// IMP=0x00000000000e938a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e92f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9278
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e924e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e922a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e921d
- (id)dictionaryRepresentation;	// IMP=0x00000000000e904f
- (id)description;	// IMP=0x00000000000e8fa0
@property(readonly, nonatomic) _Bool hasReconciledStateHash;

@end
