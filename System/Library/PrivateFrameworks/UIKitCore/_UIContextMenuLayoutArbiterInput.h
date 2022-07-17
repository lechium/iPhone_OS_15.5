//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterInput : NSObject
{
    _Bool _shouldUpdateAttachment;	// 8 = 0x8
    _Bool _shouldAvoidInputViews;	// 9 = 0x9
    double _preferredContentSpacing;	// 16 = 0x10
    unsigned long long _preferredPreviewFittingStrategy;	// 24 = 0x18
    UITargetedPreview *_sourcePreview;	// 32 = 0x20
    NSArray *_accessoryViews;	// 40 = 0x28
    struct CGSize _preferredPreviewSize;	// 48 = 0x30
    struct CGSize _preferredMenuSize;	// 64 = 0x40
    struct UIEdgeInsets _preferredEdgeInsets;	// 80 = 0x50
    CDStruct_17a0fc55 _preferredAnchor;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000007be6bc
@property(retain, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(nonatomic) unsigned long long preferredPreviewFittingStrategy; // @synthesize preferredPreviewFittingStrategy=_preferredPreviewFittingStrategy;
@property(nonatomic) CDStruct_17a0fc55 preferredAnchor; // @synthesize preferredAnchor=_preferredAnchor;
@property(nonatomic) double preferredContentSpacing; // @synthesize preferredContentSpacing=_preferredContentSpacing;
@property(nonatomic) struct UIEdgeInsets preferredEdgeInsets; // @synthesize preferredEdgeInsets=_preferredEdgeInsets;
@property(nonatomic) struct CGSize preferredMenuSize; // @synthesize preferredMenuSize=_preferredMenuSize;
@property(nonatomic) struct CGSize preferredPreviewSize; // @synthesize preferredPreviewSize=_preferredPreviewSize;
@property(nonatomic) _Bool shouldAvoidInputViews; // @synthesize shouldAvoidInputViews=_shouldAvoidInputViews;
@property(nonatomic) _Bool shouldUpdateAttachment; // @synthesize shouldUpdateAttachment=_shouldUpdateAttachment;
- (_Bool)_hasVisibleMenu;	// IMP=0x00000000007be53c

@end
