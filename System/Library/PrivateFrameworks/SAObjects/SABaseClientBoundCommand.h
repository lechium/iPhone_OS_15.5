//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SABaseClientBoundCommand <SAClientBoundCommand>
{
}

+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003110a
+ (id)baseClientBoundCommand;	// IMP=0x00000000000310f8
- (_Bool)mutatingCommand;	// IMP=0x00000000000311c0
- (_Bool)requiresResponse;	// IMP=0x00000000000311b8
@property(copy, nonatomic) NSNumber *usefulnessScore;
@property(copy, nonatomic) NSString *metricsContext;
@property(copy, nonatomic) NSArray *callbacks;
@property(copy, nonatomic) NSString *appId;
- (id)encodedClassName;	// IMP=0x00000000000310eb
- (id)groupIdentifier;	// IMP=0x00000000000310d7

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

