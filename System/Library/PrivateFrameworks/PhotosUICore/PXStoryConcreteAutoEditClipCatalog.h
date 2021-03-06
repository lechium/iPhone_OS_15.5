//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>
#import <PhotosUICore/PXStoryAutoEditClipCatalog-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface PXStoryConcreteAutoEditClipCatalog : NSObject <PXStoryAutoEditClipCatalog, NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_clipIndicesByAssetUUID;	// 8 = 0x8
    NSMutableArray *_orderedClips;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007169c4
- (long long)indexOfClipForDisplayAsset:(id)arg1;	// IMP=0x0000000000716938
- (id)clipAtIndex:(long long)arg1;	// IMP=0x0000000000716922
- (void)enumerateClipsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000071688e
- (id)clipForDisplayAsset:(id)arg1;	// IMP=0x00000000007167ea
@property(readonly, nonatomic) long long numberOfClips;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000716754
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007166d4
- (id)debugDescription;	// IMP=0x000000000071666b
- (id)initWithCapacity:(long long)arg1;	// IMP=0x000000000071654c
- (id)init;	// IMP=0x0000000000716538

@end

