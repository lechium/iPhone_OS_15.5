//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSummarySharingEntry, NSDate, NSUUID;

@interface HDSummarySharingEntryUpdateNotificationStatusOperation
{
    NSUUID *_invitationUUID;	// 8 = 0x8
    long long _notificationStatus;	// 16 = 0x10
    NSDate *_dateModified;	// 24 = 0x18
    HKSummarySharingEntry *_sharingEntry;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006fc4d8
- (void).cxx_destruct;	// IMP=0x00000000006fc6a0
@property(readonly, nonatomic) HKSummarySharingEntry *sharingEntry; // @synthesize sharingEntry=_sharingEntry;
@property(readonly, copy, nonatomic) NSDate *dateModified; // @synthesize dateModified=_dateModified;
@property(readonly, nonatomic) long long notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(readonly, copy, nonatomic) NSUUID *invitationUUID; // @synthesize invitationUUID=_invitationUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006fc5c2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006fc4e0
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006fc26c
- (id)initWithInvitationUUID:(id)arg1 notificationStatus:(long long)arg2 dateModified:(id)arg3;	// IMP=0x00000000006fc198
- (id)init;	// IMP=0x00000000006fc11e

@end
