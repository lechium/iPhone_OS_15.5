//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMIExternalPersonManagerDataSource-Protocol.h>

@class NSString;

@interface HMIExternalPersonDataSourceDisk <HMIExternalPersonManagerDataSource>
{
}

+ (id)logCategory;	// IMP=0x0000000000003215
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000319e
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002869
- (void)addPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
