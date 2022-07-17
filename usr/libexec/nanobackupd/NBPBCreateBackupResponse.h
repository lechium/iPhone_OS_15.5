//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NBPBBackupMetadata, NSData;

@interface NBPBCreateBackupResponse : PBCodable
{
    NBPBBackupMetadata *_backup;	// 8 = 0x8
    NSData *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000012da7
@property(retain, nonatomic) NSData *error; // @synthesize error=_error;
@property(retain, nonatomic) NBPBBackupMetadata *backup; // @synthesize backup=_backup;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000012ce3
- (unsigned long long)hash;	// IMP=0x0010000000012c96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000012bce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000012b30
- (void)copyTo:(id)arg1;	// IMP=0x0010000000012acd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000012a70
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000012a63
- (id)dictionaryRepresentation;	// IMP=0x00100000000127bf
- (id)description;	// IMP=0x0010000000012710
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasBackup;

@end
