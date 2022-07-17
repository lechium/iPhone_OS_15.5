//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXStoryResourcesDataSource;
@protocol PXStoryErrorReporter, PXStoryLoadingCoordinator, PXStoryStyle, PXStoryTimelineSpec;

@interface PXStoryTimelineProducerConfiguration : NSObject
{
    PXStoryResourcesDataSource *_resourcesDataSource;	// 8 = 0x8
    id <PXStoryStyle> _style;	// 16 = 0x10
    id <PXStoryTimelineSpec> _spec;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    id <PXStoryLoadingCoordinator> _loadingCoordinator;	// 40 = 0x28
    id <PXStoryErrorReporter> _errorReporter;	// 48 = 0x30
    CDUnknownBlockType _scorerFactory;	// 56 = 0x38
    struct _NSRange _rangeOfPrioritizedDisplayAssetResources;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000657743
@property(copy, nonatomic) CDUnknownBlockType scorerFactory; // @synthesize scorerFactory=_scorerFactory;
@property(nonatomic) struct _NSRange rangeOfPrioritizedDisplayAssetResources; // @synthesize rangeOfPrioritizedDisplayAssetResources=_rangeOfPrioritizedDisplayAssetResources;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) id <PXStoryLoadingCoordinator> loadingCoordinator; // @synthesize loadingCoordinator=_loadingCoordinator;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <PXStoryTimelineSpec> spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) id <PXStoryStyle> style; // @synthesize style=_style;
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
- (id)initWithResourcesDataSource:(id)arg1 style:(id)arg2 spec:(id)arg3 options:(unsigned long long)arg4 loadingCoordinator:(id)arg5 errorReporter:(id)arg6;	// IMP=0x000000000065744f
- (id)init;	// IMP=0x00000000006573d5

@end
