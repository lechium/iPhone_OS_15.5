//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SAGetMultipleClientStates
{
}

+ (id)getMultipleClientStatesWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000313cc
+ (id)getMultipleClientStates;	// IMP=0x00000000000313ba
- (_Bool)mutatingCommand;	// IMP=0x0000000000031407
- (_Bool)requiresResponse;	// IMP=0x00000000000313ff
@property(copy, nonatomic) NSArray *clientStateGetters;
- (id)encodedClassName;	// IMP=0x00000000000313ad
- (id)groupIdentifier;	// IMP=0x0000000000031399

@end

