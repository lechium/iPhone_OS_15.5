//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKTurnBasedSessionCacheObject, NSDate, NSString;

@interface GKTurnBasedParticipantCacheObject
{
}

+ (id)entityName;	// IMP=0x0040000000069f5d
- (id)internalRepresentation;	// IMP=0x002000000006a38d
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0010000000069f6a

// Remaining properties
@property(retain, nonatomic) NSString *guestID; // @dynamic guestID;
@property(retain, nonatomic) NSString *inviteMessage; // @dynamic inviteMessage;
@property(retain, nonatomic) NSString *invitedBy; // @dynamic invitedBy;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(nonatomic) int outcome; // @dynamic outcome;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(retain, nonatomic) GKTurnBasedSessionCacheObject *session; // @dynamic session;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

