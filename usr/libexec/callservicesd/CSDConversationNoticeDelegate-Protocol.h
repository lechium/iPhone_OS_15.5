//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDConversation, CSDConversationNoticeManager, TUConversationNotice, TUConversationParticipant;

@protocol CSDConversationNoticeDelegate <NSObject>

@optional
- (void)noticeManager:(CSDConversationNoticeManager *)arg1 conversation:(CSDConversation *)arg2 participant:(TUConversationParticipant *)arg3 addedNotice:(TUConversationNotice *)arg4;
@end
