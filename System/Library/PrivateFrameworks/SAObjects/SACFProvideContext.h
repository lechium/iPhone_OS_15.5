//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SACFProvideContext <SAServerBoundCommand>
{
}

+ (id)provideContextWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003deb8
+ (id)provideContext;	// IMP=0x000000000003dea6
- (_Bool)requiresResponse;	// IMP=0x000000000003df06
@property(copy, nonatomic) NSString *contextVersion;
@property(copy, nonatomic) NSString *context;
- (id)encodedClassName;	// IMP=0x000000000003de99
- (id)groupIdentifier;	// IMP=0x000000000003de85

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

