//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SARemembersGetRelativeAppUsageProbabilities <SAAceSerializable>
{
}

+ (id)getRelativeAppUsageProbabilitiesWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003999a
+ (id)getRelativeAppUsageProbabilities;	// IMP=0x0000000000039988
- (_Bool)mutatingCommand;	// IMP=0x00000000000399f0
- (_Bool)requiresResponse;	// IMP=0x00000000000399e8
@property(nonatomic) long long days;
@property(copy, nonatomic) NSArray *bundleIDs;
- (id)encodedClassName;	// IMP=0x000000000003997b
- (id)groupIdentifier;	// IMP=0x0000000000039967

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

