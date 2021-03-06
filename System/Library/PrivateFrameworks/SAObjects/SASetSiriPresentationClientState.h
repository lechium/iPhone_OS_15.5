//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>
#import <SAObjects/SASetSingleClientState-Protocol.h>

@class NSString, SASiriPresentationClientState;

@interface SASetSiriPresentationClientState <SAServerBoundCommand, SASetSingleClientState>
{
}

+ (id)setSiriPresentationClientStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000015e29
+ (id)setSiriPresentationClientState;	// IMP=0x0000000000015e17
- (_Bool)requiresResponse;	// IMP=0x0000000000015e55
@property(retain, nonatomic) SASiriPresentationClientState *clientState;
- (id)encodedClassName;	// IMP=0x0000000000015e0a
- (id)groupIdentifier;	// IMP=0x0000000000015df6

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

