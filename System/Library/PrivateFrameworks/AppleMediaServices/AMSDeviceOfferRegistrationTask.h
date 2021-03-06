//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSDeviceOfferEligibilityTask, AMSDeviceOfferRegistrationPrivacyValidator, AMSProcessInfo, AMSURLSession, NSArray, NSSet, NSString;
@protocol AMSBagProtocol, AMSDeviceOffersTracking;

@interface AMSDeviceOfferRegistrationTask <AMSBagConsumer>
{
    _Bool _ignoreRegistrationBlacklist;	// 8 = 0x8
    _Bool _lightweightCheckOnly;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    AMSProcessInfo *_clientInfo;	// 32 = 0x20
    NSSet *_offerIdentifiers;	// 40 = 0x28
    NSArray *_registrationGroups;	// 48 = 0x30
    AMSDeviceOfferEligibilityTask *_eligibilityTask;	// 56 = 0x38
    NSString *_deviceGUID;	// 64 = 0x40
    NSString *_masterSerialNumber;	// 72 = 0x48
    id <AMSDeviceOffersTracking> _deviceOffersStore;	// 80 = 0x50
    AMSDeviceOfferRegistrationPrivacyValidator *_privacyValidator;	// 88 = 0x58
    AMSURLSession *_urlSession;	// 96 = 0x60
}

+ (id)bagKeySet;	// IMP=0x000000000011310f
+ (id)createBagForSubProfile;	// IMP=0x0000000000113075
+ (id)bagSubProfileVersion;	// IMP=0x0000000000113025
+ (id)bagSubProfile;	// IMP=0x0000000000112fd5
- (void).cxx_destruct;	// IMP=0x000000000011329b
@property(nonatomic) _Bool lightweightCheckOnly; // @synthesize lightweightCheckOnly=_lightweightCheckOnly;
@property(nonatomic) _Bool ignoreRegistrationBlacklist; // @synthesize ignoreRegistrationBlacklist=_ignoreRegistrationBlacklist;
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) AMSDeviceOfferRegistrationPrivacyValidator *privacyValidator; // @synthesize privacyValidator=_privacyValidator;
@property(readonly, nonatomic) id <AMSDeviceOffersTracking> deviceOffersStore; // @synthesize deviceOffersStore=_deviceOffersStore;
@property(readonly, nonatomic) NSString *masterSerialNumber; // @synthesize masterSerialNumber=_masterSerialNumber;
@property(readonly, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, nonatomic) AMSDeviceOfferEligibilityTask *eligibilityTask; // @synthesize eligibilityTask=_eligibilityTask;
@property(retain, nonatomic) NSArray *registrationGroups; // @synthesize registrationGroups=_registrationGroups;
@property(retain, nonatomic) NSSet *offerIdentifiers; // @synthesize offerIdentifiers=_offerIdentifiers;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_registrationRequestEncoderWithAccount:(id)arg1;	// IMP=0x0000000000112e76
- (id)_urlRequestWithBagURL:(id)arg1;	// IMP=0x0000000000112d0e
- (id)_deviceOffersURL;	// IMP=0x0000000000112cb7
- (id)_lightweightDeviceOffersURL;	// IMP=0x0000000000112c60
- (_Bool)_isDeviceGroupRegistrationAllowed;	// IMP=0x0000000000112a7e
- (_Bool)_isEligibilityCallsAllowed;	// IMP=0x00000000001129f4
- (_Bool)_isRegistrationAllowed;	// IMP=0x0000000000112948
- (void)_updateWithDeviceOffers:(id)arg1;	// IMP=0x00000000001127c7
- (id)_sanitizedResultPromise:(id)arg1;	// IMP=0x00000000001125f7
- (id)_offersDecodedFromResult:(id)arg1;	// IMP=0x0000000000112362
- (id)_latestOffersWithFetchedDeviceOffers:(id)arg1 offersStore:(id)arg2;	// IMP=0x0000000000111f15
- (id)_handleRegistrationResult:(id)arg1;	// IMP=0x00000000001117c7
- (id)_bucketedOffers:(id)arg1;	// IMP=0x000000000011153a
- (id)_latestDeviceGroups;	// IMP=0x00000000001112b6
- (id)_registrationGroupsFrom:(id)arg1 matching:(id)arg2;	// IMP=0x00000000001110f9
- (id)_eligibilityQualifiedRegistrationGroupsWithAccount:(id)arg1 pendingRegistrationGroups:(id)arg2;	// IMP=0x000000000011086b
- (id)_serialNumberBlacklist;	// IMP=0x00000000001107a5
- (id)_companionSerialNumbers;	// IMP=0x000000000011068d
- (id)_filteredRegistrationGroups:(id)arg1;	// IMP=0x0000000000110171
- (id)_accountEligibleSerialsFromDeviceOffers:(id)arg1 accountOffers:(id)arg2;	// IMP=0x000000000010fc7f
- (id)_registrationEndpointPOSTParametersWithRegistrationGroups:(id)arg1 companionSerialNumbers:(id)arg2;	// IMP=0x000000000010f806
- (id)_registrationEndpointPOSTDeviceGroupsBody:(id)arg1;	// IMP=0x000000000010f5a7
- (id)_registrationEndpointPOSTCompanionBodyWithDeviceGroups:(id)arg1 companionSerialNumbers:(id)arg2;	// IMP=0x000000000010f42b
- (id)_performRegistrationRequestWithAccount:(id)arg1;	// IMP=0x000000000010e5ab
- (id)_performLightweightRequestWithAccount:(id)arg1;	// IMP=0x000000000010e1fb
- (id)perform;	// IMP=0x000000000010d9f4
- (id)initWithAccount:(id)arg1 bag:(id)arg2 deviceGUID:(id)arg3 deviceOffersStore:(id)arg4 eligibilityTask:(id)arg5 masterSerialNumber:(id)arg6 privacyValidator:(id)arg7 urlSession:(id)arg8;	// IMP=0x000000000010d85d
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x000000000010d6ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

