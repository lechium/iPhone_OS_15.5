//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLBinaryArchiveSPI-Protocol.h>

@class MTLLoadedFile, NSArray, NSData, NSMutableDictionary, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_queue;

@interface _MTLBinaryArchive <MTLBinaryArchiveSPI>
{
    id <MTLDevice> _device;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    MTLLoadedFile *_fileMapping;	// 40 = 0x28
    NSData *_fileData;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    _Bool _fileHasAIRNTFormat;	// 64 = 0x40
    struct unordered_map<MTLFunctionId, std::pair<unsigned long long, unsigned long long>, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> _executableFileIndex;	// 72 = 0x48
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _pipelineFileIndex;	// 112 = 0x70
    NSMutableDictionary *_entries;	// 136 = 0x88
    struct unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> _pipelineCollection;	// 144 = 0x90
    _Bool _collectArchives;	// 152 = 0x98
    struct unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data>*, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data>*>>> _specializedFunctions;	// 160 = 0xa0
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _specializedFunctionArchiveFileIndex;	// 200 = 0xc8
    unsigned long long _specializedFunctionArchiveOffset;	// 224 = 0xe0
    unsigned long long _specializedFunctionArchiveBytes;	// 232 = 0xe8
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> _recompilationArchiveFileIndex;	// 240 = 0xf0
    unsigned long long _recompilationArchiveOffset;	// 264 = 0x108
    unsigned long long _recompilationArchiveBytes;	// 272 = 0x110
    struct unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>> _variantMap;	// 280 = 0x118
}

+ (id)descriptorDataForArchive:(id)arg1;	// IMP=0x000000000002902f
+ (struct MTLLoaderSliceIdentifier)sliceIDForSpecializedFunctions;	// IMP=0x0000000000029932
+ (_Bool)deserializeBinaryArchiveDescriptorMachO:(CDStruct_0d7d3062 *)arg1 fileData:(id)arg2;	// IMP=0x0000000000029670
+ (_Bool)deserializeBinaryArchiveHeader:(CDStruct_0d7d3062 *)arg1 fileData:(id)arg2 device:(id)arg3;	// IMP=0x000000000002944c
- (id).cxx_construct;	// IMP=0x000000000002922f
- (void).cxx_destruct;	// IMP=0x00000000000291a3
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSArray *keys;
- (id)getBinaryDataForKey:(id)arg1;	// IMP=0x0000000000028bed
- (id)materializeAIRNTBlockForKey:(id)arg1;	// IMP=0x0000000000028af9
- (id)materializeEntryForKey:(const CDStruct_41a22ec7 *)arg1 fileIndex:(void *)arg2 containsEntry:(CDUnknownBlockType)arg3 addEntry:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028a0a
- (id)getArchiveDataForKey:(const CDStruct_41a22ec7 *)arg1;	// IMP=0x0000000000028789
- (void)addArchiveEntry:(id)arg1 forKey:(const CDStruct_41a22ec7 *)arg2;	// IMP=0x00000000000286aa
- (void)addBinaryEntry:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000028614
- (_Bool)enumerateArchivesFromPipelineCollection:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028596
- (_Bool)enumerateArchivesFromBackingFile:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028536
- (_Bool)enumerateSpecializedFunctionArchivesFromBackingFile:(CDUnknownBlockType)arg1;	// IMP=0x00000000000284d0
- (_Bool)enumerateArchivesFromBackingFileFromSlice:(const struct MTLLoaderSliceIdentifier *)arg1 version:(unsigned long long)arg2 verifyKey:(const CDStruct_41a22ec7 *)arg3 offset:(unsigned long long)arg4 bytes:(unsigned long long)arg5 enumerator:(CDUnknownBlockType)arg6;	// IMP=0x00000000000281c8
- (_Bool)loadFileIndex:(void *)arg1 expectedSliceId:(const struct MTLLoaderSliceIdentifier *)arg2 expectedVersion:(unsigned long long)arg3 sliceOffset:(unsigned long long)arg4;	// IMP=0x0000000000028038
- (_Bool)loadAirntBlocksForSlice:(const struct MTLLoaderSliceIdentifier *)arg1 sliceOffset:(unsigned long long)arg2;	// IMP=0x0000000000027e61
- (void *)pipelineCollection;	// IMP=0x0000000000027e50
- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000026892
- (_Bool)getSpecializedFunctionArchivesToSerialize:(void *)arg1;	// IMP=0x0000000000026710
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000266f6
- (_Bool)removeComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000266ee
- (_Bool)addLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000266a3
- (_Bool)addFunctionWithDescriptor:(id)arg1 library:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002651d
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000026493
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002644b
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000263c1
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026379
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000262ef
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000262a7
- (_Bool)storeTileRenderPipelineDescriptor:(id)arg1;	// IMP=0x00000000000260b2
- (_Bool)storeRenderPipelineDescriptor:(id)arg1;	// IMP=0x0000000000025d50
- (_Bool)storeComputePipelineDescriptor:(id)arg1;	// IMP=0x0000000000025b5b
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000258e7
- (id)materializeFromHash:(CDStruct_41a22ec7 *)arg1 fileIndex:(void *)arg2;	// IMP=0x0000000000025869
- (void)materializeAll;	// IMP=0x00000000000256b9
- (id)materializeFromFileOffset:(unsigned long long)arg1 hash:(CDStruct_41a22ec7 *)arg2;	// IMP=0x00000000000252b0
- (void)dealloc;	// IMP=0x00000000000251ce
- (id)initWithOptions:(unsigned long long)arg1 device:(id)arg2 url:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000024dc2
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000024cb2
- (_Bool)storingReflectionIsSupported;	// IMP=0x0000000000029975
- (void *)programObjectForFunction:(const CDStruct_41a22ec7 *)arg1;	// IMP=0x0000000000029320
- (void *)findProgramObjectForFunction:(const CDStruct_41a22ec7 *)arg1;	// IMP=0x00000000000292c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

