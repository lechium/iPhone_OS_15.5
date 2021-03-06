//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITargetedDragPreview, _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIDragLiftedItem : NSObject
{
    _Bool _sourceViewWasAdded;	// 8 = 0x8
    _UIPlatterView *_platterView;	// 16 = 0x10
    UITargetedDragPreview *_targetedPreview;	// 24 = 0x18
    double _liftAlpha;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005db6bf
@property(nonatomic) double liftAlpha; // @synthesize liftAlpha=_liftAlpha;
@property(nonatomic) _Bool sourceViewWasAdded; // @synthesize sourceViewWasAdded=_sourceViewWasAdded;
@property(retain, nonatomic) UITargetedDragPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
@property(retain, nonatomic) _UIPlatterView *platterView; // @synthesize platterView=_platterView;

@end

