//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable <NSCopying>
{
    long long _representativeItemCloudID;	// 8 = 0x8
    long long _storeAdamID;	// 16 = 0x10
    NSString *_artistName;	// 24 = 0x18
    NSString *_playbackAuthorizationToken;	// 32 = 0x20
    CDStruct_c223d907 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f3e1c
- (unsigned long long)hash;	// IMP=0x00000000000f3d8e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f3c73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f3b93
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f3ae6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f3ad9
- (id)dictionaryRepresentation;	// IMP=0x00000000000f3992
- (id)description;	// IMP=0x00000000000f38e3

@end
