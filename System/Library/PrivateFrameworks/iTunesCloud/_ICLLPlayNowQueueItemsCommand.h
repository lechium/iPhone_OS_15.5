//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ICLLPlayNowQueueItemsCommand : PBCodable <NSCopying>
{
    NSMutableArray *_items;	// 8 = 0x8
    int _position;	// 16 = 0x10
    NSString *_preferredPlayItemId;	// 24 = 0x18
    NSString *_queueContext;	// 32 = 0x20
    int _revision;	// 40 = 0x28
    CDStruct_bf543796 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000007f47
- (unsigned long long)hash;	// IMP=0x0000000000007e92
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007d35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007aef
- (void)writeTo:(id)arg1;	// IMP=0x000000000000792c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000791f
- (id)dictionaryRepresentation;	// IMP=0x00000000000075e0
- (id)description;	// IMP=0x0000000000007531

@end

