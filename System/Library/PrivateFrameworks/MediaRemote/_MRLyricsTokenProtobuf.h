//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _MRLyricsTokenProtobuf : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_userData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000124dc0
- (unsigned long long)hash;	// IMP=0x0000000000124d41
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000124c79
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000124bdb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000124b4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000124b3d
- (id)dictionaryRepresentation;	// IMP=0x0000000000124928
- (id)description;	// IMP=0x0000000000124879

@end
