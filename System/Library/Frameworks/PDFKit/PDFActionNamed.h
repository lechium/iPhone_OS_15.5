//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/NSCopying-Protocol.h>

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed <NSCopying>
{
    PDFActionNamedPrivateVars *_private2;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000067c38
- (id)toolTip;	// IMP=0x0000000000067b88
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x0000000000067ab1
- (const struct __CFDictionary *)createDictionaryRef;	// IMP=0x0000000000067a54
- (void)commonInit;	// IMP=0x00000000000679f2
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;	// IMP=0x0000000000067821
- (id)description;	// IMP=0x00000000000677b5
@property(nonatomic) long long name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067716
- (id)initWithName:(long long)arg1;	// IMP=0x0000000000067698

@end

