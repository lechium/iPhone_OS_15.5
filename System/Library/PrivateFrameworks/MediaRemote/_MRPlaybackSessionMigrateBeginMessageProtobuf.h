//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

__attribute__((visibility("hidden")))
@interface _MRPlaybackSessionMigrateBeginMessageProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 8 = 0x8
    _MRPlaybackSessionRequestProtobuf *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001861fd
- (unsigned long long)hash;	// IMP=0x000000000018617e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001860b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000186018
- (void)writeTo:(id)arg1;	// IMP=0x0000000000185f87
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000185f7a
- (id)dictionaryRepresentation;	// IMP=0x0000000000185c90
- (id)description;	// IMP=0x0000000000185be1

@end

