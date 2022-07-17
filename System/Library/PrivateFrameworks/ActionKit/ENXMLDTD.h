//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ENXMLDTD : NSObject
{
    struct _xmlDtd *_dtd;	// 8 = 0x8
    NSString *_docTypeDeclaration;	// 16 = 0x10
}

+ (id)specialDTD;	// IMP=0x00000000001f3a2d
+ (id)symbolDTD;	// IMP=0x00000000001f39fd
+ (id)lat1DTD;	// IMP=0x00000000001f39cd
+ (id)enml2dtd;	// IMP=0x00000000001f399d
+ (id)enexDTD;	// IMP=0x00000000001f396d
+ (id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2;	// IMP=0x00000000001f390f
+ (void)initialize;	// IMP=0x00000000001f38d0
- (void).cxx_destruct;	// IMP=0x00000000001f38c0
@property(retain, nonatomic) NSString *docTypeDeclaration; // @synthesize docTypeDeclaration=_docTypeDeclaration;
- (_Bool)isAttributeLegal:(id)arg1 inElement:(id)arg2;	// IMP=0x00000000001f37b8
- (id)sanitizedAttributes:(id)arg1 forElement:(id)arg2;	// IMP=0x00000000001f3496
- (_Bool)isElementLegal:(id)arg1;	// IMP=0x00000000001f347d
- (struct _xmlElement *)xmlElementNamed:(id)arg1;	// IMP=0x00000000001f3441
- (struct _xmlEntity *)xmlEntityNamed:(id)arg1;	// IMP=0x00000000001f33f7
- (void)dealloc;	// IMP=0x00000000001f33b0
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000001f3239

@end
