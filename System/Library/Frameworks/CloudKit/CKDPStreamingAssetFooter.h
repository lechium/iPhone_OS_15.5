//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable <NSCopying>
{
    NSData *_md5;	// 8 = 0x8
    int _status;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009357c
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000093506
- (unsigned long long)hash;	// IMP=0x00000000000934ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093420
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009339a
- (void)copyTo:(id)arg1;	// IMP=0x000000000009336a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000932f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000930e7
- (id)dictionaryRepresentation;	// IMP=0x0000000000093013
- (id)description;	// IMP=0x0000000000092f64
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000092f02
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000092ead

@end

