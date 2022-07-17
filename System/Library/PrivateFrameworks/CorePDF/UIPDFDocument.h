//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPDFPageImageCache;
@protocol NSObject><UIPDFDocumentDelegate;

@interface UIPDFDocument : NSObject
{
    struct CGPDFDocument *_cgDocument;	// 8 = 0x8
    unsigned long long _numberOfPages;	// 16 = 0x10
    double _cachedWidth;	// 24 = 0x18
    double _cachedHeight;	// 32 = 0x20
    NSString *_documentID;	// 40 = 0x28
    NSString *_documentName;	// 48 = 0x30
    UIPDFPageImageCache *_pageImageCache;	// 56 = 0x38
    unsigned long long _imageCacheCount;	// 64 = 0x40
    unsigned long long _imageCacheLookAhead;	// 72 = 0x48
    double _imageCacheResolution;	// 80 = 0x50
    struct os_unfair_lock_s _lock;	// 88 = 0x58
    struct os_unfair_lock_s _imageCacheLock;	// 92 = 0x5c
    UIPDFPageImageCache *_thumbnailCache;	// 96 = 0x60
    struct os_unfair_lock_s _thumbnailLock;	// 104 = 0x68
    id <NSObject><UIPDFDocumentDelegate> _delegate;	// 112 = 0x70
}

+ (id)documentNamed:(id)arg1;	// IMP=0x000000000006c997
@property(readonly) struct CGPDFDocument *CGDocument; // @synthesize CGDocument=_cgDocument;
@property(nonatomic) id <NSObject><UIPDFDocumentDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)copyDocumentTo:(id)arg1;	// IMP=0x000000000006cfb6
- (_Bool)allowsCopying;	// IMP=0x000000000006cf9f
@property(readonly) NSString *documentID; // @dynamic documentID;
- (void)purgePagesBefore:(unsigned long long)arg1;	// IMP=0x000000000006ce0a
- (id)copyPageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006cd8c
- (id)pageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006cd72
@property(readonly) unsigned long long numberOfPages; // @dynamic numberOfPages;
- (void)setImageCacheCount:(unsigned long long)arg1 lookAhead:(unsigned long long)arg2 withResolution:(double)arg3;	// IMP=0x000000000006ccf9
- (void)dealloc;	// IMP=0x000000000006cc64
- (id)initWithURL:(id)arg1;	// IMP=0x000000000006cba1
- (id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument *)arg1;	// IMP=0x000000000006cafe
- (id)initWithCGPDFDocument:(struct CGPDFDocument *)arg1;	// IMP=0x000000000006ca63
- (struct CGPDFDocument *)copyCGPDFDocument;	// IMP=0x000000000006ca31
@property(retain) UIPDFPageImageCache *thumbnailCache; // @dynamic thumbnailCache;
@property(retain) UIPDFPageImageCache *pageImageCache; // @dynamic pageImageCache;
- (double)sumHeight;	// IMP=0x000000000006d324
- (double)sumWidth;	// IMP=0x000000000006d285
- (double)maxHeight;	// IMP=0x000000000006d254
- (double)maxWidth;	// IMP=0x000000000006d223
- (void)updateWidthHeightCache;	// IMP=0x000000000006d189

@end
