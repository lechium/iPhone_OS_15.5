//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceSupportAnalyticsRepresentable-Protocol.h>

@class NSDictionary, NSString;

@interface NTKFaceSupportNotificationPresentationEvent : NSObject <NTKFaceSupportAnalyticsRepresentable>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    long long _artworkUsed;	// 24 = 0x18
    double _delayFromServerPush;	// 32 = 0x20
    double _delayFromBundleUnlock;	// 40 = 0x28
    long long _schedulingErrorCode;	// 48 = 0x30
    long long _optOutSources;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001304b7
@property(readonly, nonatomic) long long optOutSources; // @synthesize optOutSources=_optOutSources;
@property(readonly, nonatomic) long long schedulingErrorCode; // @synthesize schedulingErrorCode=_schedulingErrorCode;
@property(readonly, nonatomic) double delayFromBundleUnlock; // @synthesize delayFromBundleUnlock=_delayFromBundleUnlock;
@property(readonly, nonatomic) double delayFromServerPush; // @synthesize delayFromServerPush=_delayFromServerPush;
@property(readonly, nonatomic) long long artworkUsed; // @synthesize artworkUsed=_artworkUsed;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property(readonly, nonatomic) NSString *ntkfs_analyticsEventName;
- (id)initWithBundleIdentifier:(id)arg1 status:(long long)arg2 artworkUsed:(long long)arg3 delayFromServerPush:(double)arg4 delayFromBundleUnlock:(double)arg5 schedulingErrorCode:(long long)arg6 optOutSources:(long long)arg7;	// IMP=0x000000000013008e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
