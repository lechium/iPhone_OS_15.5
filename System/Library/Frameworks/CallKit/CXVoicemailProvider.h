//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXVoicemailProviderVendorProtocol-Protocol.h>

@class NSString;
@protocol CXVoicemailProviderDelegate, CXVoicemailProviderHostProtocol;

@interface CXVoicemailProvider <CXVoicemailProviderVendorProtocol>
{
}

- (void)_performAction:(id)arg1;	// IMP=0x0000000000041a1e
- (void)reportVoicemailsRemovedWithUUIDs:(id)arg1;	// IMP=0x000000000004191c
- (void)reportVoicemailRemovedWithUUID:(id)arg1;	// IMP=0x0000000000041872
- (void)reportVoicemailsUpdated:(id)arg1;	// IMP=0x0000000000041770
- (void)reportVoicemailUpdated:(id)arg1;	// IMP=0x00000000000416c6
- (void)reportNewVoicemailsWithUpdates:(id)arg1;	// IMP=0x00000000000415c4
- (void)reportNewVoicemailWithUpdate:(id)arg1;	// IMP=0x000000000004151a
- (id)pendingVoicemailActionsOfClass:(Class)arg1 withVoicemailUUID:(id)arg2;	// IMP=0x0000000000041197
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000041168

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CXVoicemailProviderDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <CXVoicemailProviderHostProtocol> hostProtocolDelegate; // @dynamic hostProtocolDelegate;
@property(readonly) Class superclass;

@end

