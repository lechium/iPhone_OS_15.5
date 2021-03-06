//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying>
{
    int _channelPickerPresentationReason;	// 8 = 0x8
    int _countOfNotificationsSelected;	// 12 = 0xc
    int _onboardingScreenType;	// 16 = 0x10
    int _previouslyCompletedOnboardingOsVersion;	// 20 = 0x14
    NSString *_referringSourceApplication;	// 24 = 0x18
    NSString *_referringUrl;	// 32 = 0x20
    int _userAction;	// 40 = 0x28
    NSString *_userActivityType;	// 48 = 0x30
    _Bool _fromPersonalizeNews;	// 56 = 0x38
    struct {
        unsigned int channelPickerPresentationReason:1;
        unsigned int countOfNotificationsSelected:1;
        unsigned int onboardingScreenType:1;
        unsigned int previouslyCompletedOnboardingOsVersion:1;
        unsigned int userAction:1;
        unsigned int fromPersonalizeNews:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000017752c
@property(nonatomic) _Bool fromPersonalizeNews; // @synthesize fromPersonalizeNews=_fromPersonalizeNews;
@property(nonatomic) int countOfNotificationsSelected; // @synthesize countOfNotificationsSelected=_countOfNotificationsSelected;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(retain, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000177369
- (unsigned long long)hash;	// IMP=0x000000000017722e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000177031
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000176ec1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000176d7d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000176d70
- (id)dictionaryRepresentation;	// IMP=0x0000000000176554
- (id)description;	// IMP=0x00000000001764a5
- (int)StringAsChannelPickerPresentationReason:(id)arg1;	// IMP=0x0000000000176413
- (id)channelPickerPresentationReasonAsString:(int)arg1;	// IMP=0x00000000001763ad
@property(nonatomic) _Bool hasChannelPickerPresentationReason;
@property(nonatomic) int channelPickerPresentationReason; // @synthesize channelPickerPresentationReason=_channelPickerPresentationReason;
@property(nonatomic) _Bool hasFromPersonalizeNews;
@property(nonatomic) _Bool hasPreviouslyCompletedOnboardingOsVersion;
@property(nonatomic) int previouslyCompletedOnboardingOsVersion; // @synthesize previouslyCompletedOnboardingOsVersion=_previouslyCompletedOnboardingOsVersion;
@property(nonatomic) _Bool hasCountOfNotificationsSelected;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;
@property(readonly, nonatomic) _Bool hasUserActivityType;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(readonly, nonatomic) _Bool hasReferringSourceApplication;
@property(nonatomic) _Bool hasOnboardingScreenType;
@property(nonatomic) int onboardingScreenType; // @synthesize onboardingScreenType=_onboardingScreenType;

@end

