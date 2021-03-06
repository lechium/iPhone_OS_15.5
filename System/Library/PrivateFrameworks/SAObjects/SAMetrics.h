//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAMetrics <SAServerBoundCommand>
{
}

+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000035f52
+ (id)metrics;	// IMP=0x0000000000035f40
- (_Bool)requiresResponse;	// IMP=0x0000000000036028
@property(copy, nonatomic) NSDictionary *timings;
@property(copy, nonatomic) NSString *speechId;
@property(copy, nonatomic) NSString *originalCommandId;
@property(copy, nonatomic) NSDictionary *eventInformation;
@property(copy, nonatomic) NSString *category;
@property(copy, nonatomic) NSString *assistantId;
- (id)encodedClassName;	// IMP=0x0000000000035f33
- (id)groupIdentifier;	// IMP=0x0000000000035f1f
- (id)_descriptionHint;	// IMP=0x000000000001b613

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

