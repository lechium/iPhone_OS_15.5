//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNRecognizeAnimalHeadsRequest
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;	// IMP=0x0000000000162f33
+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000162e77
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x0000000000163188
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001630dd
- (long long)dependencyProcessingOrdinality;	// IMP=0x00000000001630cb
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000163057
- (id)supportedIdentifiersAndReturnError:(id *)arg1;	// IMP=0x0000000000162fa4

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end
