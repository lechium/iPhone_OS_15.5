//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class NSSet;

@interface HUSoftwareUpdateInfoItem : HFItem
{
    NSSet *_accessories;	// 8 = 0x8
}

+ (id)_iconDescriptorForAccessories:(id)arg1;	// IMP=0x000000000027bab5
+ (id)_dateFormatter;	// IMP=0x000000000027b9f0
- (void).cxx_destruct;	// IMP=0x000000000027caa8
@property(readonly, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000027bd83
- (id)initWithAccessories:(id)arg1;	// IMP=0x000000000027bd15
- (id)init;	// IMP=0x000000000027bc60

@end

