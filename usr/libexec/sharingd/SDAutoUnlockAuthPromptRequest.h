//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface SDAutoUnlockAuthPromptRequest : PBRequest
{
    NSString *_appName;	// 8 = 0x8
    NSData *_iconHash;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000021efa9
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSData *iconHash; // @synthesize iconHash=_iconHash;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000021eecc
- (unsigned long long)hash;	// IMP=0x001000000021ee4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000021ed57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000021ec96
- (void)copyTo:(id)arg1;	// IMP=0x001000000021ec13
- (void)writeTo:(id)arg1;	// IMP=0x001000000021eb92
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000021eb85
- (id)dictionaryRepresentation;	// IMP=0x001000000021e86c
- (id)description;	// IMP=0x001000000021e7bd
@property(readonly, nonatomic) _Bool hasAppName;
@property(readonly, nonatomic) _Bool hasIconHash;
@property(nonatomic) _Bool hasVersion;

@end
