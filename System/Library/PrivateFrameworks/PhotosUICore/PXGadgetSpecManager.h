//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutableGadgetSpecManager-Protocol.h>

@class NSMutableSet, NSString, PXExtendedTraitCollection, PXGadgetSpec;

@interface PXGadgetSpecManager <PXChangeObserver, PXMutableGadgetSpecManager>
{
    PXGadgetSpec *_currentGadgetSpec;	// 8 = 0x8
    Class _gadgetSpecClass;	// 16 = 0x10
    long long _scrollAxis;	// 24 = 0x18
    PXExtendedTraitCollection *_traitCollection;	// 32 = 0x20
    NSMutableSet *_updatedGadgets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007740c
@property(retain, nonatomic) NSMutableSet *updatedGadgets; // @synthesize updatedGadgets=_updatedGadgets;
@property(retain, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(readonly, nonatomic) Class gadgetSpecClass; // @synthesize gadgetSpecClass=_gadgetSpecClass;
@property(retain, nonatomic) PXGadgetSpec *currentGadgetSpec; // @synthesize currentGadgetSpec=_currentGadgetSpec;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000077360
- (id)mutableChangeObject;	// IMP=0x0000000000077357
- (void)_extendedTraitCollection:(id)arg1 didChange:(unsigned long long)arg2;	// IMP=0x0000000000077208
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000007701c
- (void)updateGadgetDataSourceToSpecIfNeeded:(id)arg1;	// IMP=0x0000000000076ed4
- (id)initWithGadgetSpecClass:(Class)arg1 scrollAxis:(long long)arg2 traitCollection:(id)arg3;	// IMP=0x0000000000076d61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

