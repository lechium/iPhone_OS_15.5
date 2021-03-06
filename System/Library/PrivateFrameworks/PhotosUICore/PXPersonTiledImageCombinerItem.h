//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXFaceTileImageCombinerItem-Protocol.h>

@class NSString;
@protocol PXPerson;

@interface PXPersonTiledImageCombinerItem : NSObject <PXFaceTileImageCombinerItem>
{
    id <PXPerson> _person;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000096f112
- (void)px_requestImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 isRTL:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000096eece
- (id)initWithPerson:(id)arg1;	// IMP=0x000000000096ede8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

