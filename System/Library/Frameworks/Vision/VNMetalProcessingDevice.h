//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNMetalProcessingDevice
{
    id <MTLDevice> _metalDevice;	// 8 = 0x8
}

+ (id)allDevices;	// IMP=0x00000000001157a3
- (void).cxx_destruct;	// IMP=0x0000000000115790
- (int)espressoStorageType;	// IMP=0x0000000000115785
- (int)espressoEngine;	// IMP=0x000000000011577a
- (int)espressoDeviceID;	// IMP=0x0000000000115765
- (id)metalDevice;	// IMP=0x0000000000115750
- (_Bool)targetsGPU;	// IMP=0x0000000000115748
- (id)description;	// IMP=0x0000000000115696
- (unsigned long long)hash;	// IMP=0x0000000000115617
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000115523
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x00000000001154b5

@end
