//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HMDSiriAccessoryInfo : NSObject
{
    _Bool _supportsDragonSiri;	// 8 = 0x8
    id _targetsAccessory;	// 16 = 0x10
}

+ (id)infoWithTargetableAccessory:(id)arg1;	// IMP=0x000000000018a84d
- (void).cxx_destruct;	// IMP=0x000000000018a83f
@property(nonatomic) _Bool supportsDragonSiri; // @synthesize supportsDragonSiri=_supportsDragonSiri;
@property(nonatomic) __weak id targetsAccessory; // @synthesize targetsAccessory=_targetsAccessory;
- (_Bool)isActiveAndSupportsDragonSiri;	// IMP=0x000000000018a7b9

@end
