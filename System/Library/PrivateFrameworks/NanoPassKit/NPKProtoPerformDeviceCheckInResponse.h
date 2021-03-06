//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoPerformDeviceCheckInResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    _Bool _pending;	// 16 = 0x10
    _Bool _success;	// 17 = 0x11
    CDStruct_5ee4970e _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000000211fc
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000021137
- (unsigned long long)hash;	// IMP=0x00000000000210cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020fd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020f23
- (void)copyTo:(id)arg1;	// IMP=0x0000000000020ea3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020e13
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020e06
- (id)dictionaryRepresentation;	// IMP=0x0000000000020a29
- (id)description;	// IMP=0x000000000002097a
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

