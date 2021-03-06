//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray *_containerPrivacySettings;	// 8 = 0x8
}

+ (Class)containerPrivacySettingsType;	// IMP=0x0000000000186e34
- (void).cxx_destruct;	// IMP=0x00000000001878c7
@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018776d
- (unsigned long long)hash;	// IMP=0x0000000000187750
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001876b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001874f3
- (void)copyTo:(id)arg1;	// IMP=0x000000000018742c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001872fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001872ef
- (id)dictionaryRepresentation;	// IMP=0x0000000000186ef4
- (id)description;	// IMP=0x0000000000186e45
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000186e17
- (unsigned long long)containerPrivacySettingsCount;	// IMP=0x0000000000186dfa
- (void)addContainerPrivacySettings:(id)arg1;	// IMP=0x0000000000186d90
- (void)clearContainerPrivacySettings;	// IMP=0x0000000000186d73

@end

