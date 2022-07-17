//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdPlatformsCommon/APContentData.h>

@interface APContentData (LegacyInterface)
+ (id)createForServerUnfilledReason:(long long)arg1 contextIdentifier:(id)arg2;	// IMP=0x00100000000dd457
- (id)_createRepresentationsFromAdData:(id)arg1 placementType:(long long)arg2 maxSize:(CDStruct_c3b9c2ee)arg3 mediaAssets:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000053585
- (id)_createInstallAttributionFromAdData:(id)arg1;	// IMP=0x00100000000533cc
- (void)addRepresentationWithSize:(CDStruct_c3b9c2ee)arg1 andPlacementType:(long long)arg2;	// IMP=0x001000000005333a
- (id)initWithUnfilledReason:(long long)arg1 error:(id)arg2 contentIdentifier:(id)arg3 contextIdentifier:(id)arg4 containerSize:(CDStruct_c3b9c2ee)arg5 placementType:(long long)arg6;	// IMP=0x0010000000053247
- (id)initRateLimitedForContextId:(id)arg1 containerSize:(CDStruct_c3b9c2ee)arg2 placementType:(long long)arg3;	// IMP=0x00100000000531a8
- (id)initWithAdData:(id)arg1 identifier:(id)arg2 contextIdentifier:(id)arg3 placementType:(long long)arg4 maxSize:(CDStruct_c3b9c2ee)arg5;	// IMP=0x0010000000051f94
- (_Bool)hasValidRepresentation;	// IMP=0x00100000000dd5ae
@end
