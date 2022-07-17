//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface NBPBRestoreRequest : PBRequest
{
    NSData *_backupID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000204e3
@property(retain, nonatomic) NSData *backupID; // @synthesize backupID=_backupID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002049a
- (unsigned long long)hash;	// IMP=0x001000000002047d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000203e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002036b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000020341
- (void)writeTo:(id)arg1;	// IMP=0x001000000002031d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000020310
- (id)dictionaryRepresentation;	// IMP=0x0010000000020142
- (id)description;	// IMP=0x0010000000020093
@property(readonly, nonatomic) _Bool hasBackupID;

@end
