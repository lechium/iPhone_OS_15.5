//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MFMailMessageStore;

@protocol MCSAllMessagesOperation <NSObject>
- (_Bool)isRevertibleForAllMessagesInStore:(MFMailMessageStore *)arg1;
- (_Bool)revertForAllMessagesInStore:(MFMailMessageStore *)arg1;
- (_Bool)commitToAllMessagesInStore:(MFMailMessageStore *)arg1;
@end
