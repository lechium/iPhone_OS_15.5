//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, SXTextSource, SXTextTangierContainerInfo, SXTextTangierDocumentRoot, TSDLayoutController;

@interface SXTextLayouter : NSObject
{
    SXTextSource *_textSource;	// 8 = 0x8
    NSSet *_exclusionPaths;	// 16 = 0x10
    SXTextTangierDocumentRoot *_documentRoot;	// 24 = 0x18
    TSDLayoutController *_layoutController;	// 32 = 0x20
    SXTextTangierContainerInfo *_textInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ce756
@property(retain, nonatomic) SXTextTangierContainerInfo *textInfo; // @synthesize textInfo=_textInfo;
@property(retain, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=_layoutController;
@property(retain, nonatomic) SXTextTangierDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(retain, nonatomic) NSSet *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
@property(retain, nonatomic) SXTextSource *textSource; // @synthesize textSource=_textSource;
- (id)exclusionPathIndexes;	// IMP=0x00000000000ce564
- (id)wpLayout;	// IMP=0x00000000000ce4b5
- (id)wpStorage;	// IMP=0x00000000000ce455
- (double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ce38a
@property(readonly, nonatomic) NSArray *paragraphRanges;
- (struct CGSize)boundingSize;	// IMP=0x00000000000ce163
- (struct CGRect)typographicBounds;	// IMP=0x00000000000ce091
- (double)baselineForLastLine;	// IMP=0x00000000000cdff8
- (id)firstColumn;	// IMP=0x00000000000cdf7e
- (id)textLayout;	// IMP=0x00000000000cdefe
- (void)removeAllExclusionPaths;	// IMP=0x00000000000cdec5
- (struct _NSRange)validAnchorRangeForRange:(struct _NSRange)arg1;	// IMP=0x00000000000cd961
- (void)addExclusionPath:(id)arg1;	// IMP=0x00000000000cd6f8
- (void)assignExclusionPaths;	// IMP=0x00000000000cd411
- (void)invalidate;	// IMP=0x00000000000cd3c4
- (void)createTextInfoIfNeeded;	// IMP=0x00000000000cd153
- (void)reset;	// IMP=0x00000000000cd139
- (double)calculateHeightForWidth:(double)arg1;	// IMP=0x00000000000ccfbd
- (id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2;	// IMP=0x00000000000cceb1
- (id)init;	// IMP=0x00000000000cce9b

@end

