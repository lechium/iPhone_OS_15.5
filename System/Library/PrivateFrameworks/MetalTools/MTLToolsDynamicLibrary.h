//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLDynamicLibrarySPI-Protocol.h>

@class MTLDebugInstrumentationData, NSArray, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_data;

@interface MTLToolsDynamicLibrary <MTLDynamicLibrarySPI>
{
    NSArray *_relocations;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x00000000000120ad
@property(retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly, nonatomic) _Bool shaderValidationEnabled;
@property(copy, nonatomic) NSArray *relocations;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000011f3c
- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000011ef7
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011eb7
@property(readonly) const CDStruct_41a22ec7 *libraryUUID;
@property(readonly) NSString *libraryPath;
@property(readonly) NSString *installName;
@property(readonly) NSArray *importedLibraries;
@property(readonly) NSArray *importedSymbols;
@property(readonly) NSArray *exportedVariables;
@property(readonly) NSArray *exportedFunctions;
@property(readonly) NSObject<OS_dispatch_data> *binaryData;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

