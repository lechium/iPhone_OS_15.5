//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MFActivityMonitor, MFMailboxUid, NSString;

@protocol AFCVisibleMailboxFetch <NSObject>
- (void)setDisplayErrors:(_Bool)arg1;
- (void)setRemoteIDToPreserve:(NSString *)arg1;
- (void)setShouldCompact:(_Bool)arg1;
- (_Bool)willGrowFetchWindow;
- (MFMailboxUid *)mailbox;
- (MFActivityMonitor *)monitor;
@end

