//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAMPGetMediaPlayerStateRemoteResponse <SAServerBoundCommand>
{
}

+ (id)getMediaPlayerStateRemoteResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003e8a3
+ (id)getMediaPlayerStateRemoteResponse;	// IMP=0x000000000003e891
- (_Bool)requiresResponse;	// IMP=0x000000000003e8eb
@property(copy, nonatomic) NSDictionary *routeResponses;
- (id)encodedClassName;	// IMP=0x000000000003e884
- (id)groupIdentifier;	// IMP=0x000000000003e870

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
