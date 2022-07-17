//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLReactionCommand : PBCodable <NSCopying>
{
    NSString *_itemId;	// 8 = 0x8
    NSString *_reaction;	// 16 = 0x10
    NSString *_reactionId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a33c
- (unsigned long long)hash;	// IMP=0x000000000000a2cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a1d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a113
- (void)writeTo:(id)arg1;	// IMP=0x000000000000a099
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000a08c
- (id)dictionaryRepresentation;	// IMP=0x0000000000009fe2
- (id)description;	// IMP=0x0000000000009f33

@end
