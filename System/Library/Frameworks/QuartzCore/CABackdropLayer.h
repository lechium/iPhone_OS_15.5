//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CABackdropLayerDelegate><CALayerDelegate;

@interface CABackdropLayer
{
    _Bool _disablesOccludedBackdropBlurs;	// 8 = 0x8
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x000000000022e379
+ (_Bool)_hasRenderLayerSubclass;	// IMP=0x000000000022e371
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000022e255
@property _Bool disablesOccludedBackdropBlurs; // @synthesize disablesOccludedBackdropBlurs=_disablesOccludedBackdropBlurs;
@property _Bool tracksLuma;
@property _Bool ignoresScreenClip;
@property _Bool reducesCaptureBitDepth;
@property _Bool allowsInPlaceFiltering;
@property _Bool captureOnly;
@property double marginWidth;
@property double zoom;
@property struct CGRect backdropRect;
@property double scale;
@property(copy) NSString *groupNamespace;
@property(copy) NSString *groupName;
@property(getter=isEnabled) _Bool enabled;
@property _Bool usesGlobalGroupNamespace;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;	// IMP=0x000000000022eb61
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;	// IMP=0x000000000022eae9
- (void *)_copyRenderLayer:(void *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;	// IMP=0x000000000022e691
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x000000000022e5fa
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000022e3ec

// Remaining properties
@property __weak id <CABackdropLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;

@end

