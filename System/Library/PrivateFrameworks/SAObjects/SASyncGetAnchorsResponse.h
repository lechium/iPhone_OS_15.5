//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASyncGetAnchorsResponse <SAServerBoundCommand>
{
}

+ (id)getAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000b110
+ (id)getAnchorsResponse;	// IMP=0x000000000000b0fe
- (_Bool)mutatingCommand;	// IMP=0x000000000000b1c6
- (_Bool)requiresResponse;	// IMP=0x000000000000b1be
@property(copy, nonatomic) NSNumber *syncDataReset;
@property(copy, nonatomic) NSString *primeToken;
@property(copy, nonatomic) NSString *authToken;
@property(copy, nonatomic) NSArray *anchors;
- (id)encodedClassName;	// IMP=0x000000000000b0f1
- (id)groupIdentifier;	// IMP=0x000000000000b0dd

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
