//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoSystemSettings/NSCopying-Protocol.h>

@class NSData;

@interface NSSProfileDataRespMsg : PBCodable <NSCopying>
{
    NSData *_profileData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003dcc
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003d83
- (unsigned long long)hash;	// IMP=0x0000000000003d66
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003ccc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003c54
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003c2a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003c06
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003bf9
- (id)dictionaryRepresentation;	// IMP=0x0000000000003a2b
- (id)description;	// IMP=0x000000000000397c
@property(readonly, nonatomic) _Bool hasProfileData;

@end

