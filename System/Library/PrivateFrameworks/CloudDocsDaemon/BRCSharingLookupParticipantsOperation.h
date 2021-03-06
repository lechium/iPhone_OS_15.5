//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface BRCSharingLookupParticipantsOperation <BRCOperationSubclass>
{
    NSArray *_userIdentities;	// 32 = 0x20
    NSMutableArray *_shareParticipants;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001f094b
- (void)main;	// IMP=0x00000000001f05ea
- (id)createActivity;	// IMP=0x00000000001f05c1
- (id)initWithUserIdentities:(id)arg1 session:(id)arg2;	// IMP=0x00000000001f04a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

