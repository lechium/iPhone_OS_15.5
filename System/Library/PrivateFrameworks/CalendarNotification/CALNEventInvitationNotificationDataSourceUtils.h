//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CALNEventInvitationNotificationDataSourceUtils : NSObject
{
}

+ (void)clearEventInvitationOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;	// IMP=0x0000000000049be6
+ (id)expirationDateForEventInvitation:(id)arg1;	// IMP=0x0000000000049907
+ (id)eventForEventInvitation:(id)arg1 inEventStore:(id)arg2;	// IMP=0x000000000004983e
+ (id)eventForNotificationOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;	// IMP=0x00000000000496ae

@end
