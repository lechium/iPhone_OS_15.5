//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject <NSCopying>
{
    PDFDestinationPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000840a8
- (const struct __CFArray *)createArrayRef;	// IMP=0x0000000000083bf1
- (int)type;	// IMP=0x0000000000083be4
- (void)commonInit;	// IMP=0x0000000000083b5f
- (id)initWithDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2;	// IMP=0x00000000000836f8
- (id)description;	// IMP=0x00000000000833bc
- (long long)compare:(id)arg1;	// IMP=0x00000000000831a6
@property(nonatomic) double zoom;
@property(readonly, nonatomic) struct CGPoint point;
- (id)pageIfExists;	// IMP=0x00000000000830e8
@property(readonly, nonatomic) __weak PDFPage *page;
- (id)document;	// IMP=0x0000000000082f68
- (void)dealloc;	// IMP=0x0000000000082f20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082e45
- (id)initWithPage:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000082d56
- (id)init;	// IMP=0x0000000000082cf8

@end

