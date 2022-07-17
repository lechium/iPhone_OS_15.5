//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SASetMultipleClientStates <SAServerBoundCommand>
{
}

+ (id)setMultipleClientStatesWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000019c22
+ (id)setMultipleClientStates;	// IMP=0x0000000000019c10
- (_Bool)requiresResponse;	// IMP=0x0000000000019c93
@property(copy, nonatomic) NSArray *failedGetters;
@property(copy, nonatomic) NSArray *clientStateSetters;
- (id)encodedClassName;	// IMP=0x0000000000019c03
- (id)groupIdentifier;	// IMP=0x0000000000019bef

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
