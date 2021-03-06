//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKReportable-Protocol.h>

@class GKMatchRequestInternal, GKTournament, NSArray, NSString;

@interface GKMatchRequest : NSObject <GKReportable>
{
    GKMatchRequestInternal *_internal;	// 8 = 0x8
    CDUnknownBlockType _inviteeResponseHandler;	// 16 = 0x10
    CDUnknownBlockType _recipientResponseHandler;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0000000000077cd7
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000077b50
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;	// IMP=0x000000000007796f
+ (id)reportableKeyPaths;	// IMP=0x00000000000770f0
- (void).cxx_destruct;	// IMP=0x0000000000079058
@property(copy) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property(copy) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
@property(retain) GKMatchRequestInternal *internal; // @synthesize internal=_internal;
- (_Bool)isConfiguredForAutomatchOnly;	// IMP=0x0000000000078f49
- (_Bool)isIncorrectlyInvitingPlayers;	// IMP=0x0000000000078e66
- (void)loadRecipientsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007874f
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000786c9
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000078646
@property(retain) NSArray *playersToInvite; // @dynamic playersToInvite;
@property(retain) GKTournament *tournamentForInvitePool;
@property(copy) NSString *inviteMessage; // @dynamic inviteMessage;
@property(retain) NSArray *recipients; // @dynamic recipients;
- (id)guestPlayers;	// IMP=0x0000000000077d2e
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000077c5c
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000077bc2
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000077b3e
- (_Bool)isRecipientCountValid;	// IMP=0x0000000000077ada
- (void)removeLocalPlayerFromPlayersToInvite;	// IMP=0x000000000007767a
- (void)ensureValidityHosted:(_Bool)arg1;	// IMP=0x000000000007742b
- (_Bool)isTurnBasedValid;	// IMP=0x00000000000773c4
- (_Bool)isValidForHosted:(_Bool)arg1;	// IMP=0x000000000007734f
- (_Bool)isValidWithMax:(unsigned long long)arg1;	// IMP=0x000000000007727f
- (_Bool)defaultNumberOfPlayersIsValid;	// IMP=0x0000000000077207
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000770fd
- (id)description;	// IMP=0x0000000000076ed3
- (unsigned long long)hash;	// IMP=0x0000000000076e8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000076dc9
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x0000000000076bf9
- (id)init;	// IMP=0x0000000000076b9f

// Remaining properties
@property unsigned long long defaultNumberOfPlayers; // @dynamic defaultNumberOfPlayers;
@property unsigned long long maxPlayers; // @dynamic maxPlayers;
@property unsigned long long minPlayers; // @dynamic minPlayers;
@property unsigned int playerAttributes; // @dynamic playerAttributes;
@property unsigned long long playerGroup; // @dynamic playerGroup;
@property _Bool restrictToAutomatch; // @dynamic restrictToAutomatch;

@end

