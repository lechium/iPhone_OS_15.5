//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, _UIVisualEffectLayerConfig;

@interface _UIVisualEffectConfig : NSObject
{
    NSMutableArray *_layerConfigs;	// 8 = 0x8
    _UIVisualEffectLayerConfig *_contentConfig;	// 16 = 0x10
}

+ (id)configWithLayerConfigs:(id)arg1;	// IMP=0x00000000000f0aa7
+ (id)configWithContentConfig:(id)arg1;	// IMP=0x00000000000f0a6b
- (void).cxx_destruct;	// IMP=0x00000000000f0d08
@property(readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig; // @synthesize contentConfig=_contentConfig;
@property(readonly, nonatomic) NSArray *layerConfigs; // @synthesize layerConfigs=_layerConfigs;
- (id)description;	// IMP=0x00000000000f0c40
- (void)enumerateLayerConfigs:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f0b9d
- (void)addLayerConfig:(id)arg1;	// IMP=0x00000000000f0b0b

@end

