//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKParticipantSemanticIdentifierGeneratorDelegate-Protocol.h>

@interface EKPersistentParticipant <EKParticipantSemanticIdentifierGeneratorDelegate>
{
}

+ (id)defaultPropertiesToLoad;	// IMP=0x00000000000d9c1e
- (id)url;	// IMP=0x00000000000da02f
- (id)displayName;	// IMP=0x00000000000da01d
- (id)semanticIdentifier;	// IMP=0x00000000000d9fb9
- (void)setScheduleStatus:(int)arg1;	// IMP=0x00000000000d9f9d
- (int)scheduleStatus;	// IMP=0x00000000000d9f81
- (void)setProposedStartDateStatus:(int)arg1;	// IMP=0x00000000000d9f65
- (int)proposedStartDateStatus;	// IMP=0x00000000000d9f49
- (id)invitedBy;	// IMP=0x00000000000d9f2d
- (void)setProposedStartDate:(id)arg1;	// IMP=0x00000000000d9f11
- (id)proposedStartDate;	// IMP=0x00000000000d9ef5
- (id)owner;	// IMP=0x00000000000d9ed9
- (void)setComment:(id)arg1;	// IMP=0x00000000000d9ebd
- (id)comment;	// IMP=0x00000000000d9ea1
- (void)setURLString:(id)arg1;	// IMP=0x00000000000d9e85
- (id)URLString;	// IMP=0x00000000000d9e69
- (void)setLastName:(id)arg1;	// IMP=0x00000000000d9e4d
- (id)lastName;	// IMP=0x00000000000d9e31
- (void)setFirstName:(id)arg1;	// IMP=0x00000000000d9e15
- (id)firstName;	// IMP=0x00000000000d9df9
- (void)setPhoneNumber:(id)arg1;	// IMP=0x00000000000d9ddd
- (id)phoneNumber;	// IMP=0x00000000000d9dc1
- (void)setEmailAddress:(id)arg1;	// IMP=0x00000000000d9da5
- (id)emailAddress;	// IMP=0x00000000000d9d89
- (void)setDisplayNameRaw:(id)arg1;	// IMP=0x00000000000d9d6d
- (id)displayNameRaw;	// IMP=0x00000000000d9d51
- (void)setUUID:(id)arg1;	// IMP=0x00000000000d9d35
- (id)UUID;	// IMP=0x00000000000d9d19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000127a9e

@end

