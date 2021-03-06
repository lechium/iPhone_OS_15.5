//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>
#import <SAObjects/SASetSingleClientState-Protocol.h>

@class NSString, SAClientFlowState;

@interface SASetClientFlowState <SAServerBoundCommand, SASetSingleClientState>
{
}

+ (id)setClientFlowStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001ce7d
+ (id)setClientFlowState;	// IMP=0x000000000001ce6b
- (_Bool)requiresResponse;	// IMP=0x000000000001cea9
@property(retain, nonatomic) SAClientFlowState *clientState;
- (id)encodedClassName;	// IMP=0x000000000001ce5e
- (id)groupIdentifier;	// IMP=0x000000000001ce4a

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

