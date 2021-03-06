//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying>
{
    REClassLoader *_loader;	// 8 = 0x8
}

+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1;	// IMP=0x0000000000006581
+ (id)dataSourceLoaderWithDataSources:(id)arg1;	// IMP=0x00000000000064d9
+ (id)dataSourceLoaderWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006431
+ (id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2;	// IMP=0x0000000000006368
+ (id)dataSourceLoaderWithDirectories:(id)arg1;	// IMP=0x0000000000006354
+ (id)dataSourceLoaderWithDirectory:(id)arg1;	// IMP=0x0000000000006295
+ (id)defaultDataSourceLoader;	// IMP=0x0000000000005f91
+ (id)disabledDataSourceLoader;	// IMP=0x0000000000005f12
- (void).cxx_destruct;	// IMP=0x0000000000006852
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000067dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006788
- (void)enumerateDataSourceObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006772
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;	// IMP=0x000000000000675c
- (void)enumerateDataSourceClassesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006746
- (void)prewarm;	// IMP=0x0000000000006730

@end

