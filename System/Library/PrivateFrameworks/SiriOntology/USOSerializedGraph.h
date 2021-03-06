//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface USOSerializedGraph : NSObject <NSSecureCoding>
{
    NSString *_printedForm;	// 8 = 0x8
    NSArray *_nodes;	// 16 = 0x10
    NSArray *_edges;	// 24 = 0x18
    NSArray *_identifiers;	// 32 = 0x20
    NSArray *_alignments;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dcc2b
- (void).cxx_destruct;	// IMP=0x00000000000dd436
@property(retain, nonatomic) NSArray *alignments; // @synthesize alignments=_alignments;
@property(retain, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) NSArray *edges; // @synthesize edges=_edges;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) NSString *printedForm; // @synthesize printedForm=_printedForm;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dcf4f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dcc33
- (unique_ptr_e8bae616)toCppUsoGraph:(shared_ptr_de47c0c1)arg1 withError:(id *)arg2;	// IMP=0x00000000000da8bd
- (const void *)getOrCreateEdgeName:(id)arg1 withVocabManager:(shared_ptr_de47c0c1)arg2 withError:(id *)arg3;	// IMP=0x00000000000da631
- (const void *)getOrCreateVerbName:(id)arg1 withVocabManager:(shared_ptr_de47c0c1)arg2 withError:(id *)arg3;	// IMP=0x00000000000da379
- (const void *)getOrCreateNodeName:(id)arg1 withVocabManager:(shared_ptr_de47c0c1)arg2 withError:(id *)arg3;	// IMP=0x00000000000da0ed
- (id)initWithUsoGraph:(const void *)arg1 withError:(id *)arg2;	// IMP=0x00000000000d999c
- (id)createSerializedNode:(const struct UsoGraphNode *)arg1 withError:(id *)arg2;	// IMP=0x00000000000d9424
- (id)getUtteranceAlignmentsIfExists:(const struct UsoGraphNode *)arg1 nodeIndex:(unsigned long long)arg2;	// IMP=0x00000000000d9260
- (id)getIdentifiersIfExists:(const struct UsoGraphNode *)arg1 nodeIndex:(unsigned long long)arg2;	// IMP=0x00000000000d8db9
- (id)initWithNodes:(id)arg1 edges:(id)arg2 identifiers:(id)arg3 alignments:(id)arg4;	// IMP=0x00000000000d8ca9
- (id)initWithNodes:(id)arg1 edges:(id)arg2;	// IMP=0x00000000000d8b90

@end

