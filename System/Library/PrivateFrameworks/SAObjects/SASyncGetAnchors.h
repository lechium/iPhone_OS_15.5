//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors <SAServerBoundCommand>
{
}

+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000af2e
+ (id)getAnchors;	// IMP=0x000000000000af1c
- (_Bool)mutatingCommand;	// IMP=0x000000000000b088
- (_Bool)requiresResponse;	// IMP=0x000000000000b080
@property(copy, nonatomic) NSArray *watchAppMetaDataList;
@property(copy, nonatomic) NSString *syncReason;
@property(copy, nonatomic) NSArray *sources;
@property(copy, nonatomic) NSString *primeToken;
@property(nonatomic) _Bool includeAllKnownAnchors;
@property(copy, nonatomic) NSDictionary *customVocabSources;
@property(copy, nonatomic) NSString *authToken;
@property(copy, nonatomic) NSArray *appMetaDataList;
- (id)encodedClassName;	// IMP=0x000000000000af0f
- (id)groupIdentifier;	// IMP=0x000000000000aefb

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
