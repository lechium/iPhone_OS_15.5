//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPhotoInfoProvider-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEODefaultPhotoInfoProvider : NSObject <GEOPhotoInfoProvider>
{
    NSArray *_sortedPhotoInfos;	// 8 = 0x8
}

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;	// IMP=0x000000000121eccf
- (void).cxx_destruct;	// IMP=0x000000000121f6d0
- (int)designatedURLType;	// IMP=0x000000000121f6c8
- (id)bestPhotoForSize:(struct CGSize)arg1 options:(id)arg2;	// IMP=0x000000000121f3e6
- (id)largestPhoto;	// IMP=0x000000000121f3d0
- (double)sizeRatio;	// IMP=0x000000000121f330
- (id)initWithPhotoContent:(id)arg1;	// IMP=0x000000000121f132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

