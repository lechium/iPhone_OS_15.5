//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPushGenerationsRequest, NSDictionary, NSString;

@interface _ADDeviceSyncCommandPushGenerationsRequestMutation : NSObject
{
    ADDeviceSyncCommandPushGenerationsRequest *_baseModel;	// 8 = 0x8
    NSDictionary *_generationsByDataType;	// 16 = 0x10
    _mutationFlags_ba3f8b0e _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001a18f5
- (id)generate;	// IMP=0x00100000001a1848
- (void)setGenerationsByDataType:(id)arg1;	// IMP=0x00100000001a1828
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00100000001a17bd
- (id)init;	// IMP=0x00100000001a17a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

