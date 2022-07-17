//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoPassSyncStateManifestEntry : PBCodable <NSCopying>
{
    NSString *_fileHash;	// 8 = 0x8
    NSString *_relativePath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ee558
@property(retain, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ee4ab
- (unsigned long long)hash;	// IMP=0x00000000001ee45e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ee396
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ee2f8
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ee287
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ee220
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ee213
- (id)dictionaryRepresentation;	// IMP=0x00000000001edffc
- (id)description;	// IMP=0x00000000001edf4d

@end
