//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASiriSupport <SAAceSerializable>
{
}

+ (id)siriSupportWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000387f4
+ (id)siriSupport;	// IMP=0x00000000000387e2
@property(copy, nonatomic) NSArray *useCases;
@property(copy, nonatomic) NSArray *endpoints;
@property(copy, nonatomic) NSString *authToken;
- (id)encodedClassName;	// IMP=0x00000000000387d5
- (id)groupIdentifier;	// IMP=0x00000000000387c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

