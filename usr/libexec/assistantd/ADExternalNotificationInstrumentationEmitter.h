//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADExternalNotificationInstrumentationEmitter : NSObject
{
}

+ (void)emitCoreAnalyticsAnnounceNotificationApplicationEnablementEvents;	// IMP=0x004000000018bfcc
+ (id)_randomlySampleWithoutReplacementNumSamples:(unsigned long long)arg1 fromArray:(id)arg2;	// IMP=0x001000000018beba
+ (void)_emitAnnounceEnablementEventFromSectionInfo:(id)arg1 siriLocale:(id)arg2;	// IMP=0x001000000018bd6d
+ (void)emitCoreAnalyticsEventForAnnouncementRequest:(id)arg1 completionReason:(long long)arg2;	// IMP=0x001000000018b9a9
+ (void)emitUserResponseSilenceForAnnouncementRequest:(id)arg1;	// IMP=0x001000000018b902
+ (void)emitAnnouncementReceivedForAnnouncementRequest:(id)arg1;	// IMP=0x001000000018b71e
+ (id)_createEmptyANCClientEventWithMetadataForRequest:(id)arg1;	// IMP=0x001000000018b63e
+ (id)_getAnnounceReceivedTier1EventFromAnnouncementRequest:(id)arg1;	// IMP=0x001000000018b558
+ (id)_getAnnounceReceivedEventFromAnnouncementRequest:(id)arg1;	// IMP=0x001000000018b254
+ (id)_getCurrentlyConnectedHeadphonesANCAudioDevice;	// IMP=0x001000000018b0c1
+ (void)emitRequestLinkForAnnouncementRequest:(id)arg1;	// IMP=0x001000000018aeee
+ (id)_createRequestLinkInfoFromUUID:(id)arg1 component:(int)arg2;	// IMP=0x001000000018ae50
+ (_Bool)isFirstPartyApplicationWithBundleId:(id)arg1;	// IMP=0x001000000018ae34

@end
