//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ConversationKit/TUNeighborhoodActivityConduitApprovalDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit23ConduitApprovalDelegate : NSObject <TUNeighborhoodActivityConduitApprovalDelegate>
{
    MISSING_TYPE *manager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ede5f
- (id)init;	// IMP=0x00000000000ede29
- (void)cancelSplitSessionApproval;	// IMP=0x00000000000edde2
- (void)approveSplitSessionForConversation:(id)arg1 requestedFromDevice:(id)arg2 pullContext:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ed6ba

@end

