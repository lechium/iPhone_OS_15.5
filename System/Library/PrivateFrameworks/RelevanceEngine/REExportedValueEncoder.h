//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface REExportedValueEncoder : NSObject
{
    unsigned long long _options;	// 8 = 0x8
}

- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(CDUnknownBlockType)arg2 isLast:(_Bool)arg3;	// IMP=0x000000000001433c
- (void)writeArrayEndToStream:(id)arg1;	// IMP=0x0000000000014336
- (void)writeArrayStartToStream:(id)arg1;	// IMP=0x0000000000014330
- (_Bool)writesArrayHeader;	// IMP=0x0000000000014328
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;	// IMP=0x0000000000014322
- (void)writeDictionaryEndToStream:(id)arg1;	// IMP=0x000000000001431c
- (void)writeDictionaryStartToStream:(id)arg1;	// IMP=0x0000000000014316
- (_Bool)writesDictionaryHeader;	// IMP=0x000000000001430e
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;	// IMP=0x0000000000014308
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;	// IMP=0x0000000000014302
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;	// IMP=0x00000000000142fc
- (void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2;	// IMP=0x0000000000014231
- (void)writeNullToStream:(id)arg1;	// IMP=0x000000000001422b
- (void)writeNumber:(id)arg1 toStream:(id)arg2;	// IMP=0x0000000000014225
- (void)writeString:(id)arg1 toStream:(id)arg2;	// IMP=0x000000000001421f
- (void)writeDate:(id)arg1 toStream:(id)arg2;	// IMP=0x0000000000014219
- (id)_namesArrayFromArray:(id)arg1;	// IMP=0x0000000000013cc7
- (void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(CDUnknownBlockType)arg3 writerBlock:(CDUnknownBlockType)arg4 endBlock:(CDUnknownBlockType)arg5 wantsHeader:(_Bool)arg6 depth:(unsigned long long)arg7;	// IMP=0x0000000000013159
- (void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(unsigned long long)arg3 needsIndent:(_Bool)arg4;	// IMP=0x000000000001292b
- (id)dataFromExportedValue:(id)arg1;	// IMP=0x000000000001286d
- (void)writeExportedValue:(id)arg1 toStream:(id)arg2;	// IMP=0x0000000000012855
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000012818

@end

