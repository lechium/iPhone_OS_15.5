//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKPigmentEditOptionStoreListener-Protocol.h>

@class NSBundle, NSString, NTKFace, NTKPigmentEditOptionStore;

@interface NTKPigmentEditOptionProvider : NSObject <NTKPigmentEditOptionStoreListener>
{
    NTKFace *_face;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
    NSString *_domain;	// 24 = 0x18
    NTKPigmentEditOptionStore *_store;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003c899
@property(nonatomic) __weak NTKFace *face; // @synthesize face=_face;
- (void)colorEditOptionStore:(id)arg1 didChangeForDomain:(id)arg2;	// IMP=0x000000000003c7db
- (_Bool)hasAddableCollectionsForSlot:(id)arg1;	// IMP=0x000000000003c7b7
- (id)availableColorsForSlot:(id)arg1;	// IMP=0x000000000003c793
- (id)migratedOptionForInvalidOption:(id)arg1 slot:(id)arg2;	// IMP=0x000000000003c76f
- (id)fulfilledOptionForOption:(id)arg1 slot:(id)arg2;	// IMP=0x000000000003c74b
- (id)optionAtIndex:(unsigned long long)arg1 slot:(id)arg2;	// IMP=0x000000000003c727
- (unsigned long long)indexOfOption:(id)arg1 slot:(id)arg2;	// IMP=0x000000000003c703
- (unsigned long long)numberOfOptionsForSlot:(id)arg1;	// IMP=0x000000000003c6df
- (id)defaultColorOptionForSlot:(id)arg1;	// IMP=0x000000000003c6bb
- (void)dealloc;	// IMP=0x000000000003c672
- (id)initWithDomain:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000003c596
- (id)initWithFace:(id)arg1;	// IMP=0x000000000003c4d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

