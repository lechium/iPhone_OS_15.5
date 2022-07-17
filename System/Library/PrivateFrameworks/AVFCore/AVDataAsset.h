//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVDataAsset
{
    NSDictionary *_initializationOptions;	// 16 = 0x10
    AVAssetInspectorLoader *_loader;	// 24 = 0x18
    AVDispatchOnce *_allocateTracksOnceOnly;	// 32 = 0x20
    NSArray *_tracks;	// 40 = 0x28
}

+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2;	// IMP=0x000000000002afba
+ (unsigned long long)_dataLengthLimit;	// IMP=0x000000000002afaf
- (_Bool)_requiresInProcessOperation;	// IMP=0x000000000002b542
- (unsigned long long)referenceRestrictions;	// IMP=0x000000000002b4ce
- (id)tracks;	// IMP=0x000000000002b40c
- (Class)_classForTrackInspectors;	// IMP=0x000000000002b3ef
- (struct OpaqueFigFormatReader *)_formatReader;	// IMP=0x000000000002b3d2
- (id)_assetInspector;	// IMP=0x000000000002b3b5
- (id)_assetInspectorLoader;	// IMP=0x000000000002b3a4
- (void)dealloc;	// IMP=0x000000000002b330
- (id)initWithData:(id)arg1 contentType:(id)arg2;	// IMP=0x000000000002b31b
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;	// IMP=0x000000000002b0f2

@end
