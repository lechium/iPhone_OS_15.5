//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANODv4
{
}

+ (id)filterThresholds;	// IMP=0x00000000000df8ff
+ (Class)shotflowNetworkClass;	// IMP=0x00000000000df8ee
+ (id)supportedLabelKeys;	// IMP=0x00000000000df88b
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000dfc72
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000dfb9d
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000dfa45
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000df9f0
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000df99b

@end

