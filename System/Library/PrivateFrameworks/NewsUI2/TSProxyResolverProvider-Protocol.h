//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol TSProxyResolverProvider
@property(nonatomic, readonly) NSArray *assemblies;
@property(nonatomic, readonly) NSArray *bundleAssemblies;
- (id)createCarPlaySceneResolver;
- (id)createSceneResolver;
@end

