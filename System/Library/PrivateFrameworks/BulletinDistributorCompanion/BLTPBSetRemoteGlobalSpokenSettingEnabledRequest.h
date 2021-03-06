//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@interface BLTPBSetRemoteGlobalSpokenSettingEnabledRequest : PBRequest <NSCopying>
{
    double _settingDate;	// 8 = 0x8
    _Bool _settingEnabled;	// 16 = 0x10
    struct {
        unsigned int settingDate:1;
        unsigned int settingEnabled:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) double settingDate; // @synthesize settingDate=_settingDate;
@property(nonatomic) _Bool settingEnabled; // @synthesize settingEnabled=_settingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000040098
- (unsigned long long)hash;	// IMP=0x000000000003ff63
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003fe9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003fe1e
- (void)copyTo:(id)arg1;	// IMP=0x000000000003fdc0
- (void)writeTo:(id)arg1;	// IMP=0x000000000003fd4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003fd3f
- (id)dictionaryRepresentation;	// IMP=0x000000000003f9ec
- (id)description;	// IMP=0x000000000003f93d
@property(nonatomic) _Bool hasSettingDate;
@property(nonatomic) _Bool hasSettingEnabled;

@end

