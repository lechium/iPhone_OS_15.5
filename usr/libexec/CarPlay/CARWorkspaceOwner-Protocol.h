//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CARWorkspaceStateChangeSessionDelegate-Protocol.h"

@class CARWorkspace;
@protocol CARWorkspaceStateChangeSession;

@protocol CARWorkspaceOwner <CARWorkspaceStateChangeSessionDelegate>
- (void)workspace:(CARWorkspace *)arg1 didEndStateChangeSession:(id <CARWorkspaceStateChangeSession>)arg2;
- (void)workspace:(CARWorkspace *)arg1 didBeginStateChangeSession:(id <CARWorkspaceStateChangeSession>)arg2;
@end
