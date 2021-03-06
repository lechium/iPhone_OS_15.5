//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIPersonFaceCrop;
@protocol HMIHomePersonManagerDataSource;

@interface HMIFaceMisclassificationTask
{
    HMIPersonFaceCrop *_faceCrop;	// 8 = 0x8
    id <HMIHomePersonManagerDataSource> _dataSource;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000060f2d
- (void).cxx_destruct;	// IMP=0x0000000000060f63
@property(readonly) id <HMIHomePersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMIPersonFaceCrop *faceCrop; // @synthesize faceCrop=_faceCrop;
- (void)removeNearestFaceprint:(id)arg1 withFaceCrops:(id)arg2;	// IMP=0x0000000000060585
- (void)mainInsideAutoreleasePool;	// IMP=0x000000000006005e
- (id)initWithTaskID:(int)arg1 dataSource:(id)arg2 faceCrop:(id)arg3;	// IMP=0x000000000005ffb4

@end

