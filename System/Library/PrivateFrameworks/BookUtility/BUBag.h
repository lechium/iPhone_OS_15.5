//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookUtility/AMSBagProtocol-Protocol.h>

@class AMSBagValue, AMSProcessInfo, NSDate, NSString;
@protocol AMSBagProtocol;

@interface BUBag : NSObject <AMSBagProtocol>
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
}

+ (void)audiobookStoreIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003358
+ (void)setOfflineCacheProvider:(id)arg1;	// IMP=0x0000000000002bf1
+ (id)offlineCacheProvider;	// IMP=0x0000000000002be0
+ (id)defaultBagKeysDictionary;	// IMP=0x00000000000024f0
+ (id)_defaultValueDictionary;	// IMP=0x0000000000002422
+ (id)defaultBag;	// IMP=0x0000000000001d70
- (void).cxx_destruct;	// IMP=0x0000000000003841
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000000382b
- (id)URLForKey:(id)arg1;	// IMP=0x0000000000003815
- (id)stringForKey:(id)arg1;	// IMP=0x00000000000037ff
- (id)integerForKey:(id)arg1;	// IMP=0x00000000000037e9
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000000037d3
- (id)boolForKey:(id)arg1;	// IMP=0x00000000000037bd
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000037a7
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003791
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) AMSBagValue *bu_writeUserReviewURL;
- (id)bu_voteURL;	// IMP=0x0000000000003326
@property(readonly, nonatomic) AMSBagValue *bu_viewBookUpdateParams;
@property(readonly, nonatomic) AMSBagValue *bu_viewBook;
@property(readonly, nonatomic) AMSBagValue *bu_viewAudiobook;
@property(readonly, nonatomic) AMSBagValue *bu_userReviewSortOptions;
@property(readonly, nonatomic) AMSBagValue *bu_userRateContentURL;
@property(readonly, nonatomic) AMSBagValue *bu_trustedDomains;
@property(readonly, nonatomic) AMSBagValue *bu_trendingSearches;
@property(readonly, nonatomic) AMSBagValue *bu_tafEmailBodyUrlBase;
@property(readonly, nonatomic) AMSBagValue *bu_storePlatformLookupURLUnpersonalized;
@property(readonly, nonatomic) AMSBagValue *bu_storeFront;
@property(readonly, nonatomic) AMSBagValue *bu_songDownloadDone;
@property(readonly, nonatomic) AMSBagValue *bu_signSAPSetupCert;
@property(readonly, nonatomic) AMSBagValue *bu_signSAPSetup;
@property(readonly, nonatomic) AMSBagValue *bu_signSAPRequest;
@property(readonly, nonatomic) AMSBagValue *bu_seriesInfoLiveFetchesEnabled;
@property(readonly, nonatomic) AMSBagValue *bu_seriesInfoRequestBatchSize;
@property(readonly, nonatomic) AMSBagValue *bu_seriesInfoUpdateIntervalInDays;
@property(readonly, nonatomic) AMSBagValue *bu_seriesInfoUpdateIntervalEnabled;
@property(readonly, nonatomic) AMSBagValue *bu_searchHints;
@property(readonly, nonatomic) AMSBagValue *bu_saveUserReviewURL;
@property(readonly, nonatomic) AMSBagValue *bu_resetAndRedirectURL;
@property(readonly, nonatomic) AMSBagValue *bu_reportConcerns;
@property(readonly, nonatomic) AMSBagValue *bu_remoteConfigSupportedStorefronts;
@property(readonly, nonatomic) AMSBagValue *bu_readingGoalShareURL;
@property(readonly, nonatomic) AMSBagValue *bu_purchaseDAAP;
@property(readonly, nonatomic) AMSBagValue *bu_processRedirectURL;
@property(readonly, nonatomic) AMSBagValue *bu_privacyAcknowledgementURL;
@property(readonly, nonatomic) AMSBagValue *bu_p2ServiceTermsURL;
@property(readonly, nonatomic) AMSBagValue *bu_p2LaunchAudioBookStorePathPatterns;
@property(readonly, nonatomic) AMSBagValue *bu_p2LaunchEbookstorePathPatterns;
@property(readonly, nonatomic) AMSBagValue *bu_p2LaunchEbookstoreHostPatterns;
@property(readonly, nonatomic) AMSBagValue *bu_mobileURLHandlers;
@property(readonly, nonatomic) AMSBagValue *bu_mobileNetworkConstraints;
@property(readonly, nonatomic) AMSBagValue *bu_metrics;
@property(readonly, nonatomic) AMSBagValue *bu_mediaAPITokenProviderURL;
@property(readonly, nonatomic) AMSBagValue *bu_mdSyncMachine;
@property(readonly, nonatomic) AMSBagValue *bu_mdFinishProvisioning;
@property(readonly, nonatomic) AMSBagValue *bu_libraryLink;
@property(readonly, nonatomic) AMSBagValue *bu_languageTag;
@property(readonly, nonatomic) AMSBagValue *bu_language;
@property(readonly, nonatomic) AMSBagValue *bu_kvsPutAll;
@property(readonly, nonatomic) AMSBagValue *bu_kvsGetAll;
@property(readonly, nonatomic) AMSBagValue *bu_jsAppURL;
@property(readonly, nonatomic) AMSBagValue *bu_ixStoreSheetBooks;
@property(readonly, nonatomic) AMSBagValue *bu_ixStoreSheet;
@property(readonly, nonatomic) AMSBagValue *bu_isBooksStoreEnabled;
@property(readonly, nonatomic) AMSBagValue *bu_isAudiobooksStoreEnabled;
@property(readonly, nonatomic) AMSBagValue *bu_forgottenPassword;
@property(readonly, nonatomic) AMSBagValue *bu_familyInfo;
@property(readonly, nonatomic) AMSBagValue *bu_endOfPictureBookUpsellEnabled;
@property(readonly, nonatomic) AMSBagValue *bu_endOfBookUpsellEnabled;
@property(readonly, nonatomic) AMSBagValue *bu_dtPurchasesPages;
@property(readonly, nonatomic) AMSBagValue *bu_deleteUserReviewUrl;
@property(readonly, nonatomic) AMSBagValue *bu_currencyCode;
@property(readonly, nonatomic) AMSBagValue *bu_countryCode;
@property(readonly, nonatomic) AMSBagValue *bu_contentRestoreURL;
@property(readonly, nonatomic) AMSBagValue *bu_contentRestoreMaxItemCount;
@property(readonly, nonatomic) AMSBagValue *bu_buyProduct;
@property(readonly, nonatomic) AMSBagValue *bu_booksTabs;
@property(readonly, nonatomic) AMSBagValue *bu_booksMediaAPIPreviewHost;
@property(readonly, nonatomic) AMSBagValue *bu_booksMediaAPIHost;
@property(readonly, nonatomic) AMSBagValue *bu_booksISBNURL;
@property(readonly, nonatomic) AMSBagValue *bu_availableBookUpdatesReloadFrequency;
@property(readonly, nonatomic) AMSBagValue *bu_availableBookUpdates;
@property(readonly, nonatomic) AMSBagValue *bu_automaticDownloadQueueURL;
@property(readonly, nonatomic) AMSBagValue *bu_appAnalyticsURL;
@property(readonly, nonatomic) AMSBagValue *bu_amdSyncMachine;
@property(readonly, nonatomic) AMSBagValue *bu_amdFinishProvisioning;
@property(readonly, nonatomic) AMSBagValue *bu_amdDomains;
@property(readonly, nonatomic) AMSBagValue *bu_allowingCitations;
@property(readonly, nonatomic) AMSBagValue *bu_allowCitations;
@property(readonly, nonatomic) AMSBagValue *bu_addFundsURL;
@property(readonly, nonatomic) AMSBagValue *bu_acquireSlotURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end
