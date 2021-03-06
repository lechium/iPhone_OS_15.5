//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassResponse : PBCodable <NSCopying>
{
    _Bool _pending;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    CDStruct_5ee4970e _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000459c8
- (unsigned long long)hash;	// IMP=0x0000000000045982
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000458b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045837
- (void)copyTo:(id)arg1;	// IMP=0x00000000000457dd
- (void)writeTo:(id)arg1;	// IMP=0x000000000004576a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004575d
- (id)dictionaryRepresentation;	// IMP=0x00000000000453d8
- (id)description;	// IMP=0x0000000000045329
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

