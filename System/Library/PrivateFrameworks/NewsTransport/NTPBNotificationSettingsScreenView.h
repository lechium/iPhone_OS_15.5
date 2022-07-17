//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBNotificationSettingsScreenView : PBCodable <NSCopying>
{
    NSString *_campaignId;	// 8 = 0x8
    NSString *_campaignType;	// 16 = 0x10
    NSString *_creativeId;	// 24 = 0x18
    int _notificationSettingsScreenViewPresentationReason;	// 32 = 0x20
    struct {
        unsigned int notificationSettingsScreenViewPresentationReason:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000010f8fb
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010f7e9
- (unsigned long long)hash;	// IMP=0x000000000010f752
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010f622
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010f53b
- (void)writeTo:(id)arg1;	// IMP=0x000000000010f49d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010f490
- (id)dictionaryRepresentation;	// IMP=0x000000000010f11e
- (id)description;	// IMP=0x000000000010f06f
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasNotificationSettingsScreenViewPresentationReason;
@property(nonatomic) int notificationSettingsScreenViewPresentationReason; // @synthesize notificationSettingsScreenViewPresentationReason=_notificationSettingsScreenViewPresentationReason;

@end
