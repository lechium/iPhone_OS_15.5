//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAccountSourceType : PBCodable <NSCopying>
{
    NSString *_accountId;	// 8 = 0x8
    unsigned int _fullSyncVersion;	// 16 = 0x10
    unsigned int _sourceType;	// 20 = 0x14
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int sourceType:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001ab51
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001aa8c
- (unsigned long long)hash;	// IMP=0x000000000001aa1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a937
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a882
- (void)copyTo:(id)arg1;	// IMP=0x000000000001a802
- (void)writeTo:(id)arg1;	// IMP=0x000000000001a774
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a767
- (id)dictionaryRepresentation;	// IMP=0x000000000001a39c
- (id)description;	// IMP=0x000000000001a2ed
@property(nonatomic) _Bool hasSourceType;
@property(nonatomic) _Bool hasFullSyncVersion;
@property(readonly, nonatomic) _Bool hasAccountId;

@end
