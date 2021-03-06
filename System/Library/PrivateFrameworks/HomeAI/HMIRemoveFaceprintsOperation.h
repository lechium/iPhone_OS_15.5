//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NSSet;
@protocol HMIPersonManagerDataSource;

@interface HMIRemoveFaceprintsOperation : HMFOperation
{
    id <HMIPersonManagerDataSource> _dataSource;	// 8 = 0x8
    NSSet *_faceprintUUIDs;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000006a7ab
- (void).cxx_destruct;	// IMP=0x000000000006a7e1
@property(readonly) NSSet *faceprintUUIDs; // @synthesize faceprintUUIDs=_faceprintUUIDs;
@property(readonly) id <HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)mainInsideAutoreleasePool;	// IMP=0x000000000006a48f
- (void)main;	// IMP=0x000000000006a461
- (id)initWithDataSource:(id)arg1 faceprintUUIDs:(id)arg2;	// IMP=0x000000000006a3b7

@end

