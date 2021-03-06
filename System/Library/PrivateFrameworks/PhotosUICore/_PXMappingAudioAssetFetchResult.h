//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAudioAssetFetchResult-Protocol.h>

@class NSString;
@protocol PXAudioAsset, PXAudioAssetFetchResult;

@interface _PXMappingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult>
{
    id <PXAudioAssetFetchResult> _fetchResult;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000072b588
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000072b4f2
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000072b3fe
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000072b36f
@property(readonly, nonatomic) id <PXAudioAsset> lastObject;
@property(readonly, nonatomic) id <PXAudioAsset> firstObject;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000072b285
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000072b22f
@property(readonly, nonatomic) long long count;
- (id)initWithFetchResult:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000072b16e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

