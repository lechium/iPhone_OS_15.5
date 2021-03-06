//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface TIMetricDescriptorRegistry : NSObject
{
    NSMutableDictionary *_metricDescriptors;	// 8 = 0x8
    NSMutableSet *_invalidMetricNames;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
    _Bool _loaded;	// 32 = 0x20
    NSDictionary *_config;	// 40 = 0x28
}

+ (id)registryWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;	// IMP=0x0000000000097e32
+ (id)registryWithConfig:(id)arg1;	// IMP=0x0000000000097de5
+ (id)registry;	// IMP=0x0000000000097dba
- (void).cxx_destruct;	// IMP=0x0000000000097c0a
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000097ab6
- (id)contextFromError:(id)arg1;	// IMP=0x0000000000097a42
- (void)_loadMetricDescriptors;	// IMP=0x000000000009758a
- (void)loadMetricDescriptorsIfNecessary;	// IMP=0x000000000009753f
@property(readonly, nonatomic) NSSet *invalidMetricNames;
@property(readonly, nonatomic) NSDictionary *metricDescriptors;
- (id)metricDescriptorWithName:(id)arg1;	// IMP=0x00000000000973f7
- (id)allMetricDescriptors;	// IMP=0x00000000000973a7
- (id)initWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;	// IMP=0x000000000009707e
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000096fc3

@end

