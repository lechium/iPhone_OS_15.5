//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMIFaceCrop;
@protocol HMIHomePersonManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMIStoreFaceCropOperation : HMFOperation
{
    id <HMIHomePersonManagerDataSource> _dataSource;	// 8 = 0x8
    HMIFaceCrop *_faceCrop;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000000f4d8
- (void).cxx_destruct;	// IMP=0x000000000000f50e
@property(readonly) HMIFaceCrop *faceCrop; // @synthesize faceCrop=_faceCrop;
@property(readonly) id <HMIHomePersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)main;	// IMP=0x000000000000f1a3
- (id)initWithDataSource:(id)arg1 faceCrop:(id)arg2;	// IMP=0x000000000000f0f9

@end
