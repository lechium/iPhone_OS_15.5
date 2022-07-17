//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPETMessageFrameTypeIntrospectable-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@class NSString;

@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying>
{
    long long _deviceId;	// 8 = 0x8
    long long _userId;	// 16 = 0x10
    NSString *_locale;	// 24 = 0x18
    int _timezoneOffset;	// 32 = 0x20
    unsigned int _userSegment;	// 36 = 0x24
    unsigned int _version;	// 40 = 0x28
    _Bool _categoryRootInstalled;	// 44 = 0x2c
    struct {
        unsigned int deviceId:1;
        unsigned int userId:1;
        unsigned int timezoneOffset:1;
        unsigned int userSegment:1;
        unsigned int version:1;
        unsigned int categoryRootInstalled:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000aea9d
@property(nonatomic) _Bool categoryRootInstalled; // @synthesize categoryRootInstalled=_categoryRootInstalled;
@property(nonatomic) unsigned int userSegment; // @synthesize userSegment=_userSegment;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) long long deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ae90b
- (unsigned long long)hash;	// IMP=0x00000000000ae810
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ae64c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ae511
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ae406
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ae2e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ae2d4
- (id)dictionaryRepresentation;	// IMP=0x00000000000adb1d
- (id)description;	// IMP=0x00000000000ada4d
@property(nonatomic) _Bool hasCategoryRootInstalled;
@property(nonatomic) _Bool hasUserSegment;
@property(nonatomic) _Bool hasTimezoneOffset;
@property(readonly, nonatomic) _Bool hasLocale;
@property(nonatomic) _Bool hasDeviceId;
@property(nonatomic) _Bool hasUserId;
@property(nonatomic) _Bool hasVersion;
- (int)messageFrameType;	// IMP=0x00000000000a163c

@end
