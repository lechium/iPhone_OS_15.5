//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBSettingsGateway, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface STNotificationsUsageGroupSpecifierProvider
{
    NSMutableDictionary *_notificationSectionByBundleID;	// 8 = 0x8
    BBSettingsGateway *_notificationSettingsGateway;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationSettingsGatewayQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ef7d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue; // @synthesize notificationSettingsGatewayQueue=_notificationSettingsGatewayQueue;
@property(readonly, nonatomic) BBSettingsGateway *notificationSettingsGateway; // @synthesize notificationSettingsGateway=_notificationSettingsGateway;
@property(readonly, nonatomic) NSMutableDictionary *notificationSectionByBundleID; // @synthesize notificationSectionByBundleID=_notificationSectionByBundleID;
- (void)_specifierIdentifierDidChange:(id)arg1;	// IMP=0x000000000006eeaa
- (id)getNotificationsInfo:(id)arg1;	// IMP=0x000000000006ee95
- (id)_usageDetailsCoordinator:(id)arg1;	// IMP=0x000000000006ee45
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;	// IMP=0x000000000006ec5f
- (id)newSpecifierWithUsageItem:(id)arg1;	// IMP=0x000000000006e9a1
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000006e312
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000006e07f
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000006df77
- (id)init;	// IMP=0x000000000006dd4c

@end

