//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBBulletin, NSDictionary, UNNotification;

@interface SiriDirectActionContext
{
    NSDictionary *_payload;	// 8 = 0x8
    BBBulletin *_bulletin;	// 16 = 0x10
    UNNotification *_notification;	// 24 = 0x18
}

+ (id)appLaunchDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000016c10
+ (id)phoneCallDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000016ba4
+ (id)phoneAmbiguousDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000016b38
+ (id)musicSearchDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000016acc
+ (id)mapShareEtaDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000016a60
+ (id)mapSearchDirectActionWithAppBundleId:(id)arg1;	// IMP=0x00000000000169f4
+ (id)messageReplyDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2;	// IMP=0x0000000000016966
+ (id)messageReadDirectActionWithAppBundleId:(id)arg1 conversationGUID:(id)arg2;	// IMP=0x00000000000168d8
+ (id)messageComposeNewThreadDirectActionWithAppBundleId:(id)arg1 fullName:(id)arg2 phoneOrEmailAddress:(id)arg3;	// IMP=0x0000000000016839
+ (id)messageComposeDirectActionWithAppBundleId:(id)arg1;	// IMP=0x00000000000167cd
+ (id)messageAmbiguousDirectActionWithAppBundleId:(id)arg1;	// IMP=0x0000000000016761
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015b8c
- (void).cxx_destruct;	// IMP=0x0000000000016eaa
@property(readonly, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
@property(readonly, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)_initWithDirectActionEvent:(long long)arg1 appBundleId:(id)arg2 conversationGUID:(id)arg3 fullName:(id)arg4 phoneOrEmailAddress:(id)arg5;	// IMP=0x0000000000016c7c
- (long long)_directActionEventFromAppIdsAndIntentIdentifiersOfBulletin:(id)arg1 notification:(id)arg2;	// IMP=0x00000000000161f2
- (long long)_directActionEventFromContentTypesOfBulletin:(id)arg1 notification:(id)arg2;	// IMP=0x0000000000015e58
- (id)_intentIdentifiersFromBulletin:(id)arg1 notification:(id)arg2;	// IMP=0x0000000000015e22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015d19
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015b94
- (id)bundleId;	// IMP=0x0000000000015a4c
- (long long)directActionEvent;	// IMP=0x00000000000158eb
- (id)description;	// IMP=0x00000000000157a6
- (id)initWithUNNotification:(id)arg1;	// IMP=0x0000000000015738
- (id)initWithBBBulletin:(id)arg1;	// IMP=0x00000000000156ca
- (id)initWithPayload:(id)arg1;	// IMP=0x000000000001565c

@end

