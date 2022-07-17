//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCloudQuota/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, _ICQBannerSpecification, _ICQButtonSpecification, _ICQDeviceInfo, _ICQFollowupSpecification, _ICQUpgradeFlowSpecification, _ICQXMLSpecification;

@interface ICQOffer : NSObject <NSSecureCoding>
{
    NSDictionary *_serverDictionary;	// 8 = 0x8
    NSDictionary *_planDetailsOverride;	// 16 = 0x10
    long long _actionOverride;	// 24 = 0x18
    _Bool _iTunesAccountExists;	// 32 = 0x20
    NSDate *_retrievalDate;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
    long long _offerType;	// 56 = 0x38
    long long _level;	// 64 = 0x40
    NSString *_bundleIdentifier;	// 72 = 0x48
    NSString *_appVersionId;	// 80 = 0x50
    NSString *_accountAltDSID;	// 88 = 0x58
    NSString *_notificationID;	// 96 = 0x60
    NSString *_offerId;	// 104 = 0x68
    _ICQBannerSpecification *_bannerSpecification;	// 112 = 0x70
    _ICQButtonSpecification *_buttonSpecification;	// 120 = 0x78
    _ICQFollowupSpecification *_followupSpecification;	// 128 = 0x80
    _ICQUpgradeFlowSpecification *_upgradeFlowSpecification;	// 136 = 0x88
    _ICQXMLSpecification *_XMLSpecification;	// 144 = 0x90
    _ICQDeviceInfo *_deviceInfo;	// 152 = 0x98
    NSString *_context;	// 160 = 0xa0
    NSURL *_requestedRemoteUIURL;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027d69
+ (id)sampleOfferForLevel:(long long)arg1;	// IMP=0x0000000000028d37
- (void).cxx_destruct;	// IMP=0x0000000000028c58
@property(retain, nonatomic) NSURL *requestedRemoteUIURL; // @synthesize requestedRemoteUIURL=_requestedRemoteUIURL;
@property(nonatomic) _Bool iTunesAccountExists; // @synthesize iTunesAccountExists=_iTunesAccountExists;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) _ICQDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) _ICQXMLSpecification *XMLSpecification; // @synthesize XMLSpecification=_XMLSpecification;
@property(retain, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification; // @synthesize upgradeFlowSpecification=_upgradeFlowSpecification;
@property(retain, nonatomic) _ICQFollowupSpecification *followupSpecification; // @synthesize followupSpecification=_followupSpecification;
@property(retain, nonatomic) _ICQButtonSpecification *buttonSpecification; // @synthesize buttonSpecification=_buttonSpecification;
@property(retain, nonatomic) _ICQBannerSpecification *bannerSpecification; // @synthesize bannerSpecification=_bannerSpecification;
@property(retain, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(retain, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(retain, nonatomic) NSString *accountAltDSID; // @synthesize accountAltDSID=_accountAltDSID;
@property(retain, nonatomic) NSString *appVersionId; // @synthesize appVersionId=_appVersionId;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) long long offerType; // @synthesize offerType=_offerType;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
- (id)debugDescription;	// IMP=0x0000000000028a5a
- (id)journeyLinkForId:(id)arg1;	// IMP=0x00000000000287a1
- (id)_processICQURL:(id)arg1;	// IMP=0x00000000000283e2
@property(readonly, nonatomic) NSURL *remoteUIURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027e9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027d71
- (_Bool)showsPhotoVideoCounts;	// IMP=0x0000000000027c5b
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)_updateRequestedRemoteUIURLWithURL:(id)arg1;	// IMP=0x000000000002a516
- (_Bool)placeholderExists;	// IMP=0x000000000002a500
- (_Bool)isDetailAppBannerOffer;	// IMP=0x000000000002a4ea
- (id)alertSpecificationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002a300
- (id)alertSpecificationForAlertKey:(id)arg1;	// IMP=0x0000000000029fa6
- (id)storagePurchaseKeybagForButtonId:(id)arg1;	// IMP=0x0000000000029f03
@property(readonly, nonatomic, getter=isPremiumOffer) _Bool premiumOffer;
@property(readonly, nonatomic, getter=isDefaultOffer) _Bool defaultOffer;
@property(readonly, nonatomic, getter=isBuddyOffer) _Bool buddyOffer;
@property(readonly, nonatomic) double _callbackInterval;
- (void)updateOfferWithPlanDetails:(id)arg1 actionString:(id)arg2;	// IMP=0x0000000000029e00
@property(readonly, nonatomic) long long action;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;	// IMP=0x0000000000028e7f

@end
