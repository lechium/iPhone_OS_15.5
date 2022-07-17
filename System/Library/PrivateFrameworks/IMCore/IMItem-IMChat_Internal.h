//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMChat_Internal)
+ (Class)contextClass;	// IMP=0x00000000000a433f
- (id)_copy;	// IMP=0x00000000000a47db
- (_Bool)_isSenderUnknown;	// IMP=0x00000000000a4797
- (_Bool)_isInvitation;	// IMP=0x00000000000a478f
- (void)_setInvitation:(_Bool)arg1;	// IMP=0x00000000000a4789
- (id)_otherHandle;	// IMP=0x00000000000a473e
- (id)_senderHandle;	// IMP=0x00000000000a46f3
- (void)_refreshContextWithAccountHandles;	// IMP=0x00000000000a4451
- (id)_serviceWithInternalName:(id)arg1;	// IMP=0x00000000000a4438
- (id)_accountController;	// IMP=0x00000000000a441f
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;	// IMP=0x00000000000a4358
- (id)message;	// IMP=0x00000000000a4350
- (_Bool)shouldGenerateTopLevelChatItem;	// IMP=0x000000000010db40
- (id)_serviceHandle;	// IMP=0x000000000010daf4
- (id)_service;	// IMP=0x000000000010dadb
- (id)_newChatItems;	// IMP=0x000000000010dad3
- (_Bool)_hasMessageChatItem;	// IMP=0x000000000010dacb
- (_Bool)isIncomingTypingOrCancelTypingMessage;	// IMP=0x0000000000111476
- (_Bool)isTypingOrCancelTypingMessage;	// IMP=0x000000000011146e
@end
