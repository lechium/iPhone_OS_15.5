//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMFaceTimeUtilities : NSObject
{
}

+ (_Bool)conversationIsVideoCall:(id)arg1;	// IMP=0x000000000009dd02
+ (id)activityMetadataForTUConversation:(id)arg1;	// IMP=0x000000000009dc3e
+ (id)remoteParticipantHandleSharingScreenForTUConversation:(id)arg1;	// IMP=0x000000000009db86
+ (id)activitySessionForTUConversation:(id)arg1;	// IMP=0x000000000009db09
+ (_Bool)isScreenShareActivityForTUConversation:(id)arg1;	// IMP=0x000000000009da87
+ (void)leaveTUConversation;	// IMP=0x000000000009d9cc
+ (void)initiateTUDialRequestForSingleParticipant:(id)arg1 videoEnabled:(_Bool)arg2;	// IMP=0x000000000009d699
+ (void)initiateTUConversationForParticipants:(id)arg1 senderAddress:(id)arg2 videoEnabled:(_Bool)arg3 groupID:(id)arg4 displayName:(id)arg5;	// IMP=0x000000000009d01c
+ (void)joinExistingConversationForTUCoversation:(id)arg1 videoEnabled:(_Bool)arg2;	// IMP=0x000000000009cf06
+ (_Bool)activeTUConversationHasActivitySession:(id)arg1;	// IMP=0x000000000009cec3
+ (id)currentCallForTUConversation:(id)arg1;	// IMP=0x000000000009cc08

@end
