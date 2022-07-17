//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryOffsets-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryOffsets : NSObject <_UICollectionLayoutAuxillaryOffsets, NSCopying>
{
    NSMutableDictionary *_offsets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000295fb8
- (_Bool)containsIndex:(long long)arg1 forElementKind:(id)arg2;	// IMP=0x0000000000295f62
- (_Bool)overlapsOffsets:(id)arg1;	// IMP=0x0000000000295d32
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000295b31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000295b02
- (long long)offsetForElementKind:(id)arg1;	// IMP=0x0000000000295a35
- (id)indexesForElementKind:(id)arg1;	// IMP=0x000000000029590d
- (struct _NSRange)rangeForElementKind:(id)arg1;	// IMP=0x00000000002957e9
- (id)offsetsByRebasingOnOffsets:(id)arg1;	// IMP=0x000000000029510e
- (id)offsetsByApplyingOffsets:(id)arg1;	// IMP=0x0000000000294ccd
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000002949ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
