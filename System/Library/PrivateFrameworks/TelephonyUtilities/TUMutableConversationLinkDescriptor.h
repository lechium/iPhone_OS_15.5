//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSSet, NSString, NSUUID, TUConversationLinkOriginator;

@interface TUMutableConversationLinkDescriptor
{
}


// Remaining properties
@property(nonatomic, getter=isActivated) _Bool activated; // @dynamic activated;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSUUID *groupUUID; // @dynamic groupUUID;
@property(copy, nonatomic) NSSet *invitedHandles; // @dynamic invitedHandles;
@property(nonatomic) long long linkLifetimeScope; // @dynamic linkLifetimeScope;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TUConversationLinkOriginator *originator; // @dynamic originator;
@property(copy, nonatomic) NSData *privateKey; // @dynamic privateKey;
@property(copy, nonatomic) NSString *pseudonym; // @dynamic pseudonym;
@property(copy, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(nonatomic) int version; // @dynamic version;
@end
