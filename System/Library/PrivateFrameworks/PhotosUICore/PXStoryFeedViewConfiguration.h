//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class PXExtendedTraitCollection, PXStoryFeedConfiguration, UIViewController;

@interface PXStoryFeedViewConfiguration : NSObject <NSCopying>
{
    PXStoryFeedConfiguration *_feedConfiguration;	// 8 = 0x8
    PXExtendedTraitCollection *_extendedTraitCollection;	// 16 = 0x10
    UIViewController *_containerViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000039ca01
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(readonly, nonatomic) PXStoryFeedConfiguration *feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039c8fe
- (id)initWithFeedConfiguration:(id)arg1 extendedTraitCollection:(id)arg2;	// IMP=0x000000000039c85a
- (id)init;	// IMP=0x000000000039c7e0

@end

