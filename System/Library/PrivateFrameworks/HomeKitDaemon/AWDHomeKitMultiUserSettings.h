//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying>
{
    NSMutableArray *_homeKitMultiUserSettingsValuesByKeyPaths;	// 8 = 0x8
    _Bool _isOwner;	// 16 = 0x10
    struct {
        unsigned int isOwner:1;
    } _has;	// 20 = 0x14
}

+ (Class)homeKitMultiUserSettingsValuesByKeyPathType;	// IMP=0x0000000000aade9b
- (void).cxx_destruct;	// IMP=0x0000000000aadc2c
@property(retain, nonatomic) NSMutableArray *homeKitMultiUserSettingsValuesByKeyPaths; // @synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000aada84
- (unsigned long long)hash;	// IMP=0x0000000000aada37
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aad967
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aad77a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000aad695
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aad53f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aad532
- (id)dictionaryRepresentation;	// IMP=0x0000000000aad2a3
- (id)description;	// IMP=0x0000000000aad1f4
- (id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000aad1d7
- (unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;	// IMP=0x0000000000aad1ba
- (void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1;	// IMP=0x0000000000aad150
- (void)clearHomeKitMultiUserSettingsValuesByKeyPaths;	// IMP=0x0000000000aad133
@property(nonatomic) _Bool hasIsOwner;

@end

