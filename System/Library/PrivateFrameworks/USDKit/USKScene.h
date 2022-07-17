//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, USKNode;

@interface USKScene
{
    TfRefPtr_8a332644 _usdStage;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
}

+ (id)newSceneWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000043d5c5
+ (id)newSceneWithURL:(id)arg1;	// IMP=0x000000000043d5b0
- (id).cxx_construct;	// IMP=0x000000000044172a
- (void).cxx_destruct;	// IMP=0x00000000004416fb
- (void)dealloc;	// IMP=0x0000000000441630
- (void)dumpUSDA;	// IMP=0x00000000004414fe
- (id)loadedNodeIterator;	// IMP=0x0000000000441451
- (id)nodeIterator;	// IMP=0x00000000004413c4
- (id)customMetadataWithKey:(id)arg1;	// IMP=0x00000000004411b0
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;	// IMP=0x0000000000440a73
- (id)metadataWithKey:(id)arg1;	// IMP=0x000000000044088d
- (_Bool)setCustomMetadata:(id)arg1 value:(id)arg2;	// IMP=0x00000000004406e1
- (_Bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;	// IMP=0x00000000004402f5
- (_Bool)setMetadataWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000440084
- (id)metadata;	// IMP=0x000000000043f90c
- (id)subLayerOffsets;	// IMP=0x000000000043f78e
- (id)subLayerPaths;	// IMP=0x000000000043f565
- (void)addSubLayerWithPath:(id)arg1 offset:(id)arg2;	// IMP=0x000000000043f3bb
- (void)addSubLayerWithPath:(id)arg1;	// IMP=0x000000000043f3a6
@property(readonly, nonatomic) USKNode *rootNode;
- (id)newNodeAtPath:(id)arg1 type:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000043ebc1
- (id)newNodeAtPath:(id)arg1 type:(id)arg2;	// IMP=0x000000000043eba4
- (id)objectAtPath:(id)arg1;	// IMP=0x000000000043e755
- (id)propertyAtPath:(id)arg1;	// IMP=0x000000000043e4cf
- (id)nodeAtPath:(id)arg1;	// IMP=0x000000000043e2d7
- (void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1;	// IMP=0x000000000043dfff
- (void)saveAndCreateUSDZPackageWithURL:(id)arg1;	// IMP=0x000000000043dd27
- (void)save;	// IMP=0x000000000043dcb7
- (_Bool)exportToURL:(id)arg1;	// IMP=0x000000000043dbca
- (TfRefPtr_8a332644)usdStage;	// IMP=0x000000000043db93
- (id)initWithUsdStage:(TfRefPtr_8a332644)arg1 fileURL:(id)arg2;	// IMP=0x000000000043da7e
- (id)initSceneFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000043d86d
- (id)initSceneFromURL:(id)arg1;	// IMP=0x000000000043d858
- (id)init;	// IMP=0x000000000043d782

@end
