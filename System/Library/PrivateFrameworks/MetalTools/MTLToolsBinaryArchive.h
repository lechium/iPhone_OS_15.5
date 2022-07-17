//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLBinaryArchiveSPI-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice;

@interface MTLToolsBinaryArchive <MTLBinaryArchiveSPI>
{
}

- (_Bool)addFunctionWithDescriptor:(id)arg1 library:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012796
- (_Bool)storeTileRenderPipelineDescriptor:(id)arg1;	// IMP=0x0000000000012765
- (_Bool)storeRenderPipelineDescriptor:(id)arg1;	// IMP=0x0000000000012734
- (_Bool)storeComputePipelineDescriptor:(id)arg1;	// IMP=0x0000000000012703
- (_Bool)enumerateArchivesFromPipelineCollection:(CDUnknownBlockType)arg1;	// IMP=0x00000000000126d2
- (_Bool)enumerateArchivesFromBackingFile:(CDUnknownBlockType)arg1;	// IMP=0x00000000000126a1
- (struct MTLPipelineCollection *)pipelineCollection;	// IMP=0x0000000000012676
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000012645
- (id)getBinaryDataForKey:(id)arg1;	// IMP=0x0000000000012614
- (void)addBinaryEntry:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000125d4
- (id)getArchiveDataForKey:(const CDStruct_41a22ec7 *)arg1;	// IMP=0x00000000000125a3
- (void)addArchiveEntry:(id)arg1 forKey:(const CDStruct_41a22ec7 *)arg2;	// IMP=0x0000000000012563
@property(readonly) NSArray *keys;
- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000124f3
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000124b3
- (_Bool)addLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001243a
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000123c9
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012367
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000122f6
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012294
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000012223
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000121c1
@property(readonly) unsigned long long options;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
