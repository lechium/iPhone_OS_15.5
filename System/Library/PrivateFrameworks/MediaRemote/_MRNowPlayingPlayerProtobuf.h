//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying>
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _mxSessionIDs;	// 8 = 0x8
    unsigned int _audioSessionID;	// 32 = 0x20
    int _audioSessionType;	// 36 = 0x24
    NSString *_displayName;	// 40 = 0x28
    NSString *_iconURL;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    struct {
        unsigned int audioSessionID:1;
        unsigned int audioSessionType:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000024a5b3
- (unsigned long long)hash;	// IMP=0x000000000024a36c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024a1fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024a0e1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000249f91
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000249f84
- (id)dictionaryRepresentation;	// IMP=0x0000000000249938
- (id)description;	// IMP=0x0000000000249889
- (void)dealloc;	// IMP=0x0000000000249690

@end
