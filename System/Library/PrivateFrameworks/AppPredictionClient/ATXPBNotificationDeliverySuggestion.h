//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class ATXPBInterruptionManagerTuningSuggestion, ATXPBNotificationPromotingSuggestion, ATXPBNotificationQuietingSuggestion, ATXPBNotificationSmartPauseSuggestion, ATXPBSendMessagesToDigestSuggestion, ATXPBSendToDigestSuggestion, ATXPBUrgencyTuningSuggestion, NSString;

@interface ATXPBNotificationDeliverySuggestion : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSString *_entityIdentifier;	// 16 = 0x10
    ATXPBInterruptionManagerTuningSuggestion *_interruptionManagerTuning;	// 24 = 0x18
    int _oneofNotificationDeliverySuggestion;	// 32 = 0x20
    ATXPBNotificationPromotingSuggestion *_promoting;	// 40 = 0x28
    ATXPBNotificationQuietingSuggestion *_quieting;	// 48 = 0x30
    int _scope;	// 56 = 0x38
    ATXPBSendMessagesToDigestSuggestion *_sendMessagesToDigest;	// 64 = 0x40
    ATXPBSendToDigestSuggestion *_sendToDigest;	// 72 = 0x48
    ATXPBNotificationSmartPauseSuggestion *_smartPause;	// 80 = 0x50
    NSString *_triggerNotificationUUID;	// 88 = 0x58
    ATXPBUrgencyTuningSuggestion *_urgencyTuning;	// 96 = 0x60
    NSString *_uuid;	// 104 = 0x68
    struct {
        unsigned int timestamp:1;
        unsigned int oneofNotificationDeliverySuggestion:1;
        unsigned int scope:1;
    } _has;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000011f7ae
@property(retain, nonatomic) NSString *triggerNotificationUUID; // @synthesize triggerNotificationUUID=_triggerNotificationUUID;
@property(retain, nonatomic) NSString *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int scope; // @synthesize scope=_scope;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) ATXPBSendMessagesToDigestSuggestion *sendMessagesToDigest; // @synthesize sendMessagesToDigest=_sendMessagesToDigest;
@property(retain, nonatomic) ATXPBUrgencyTuningSuggestion *urgencyTuning; // @synthesize urgencyTuning=_urgencyTuning;
@property(retain, nonatomic) ATXPBSendToDigestSuggestion *sendToDigest; // @synthesize sendToDigest=_sendToDigest;
@property(retain, nonatomic) ATXPBInterruptionManagerTuningSuggestion *interruptionManagerTuning; // @synthesize interruptionManagerTuning=_interruptionManagerTuning;
@property(retain, nonatomic) ATXPBNotificationPromotingSuggestion *promoting; // @synthesize promoting=_promoting;
@property(retain, nonatomic) ATXPBNotificationQuietingSuggestion *quieting; // @synthesize quieting=_quieting;
@property(retain, nonatomic) ATXPBNotificationSmartPauseSuggestion *smartPause; // @synthesize smartPause=_smartPause;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011f43e
- (unsigned long long)hash;	// IMP=0x000000000011f1cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011eec2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011ec85
- (void)copyTo:(id)arg1;	// IMP=0x000000000011eabe
- (void)writeTo:(id)arg1;	// IMP=0x000000000011e929
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011e91c
- (id)dictionaryRepresentation;	// IMP=0x000000000011ddee
- (id)description;	// IMP=0x000000000011dd3f
@property(readonly, nonatomic) _Bool hasTriggerNotificationUUID;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;
@property(nonatomic) _Bool hasScope;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasUuid;
- (void)clearOneofValuesForOneofNotificationDeliverySuggestion;	// IMP=0x000000000011dbb4
- (int)StringAsOneofNotificationDeliverySuggestion:(id)arg1;	// IMP=0x000000000011da7c
- (id)oneofNotificationDeliverySuggestionAsString:(int)arg1;	// IMP=0x000000000011d9cb
@property(nonatomic) _Bool hasOneofNotificationDeliverySuggestion;
@property(nonatomic) int oneofNotificationDeliverySuggestion; // @synthesize oneofNotificationDeliverySuggestion=_oneofNotificationDeliverySuggestion;
@property(readonly, nonatomic) _Bool hasSendMessagesToDigest;
@property(readonly, nonatomic) _Bool hasUrgencyTuning;
@property(readonly, nonatomic) _Bool hasSendToDigest;
@property(readonly, nonatomic) _Bool hasInterruptionManagerTuning;
@property(readonly, nonatomic) _Bool hasPromoting;
@property(readonly, nonatomic) _Bool hasQuieting;
@property(readonly, nonatomic) _Bool hasSmartPause;

@end
