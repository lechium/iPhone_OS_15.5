//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXWriterProtocol-Protocol.h>

@class CKXORCWriterOptions;
@protocol CKXORCHelpers;

@interface CKXORCWriter <CKXWriterProtocol>
{
    struct unique_ptr<orc::Writer, std::default_delete<orc::Writer>> _writer;	// 8 = 0x8
    struct unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>> _outputStream;	// 16 = 0x10
    struct unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>> _currentBatch;	// 24 = 0x18
    struct set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> _uncommittedStructs;	// 32 = 0x20
    id <CKXORCHelpers> _helpers;	// 56 = 0x38
    CKXORCWriterOptions *_options;	// 64 = 0x40
    unsigned long long _rootStructToken;	// 72 = 0x48
    unsigned long long _startingRowForCurrentBatch;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00000000000f3d3f
- (void).cxx_destruct;	// IMP=0x00000000000f3c9c
@property(nonatomic) unsigned long long startingRowForCurrentBatch; // @synthesize startingRowForCurrentBatch=_startingRowForCurrentBatch;
@property(nonatomic) unsigned long long rootStructToken; // @synthesize rootStructToken=_rootStructToken;
@property(readonly, nonatomic) CKXORCWriterOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <CKXORCHelpers> helpers; // @synthesize helpers=_helpers;
- (void *)valueColumnForField:(unsigned long long)arg1;	// IMP=0x00000000000f3b03
- (void *)listColumnForReference:(unsigned long long)arg1;	// IMP=0x00000000000f39b6
- (void *)structReferenceColumnForReference:(unsigned long long)arg1;	// IMP=0x00000000000f3869
- (void *)structColumnForStruct:(unsigned long long)arg1;	// IMP=0x00000000000f37c7
- (id)flush;	// IMP=0x00000000000f35fd
- (void)commitStruct:(CDStruct_08de4b04)arg1;	// IMP=0x00000000000f3484
- (void)setData:(void *)arg1 withLength:(unsigned long long)arg2 forList:(CDStruct_2d6ed345)arg3;	// IMP=0x00000000000f3064
- (void)setData:(void *)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(CDStruct_08de4b04)arg4;	// IMP=0x00000000000f2e08
- (CDStruct_08de4b04)beginAppendedListStructInList:(CDStruct_2d6ed345)arg1;	// IMP=0x00000000000f2cd6
- (void)_appendData:(void *)arg1 withValueSize:(unsigned long long)arg2 length:(unsigned long long)arg3 toRow:(unsigned long long)arg4 toList:(unsigned long long)arg5;	// IMP=0x00000000000f2a5b
- (CDStruct_2d6ed345)beginReferencedListForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000f296f
- (CDStruct_08de4b04)beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000f27e7
- (CDStruct_08de4b04)beginRootStructWithType:(unsigned long long)arg1;	// IMP=0x00000000000f2703
- (void *)rootColumn;	// IMP=0x00000000000f26d5
- (void)enumerateAllColumnsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f26a3
- (CDStruct_08de4b04)appendRowForStruct:(unsigned long long)arg1;	// IMP=0x00000000000f21e4
- (void)expandColumn:(void *)arg1 includingRow:(unsigned long long)arg2;	// IMP=0x00000000000f21a1
- (void)expandColumn:(void *)arg1 includingBatchOffset:(unsigned long long)arg2;	// IMP=0x00000000000f2132
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)arg1;	// IMP=0x00000000000f2044
- (_Bool)growCurrentBatchToIncludeRow:(unsigned long long)arg1;	// IMP=0x00000000000f1fe6
- (_Bool)growCurrentBatchToIncludeBatchOffset:(unsigned long long)arg1;	// IMP=0x00000000000f1c09
- (void)commitBatchIfNeeded;	// IMP=0x00000000000f1b0e
- (void)commitBatch;	// IMP=0x00000000000f17f6
- (void)updateNumberOfElementsForCurrentBatch;	// IMP=0x00000000000f1710
- (void)createWriter;	// IMP=0x00000000000f11e2
- (void)resetColumnNulls:(void *)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000f11aa
- (id)initWithSchema:(id)arg1 helpers:(id)arg2 options:(id)arg3;	// IMP=0x00000000000f0ffc
- (id)initWithSchema:(id)arg1;	// IMP=0x00000000000f0f6d

@end
