//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString;

@interface SASGetMultilingualDictationConfig <SAServerBoundCommand>
{
}

+ (id)getMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000402fd
+ (id)getMultilingualDictationConfig;	// IMP=0x00000000000402eb
- (_Bool)requiresResponse;	// IMP=0x000000000004034b
@property(copy, nonatomic) NSNumber *multilingualTimeoutInMillis;
@property(nonatomic) _Bool multilingualDisabled;
- (id)encodedClassName;	// IMP=0x00000000000402de
- (id)groupIdentifier;	// IMP=0x00000000000402ca

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

