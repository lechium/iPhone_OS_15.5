//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_playerInfoContextRequestTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c7a8e
- (unsigned long long)hash;	// IMP=0x00000000000c7a71
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c79d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c783a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c770a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c76fd
- (id)dictionaryRepresentation;	// IMP=0x00000000000c74ca
- (id)description;	// IMP=0x00000000000c741b

@end
