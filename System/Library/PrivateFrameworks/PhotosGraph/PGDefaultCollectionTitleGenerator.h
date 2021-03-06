//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHAsset, PHAssetCollection;
@protocol PGEventEnrichment;

@interface PGDefaultCollectionTitleGenerator
{
    _Bool _debug;	// 8 = 0x8
    _Bool _forDiagnostics;	// 9 = 0x9
    id <PGEventEnrichment> _collection;	// 16 = 0x10
    PHAsset *_keyAsset;	// 24 = 0x18
    PHAssetCollection *_curatedAssetCollection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003cb64c
@property(nonatomic) _Bool forDiagnostics; // @synthesize forDiagnostics=_forDiagnostics;
@property(readonly, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property(readonly, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(nonatomic, getter=isDebug) _Bool debug; // @synthesize debug=_debug;
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (void)_generateTitleAndSubtitleWithManager:(id)arg1 curationContext:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cb200
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 titleGenerationContext:(id)arg4;	// IMP=0x00000000003cb0b4

@end

