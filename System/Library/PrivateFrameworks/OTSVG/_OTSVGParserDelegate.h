//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OTSVG/NSXMLParserDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _OTSVGParserDelegate : NSObject <NSXMLParserDelegate>
{
    _Bool errorOccurred;	// 8 = 0x8
    unsigned int skipDepth;	// 12 = 0xc
    unsigned int unitsPerEm;	// 16 = 0x10
    void *root;	// 24 = 0x18
    vector_feaf3631 stack;	// 32 = 0x20
    unordered_map_823f4523 namespaces;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000030d14
- (void).cxx_destruct;	// IMP=0x0000000000030ccd
@property unordered_map_823f4523 namespaces; // @synthesize namespaces;
@property vector_feaf3631 stack; // @synthesize stack;
@property void *root; // @synthesize root;
@property unsigned int unitsPerEm; // @synthesize unitsPerEm;
@property unsigned int skipDepth; // @synthesize skipDepth;
@property _Bool errorOccurred; // @synthesize errorOccurred;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;	// IMP=0x000000000003028a
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x0000000000030224
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;	// IMP=0x000000000002ff01
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;	// IMP=0x000000000002f746
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000000002f6e9
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x000000000002ddd5
- (void)parserDidEndDocument:(id)arg1;	// IMP=0x000000000002ddcf
- (void)parserDidStartDocument:(id)arg1;	// IMP=0x000000000002ddc9
- (id)initWithUnitsPerEm:(unsigned int)arg1;	// IMP=0x000000000002dcbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
