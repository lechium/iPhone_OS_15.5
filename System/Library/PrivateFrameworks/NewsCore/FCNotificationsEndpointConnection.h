//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCoreConfigurationObserving-Protocol.h>

@class FCAsyncSerialQueue, FCEndpointConnection, FCFileCoordinatedNotificationDropbox, NSString, NSURL;
@protocol FCBundleSubscriptionManagerType, FCCoreConfigurationManager;

@interface FCNotificationsEndpointConnection : NSObject <FCCoreConfigurationObserving>
{
    FCEndpointConnection *_endpointConnection;	// 8 = 0x8
    id <FCCoreConfigurationManager> _configurationManager;	// 16 = 0x10
    id <FCBundleSubscriptionManagerType> _bundleSubscriptionManager;	// 24 = 0x18
    FCAsyncSerialQueue *_serialQueue;	// 32 = 0x20
    NSString *_deviceType;	// 40 = 0x28
    NSString *_deviceOSVersion;	// 48 = 0x30
    FCFileCoordinatedNotificationDropbox *_fileCoordinatedNotificationDropbox;	// 56 = 0x38
    NSURL *_baseURL;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001d56c9
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox; // @synthesize fileCoordinatedNotificationDropbox=_fileCoordinatedNotificationDropbox;
@property(copy, nonatomic) NSString *deviceOSVersion; // @synthesize deviceOSVersion=_deviceOSVersion;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager; // @synthesize bundleSubscriptionManager=_bundleSubscriptionManager;
@property(retain, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain, nonatomic) FCEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;	// IMP=0x00000000001d54ea
- (void)updateBaseURL:(id)arg1;	// IMP=0x00000000001d5497
- (id)_notificationDataInDropbox;	// IMP=0x00000000001d52ed
- (void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5;	// IMP=0x00000000001d50ff
- (int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)arg1;	// IMP=0x00000000001d50df
- (id)_notificationEntityWithChannelIDs:(id)arg1 isPaid:(_Bool)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 notificationType:(int)arg4;	// IMP=0x00000000001d500b
- (id)_notificationEntitiesWithChannelIDs:(id)arg1 isPaid:(_Bool)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 editorialChannelID:(id)arg4;	// IMP=0x00000000001d4e6b
- (id)_deviceInfoWithDeviceToken:(id)arg1 deviceDigestMode:(int)arg2;	// IMP=0x00000000001d4bf7
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6;	// IMP=0x00000000001d47c0
- (void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d4141
- (id)_marketingSubscriptionRequestWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3;	// IMP=0x00000000001d4066
- (void)modifyMarketingSubscriptionWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001d3b1c
- (void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001d35f3
- (void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5 callbackQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000001d2fa4
- (void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001d293a
- (void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001d242e
- (void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001d1d30
- (id)initWithBaseURLString:(id)arg1;	// IMP=0x00000000001d1c2a
- (id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 bundleSubscriptionManager:(id)arg3;	// IMP=0x00000000001d18a7
- (id)initWithConfigurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2;	// IMP=0x00000000001d1823

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

