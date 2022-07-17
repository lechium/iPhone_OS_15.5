//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface _WKWebsiteDataStoreConfiguration : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebsiteDataStoreConfiguration> _configuration;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
@property(nonatomic) _Bool webPushDaemonUsesMockBundlesForTesting;
@property(nonatomic) _Bool allLoadsBlockedByDeviceManagementRestrictionsForTesting;
@property(copy, nonatomic, setter=setWebPushMachServiceName:) NSString *webPushMachServiceName;
@property(copy, nonatomic, setter=setPCMMachServiceName:) NSString *pcmMachServiceName;
@property(nonatomic) _Bool allowsHSTSWithUntrustedRootCertificate;
@property(nonatomic) _Bool enableInAppBrowserPrivacyForTesting;
@property(copy, nonatomic) NSURL *standaloneApplicationURL;
@property(copy, nonatomic) NSDictionary *proxyConfiguration;
@property(nonatomic, setter=_setShouldAcceptInsecureCertificatesForWebSockets:) _Bool _shouldAcceptInsecureCertificatesForWebSockets;
@property(nonatomic) _Bool shouldRunServiceWorkersOnMainThreadForTesting;
@property(nonatomic) _Bool requiresSecureHTTPSProxyConnection;
@property(nonatomic) _Bool preventsSystemHTTPProxyAuthentication;
@property(copy, nonatomic) NSString *dataConnectionServiceType;
@property(nonatomic) _Bool legacyTLSEnabled;
@property(nonatomic) _Bool allowsCellularAccess;
@property(copy, nonatomic) NSString *boundInterfaceIdentifier;
@property(nonatomic) _Bool allowsServerPreconnect;
@property(nonatomic) _Bool suppressesConnectionTerminationOnSystemChange;
@property(nonatomic) unsigned long long testSpeedMultiplier;
@property(nonatomic) unsigned long long perOriginStorageQuota;
@property(nonatomic) _Bool fastServerTrustEvaluationEnabled;
@property(nonatomic) _Bool networkCacheSpeculativeValidationEnabled;
@property(nonatomic) _Bool deviceManagementRestrictionsEnabled;
@property(copy, nonatomic) NSURL *generalStorageDirectory;
@property(copy, nonatomic) NSURL *alternativeServicesStorageDirectory;
@property(copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property(copy, nonatomic) NSURL *mediaKeysStorageDirectory;
@property(copy, nonatomic) NSURL *mediaCacheDirectory;
@property(copy, nonatomic) NSString *applicationCacheFlatFileSubdirectoryName;
@property(copy, nonatomic) NSURL *applicationCacheDirectory;
@property(copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property(nonatomic) _Bool serviceWorkerProcessTerminationDelayEnabled;
@property(copy, nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSURL *_serviceWorkerRegistrationDirectory;
@property(copy, nonatomic, setter=_setCacheStorageDirectory:) NSURL *_cacheStorageDirectory;
@property(copy, nonatomic) NSURL *privateClickMeasurementStorageDirectory;
@property(copy, nonatomic, setter=_setResourceLoadStatisticsDirectory:) NSURL *_resourceLoadStatisticsDirectory;
@property(copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property(copy, nonatomic, setter=setHTTPSProxy:) NSURL *httpsProxy;
@property(copy, nonatomic, setter=setHTTPProxy:) NSURL *httpProxy;
@property(copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property(copy, nonatomic) NSURL *deviceIdHashSaltsStorageDirectory;
@property(copy, nonatomic) NSURL *networkCacheDirectory;
@property(copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property(copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
- (void)dealloc;	// IMP=0x00000000002fe0ff
- (id)initNonPersistentConfiguration;	// IMP=0x00000000002fe09c
- (id)init;	// IMP=0x00000000002fe036

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
