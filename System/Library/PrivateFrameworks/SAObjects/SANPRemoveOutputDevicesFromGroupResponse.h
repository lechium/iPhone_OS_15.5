//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SANPRemoveOutputDevicesFromGroupResponse <SAServerBoundCommand>
{
}

+ (id)removeOutputDevicesFromGroupResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000de6f
+ (id)removeOutputDevicesFromGroupResponse;	// IMP=0x000000000000de5d
- (_Bool)requiresResponse;	// IMP=0x000000000000de9b
@property(copy, nonatomic) NSString *routeResponse;
- (id)encodedClassName;	// IMP=0x000000000000de50
- (id)groupIdentifier;	// IMP=0x000000000000de3c

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
