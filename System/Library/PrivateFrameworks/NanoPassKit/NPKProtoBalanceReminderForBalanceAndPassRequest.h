//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying>
{
    NSData *_balanceBytes;	// 8 = 0x8
    NSString *_uniqueID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001234aa
@property(retain, nonatomic) NSData *balanceBytes; // @synthesize balanceBytes=_balanceBytes;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001233fd
- (unsigned long long)hash;	// IMP=0x00000000001233b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001232e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012324a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001231e7
- (void)writeTo:(id)arg1;	// IMP=0x000000000012318a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012317d
- (id)dictionaryRepresentation;	// IMP=0x0000000000122f68
- (id)description;	// IMP=0x0000000000122eb9
@property(readonly, nonatomic) _Bool hasBalanceBytes;
@property(readonly, nonatomic) _Bool hasUniqueID;

@end

