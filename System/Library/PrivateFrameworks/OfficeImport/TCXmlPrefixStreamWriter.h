//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TCXmlPrefixStreamWriter
{
    NSMutableArray *mStateStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002ecc99
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2;	// IMP=0x00000000002ecc7f
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3;	// IMP=0x00000000002ecc5f
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2;	// IMP=0x00000000002ecc42
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(_Bool)arg2;	// IMP=0x00000000002ecc25
- (_Bool)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2;	// IMP=0x00000000002ecc08
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3;	// IMP=0x00000000002ecb50
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4;	// IMP=0x00000000002eca8e
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3;	// IMP=0x00000000002ec9da
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(_Bool)arg3;	// IMP=0x00000000002ec926
- (_Bool)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3;	// IMP=0x00000000002ec83d
- (_Bool)writeAttribute:(id)arg1 doubleContent:(double)arg2;	// IMP=0x00000000002ec7a7
- (_Bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;	// IMP=0x00000000002ec719
- (_Bool)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long long)arg2;	// IMP=0x00000000002ec68f
- (_Bool)writeAttribute:(id)arg1 intContent:(long long)arg2;	// IMP=0x00000000002ec605
- (_Bool)writeAttribute:(id)arg1 boolContent:(_Bool)arg2;	// IMP=0x00000000002ec57d
- (_Bool)writeAttribute:(id)arg1 content:(id)arg2;	// IMP=0x00000000002ec4c4
- (_Bool)addElement:(id)arg1;	// IMP=0x00000000002ec45d
- (_Bool)startElement:(id)arg1;	// IMP=0x00000000002ec3cd
- (id)currentAttributePrefix;	// IMP=0x00000000002ec369
- (id)currentElementPrefix;	// IMP=0x00000000002ec305
- (id)currentState;	// IMP=0x00000000002ec2e8
- (void)popState;	// IMP=0x00000000002ec2cb
- (id)pushStateWithSharedPrefix:(id)arg1;	// IMP=0x00000000002ec2a6
- (id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2;	// IMP=0x00000000002ec1ee
- (id)pushState;	// IMP=0x00000000002ec19a
- (void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2;	// IMP=0x00000000002ec12b
- (void)dealloc;	// IMP=0x00000000002ec09e
- (id)initWithTextWriterProvider:(id)arg1;	// IMP=0x00000000002ebfda
- (_Bool)writeOAAttribute:(id)arg1 doubleContent:(double)arg2;	// IMP=0x00000000002f456f
- (_Bool)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;	// IMP=0x00000000002f44e1
- (_Bool)writeOAAttribute:(id)arg1 intContent:(long long)arg2;	// IMP=0x00000000002f4457
- (_Bool)writeOAAttribute:(id)arg1 boolContent:(_Bool)arg2;	// IMP=0x00000000002f43cf
- (_Bool)writeOAAttribute:(id)arg1 content:(id)arg2;	// IMP=0x00000000002f43bc
- (_Bool)startOAElement:(id)arg1;	// IMP=0x00000000002f43a9
- (void)pushOAState;	// IMP=0x00000000002f4385
- (void)writeTextString:(id)arg1 forElement:(id)arg2;	// IMP=0x00000000003c87e8
- (_Bool)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2;	// IMP=0x00000000003c877c

@end
