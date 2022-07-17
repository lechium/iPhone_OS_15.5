//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol HMIHomePersonManagerDataSource;

@interface HMIFetchUnassociatedFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>
{
    id <HMIHomePersonManagerDataSource> _dataSource;	// 8 = 0x8
    NSSet *_unassociatedFaceCrops;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000000bcecb
+ (id)shortDescription;	// IMP=0x00000000000bce8d
- (void).cxx_destruct;	// IMP=0x00000000000bcf01
@property(readonly) NSSet *unassociatedFaceCrops; // @synthesize unassociatedFaceCrops=_unassociatedFaceCrops;
@property(readonly) id <HMIHomePersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)mainInsideAutoreleasePool;	// IMP=0x00000000000bcc4f
- (void)main;	// IMP=0x00000000000bcc21
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000bcb7a

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
