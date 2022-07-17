//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAPerformDataDetectionResult <SAServerBoundCommand, SAAceSerializable>
{
}

+ (id)performDataDetectionResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000031442
+ (id)performDataDetectionResult;	// IMP=0x0000000000031430
- (_Bool)requiresResponse;	// IMP=0x00000000000314ac
@property(copy, nonatomic) NSArray *matches;
@property(copy, nonatomic) NSString *detectionTarget;
- (id)encodedClassName;	// IMP=0x0000000000031423
- (id)groupIdentifier;	// IMP=0x000000000003140f

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
