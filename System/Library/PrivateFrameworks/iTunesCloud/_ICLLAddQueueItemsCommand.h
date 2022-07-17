//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ICLLAddQueueItemsCommand : PBCodable <NSCopying>
{
    int _insertPositionType;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    int _position;	// 24 = 0x18
    NSString *_queueContext;	// 32 = 0x20
    int _revision;	// 40 = 0x28
    struct {
        unsigned int insertPositionType:1;
        unsigned int position:1;
        unsigned int revision:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000043572
- (unsigned long long)hash;	// IMP=0x00000000000434b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004335f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004312e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000042f62
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000042f55
- (id)dictionaryRepresentation;	// IMP=0x0000000000042be2
- (id)description;	// IMP=0x0000000000042b33

@end
