//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRColorProtobuf : PBCodable <NSCopying>
{
    float _alpha;	// 8 = 0x8
    float _blue;	// 12 = 0xc
    float _green;	// 16 = 0x10
    float _red;	// 20 = 0x14
    struct {
        unsigned int alpha:1;
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x000000000023ee4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023ed3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023ec7e
- (void)writeTo:(id)arg1;	// IMP=0x000000000023ebc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023ebb8
- (id)dictionaryRepresentation;	// IMP=0x000000000023e723
- (id)description;	// IMP=0x000000000023e674

@end
