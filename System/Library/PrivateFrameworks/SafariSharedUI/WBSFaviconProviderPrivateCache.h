//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary;

@interface WBSFaviconProviderPrivateCache : NSObject
{
    NSCache *_uuidToImageDataCache;	// 8 = 0x8
    NSMutableDictionary *_pageURLStringToIconInfoDict;	// 16 = 0x10
    NSMutableDictionary *_iconURLStringToIconInfoDict;	// 24 = 0x18
    NSMutableDictionary *_urlStringToRejectedResourceIconInfoDict;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000059a9a
- (void)removeAllImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059a07
- (void)removeImageDataForPageURLString:(id)arg1;	// IMP=0x00000000000595cd
- (_Bool)linkPageURLString:(id)arg1 toIconURLString:(id)arg2;	// IMP=0x00000000000593b7
- (id)rejectedResourceInfosForPageURLString:(id)arg1 iconURLString:(id)arg2;	// IMP=0x00000000000592ba
- (void)setIsRejectedResource:(_Bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3;	// IMP=0x00000000000591ba
- (void)setImageData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize)arg4 hasGeneratedResolutions:(_Bool)arg5;	// IMP=0x0000000000058ccd
- (id)imageInfoForIconURLString:(id)arg1;	// IMP=0x0000000000058c15
- (id)imageInfoForPageURLString:(id)arg1;	// IMP=0x0000000000058b5d
- (id)pageURLStringsWithPrefixesIn:(id)arg1;	// IMP=0x0000000000058879
- (id)firstImageDataMatchingPageURLStringIn:(id)arg1 matchedPageURLString:(id *)arg2;	// IMP=0x00000000000586dd
- (id)imageDataForIconURLString:(id)arg1;	// IMP=0x0000000000058643
- (id)imageDataForPageURLString:(id)arg1;	// IMP=0x00000000000585a9
- (id)init;	// IMP=0x00000000000584bf

@end

