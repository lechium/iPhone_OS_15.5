//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXFloatingCardLayout-Protocol.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface PXPhotosDetailsFloatingCardLayout : NSObject <PXFloatingCardLayout>
{
    NSOrderedSet *_snappableHeights;	// 8 = 0x8
    NSDictionary *_identifiersForHeight;	// 16 = 0x10
    NSDictionary *_heightsForIdentifier;	// 24 = 0x18
    struct CGRect __containerBounds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000292486
@property(readonly, nonatomic) NSDictionary *heightsForIdentifier; // @synthesize heightsForIdentifier=_heightsForIdentifier;
@property(readonly, nonatomic) NSDictionary *identifiersForHeight; // @synthesize identifiersForHeight=_identifiersForHeight;
@property(readonly, nonatomic) struct CGRect _containerBounds; // @synthesize _containerBounds=__containerBounds;
@property(readonly, nonatomic) NSOrderedSet *snappableHeights; // @synthesize snappableHeights=_snappableHeights;
- (void)didUpdateCardPosition:(unsigned long long)arg1;	// IMP=0x00000000002923d8
- (void)didUpdateCardHeight:(double)arg1;	// IMP=0x0000000000292315
- (void)_configureForPhotosDetailsViewController:(id)arg1 composition:(id)arg2;	// IMP=0x0000000000291f12
@property(readonly, nonatomic) unsigned long long initialPosition;
@property(readonly, nonatomic) _Bool canDrag;
@property(readonly, nonatomic) struct UIEdgeInsets insets;
@property(readonly, nonatomic) double initialHeight;
@property(readonly, nonatomic) double width;
- (id)initWithPhotosDetailsUIViewController:(id)arg1 widgetComposition:(id)arg2;	// IMP=0x0000000000291b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

