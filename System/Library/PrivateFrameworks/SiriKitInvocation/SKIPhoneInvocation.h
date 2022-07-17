//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SKIPhoneInvocation : NSObject
{
}

+ (id)announceGroupFaceTimeRequestForAnnounceDirectInvocationPayload:(id)arg1;	// IMP=0x0000000000006317
+ (id)announceVoicemailRequestForAnnounceDirectInvocationPayload:(id)arg1;	// IMP=0x0000000000005f09
+ (id)announceGroupFaceTimeInviteNotification:(id)arg1 synchronousBurstIndex:(id)arg2 isSameTypeAsLastAnnouncement:(_Bool)arg3 appBundleIdOfLastAnnouncement:(id)arg4 timeSinceLastAnnouncement:(double)arg5;	// IMP=0x0000000000005a86
+ (id)announceVoicemailRequestForNotification:(id)arg1 synchronousBurstIndex:(id)arg2 isSameTypeAsLastAnnouncement:(_Bool)arg3 appBundleIdOfLastAnnouncement:(id)arg4 timeSinceLastAnnouncement:(double)arg5;	// IMP=0x0000000000005729
+ (id)startPhoneCallRequestFromApp:(id)arg1;	// IMP=0x00000000000055c6
+ (id)announceIncomingCallerRequestForCallUUID:(id)arg1 callProviderIdentifier:(id)arg2 callProviderBundleId:(id)arg3 callerContactIdentifiers:(id)arg4 handle:(id)arg5 isVideo:(_Bool)arg6 isCallerIDBlocked:(_Bool)arg7;	// IMP=0x000000000000526f
+ (id)readHomeAnnouncementRequestFromApp:(id)arg1;	// IMP=0x000000000000510c
+ (id)announceHomeAnnouncementRequestFromApp:(id)arg1 withAnnouncementIdentifier:(id)arg2 withUserNotificationType:(long long)arg3 synchronousBurstIndex:(id)arg4;	// IMP=0x0000000000004ef0

@end
