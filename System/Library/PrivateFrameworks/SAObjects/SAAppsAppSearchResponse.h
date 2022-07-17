//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAAppsAppSearchResponse <SAServerBoundCommand>
{
}

+ (id)appSearchResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001879d
+ (id)appSearchResponse;	// IMP=0x000000000001878b
- (_Bool)requiresResponse;	// IMP=0x00000000000187e5
@property(copy, nonatomic) NSArray *foundApps;
- (id)encodedClassName;	// IMP=0x000000000001877e
- (id)groupIdentifier;	// IMP=0x000000000001876a

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
