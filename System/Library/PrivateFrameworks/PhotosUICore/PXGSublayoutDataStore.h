//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString;

@interface PXGSublayoutDataStore : NSObject <PXGDiagnosticsProvider>
{
    long long _capacity;	// 8 = 0x8
    long long _count;	// 16 = 0x10
    CDStruct_7dd43651 *_geometries;	// 24 = 0x18
    CDStruct_df88f589 *_infos;	// 32 = 0x20
    long long _version;	// 40 = 0x28
}

@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) CDStruct_df88f589 *infos; // @synthesize infos=_infos;
@property(readonly, nonatomic) CDStruct_7dd43651 *geometries; // @synthesize geometries=_geometries;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)enumerateSublayoutGeometriesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000417345
- (void)enumerateSublayoutGeometriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004172eb
- (long long)indexOfSublayout:(id)arg1;	// IMP=0x0000000000417260
- (void)enumerateSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004171c0
- (void)enumerateSublayoutsInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000417071
- (void)enumerateSublayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000417017
- (CDStruct_7dd43651)geometryForSublayout:(id)arg1;	// IMP=0x0000000000416ef6
- (unsigned int)spriteIndexOriginForSublayout:(id)arg1;	// IMP=0x0000000000416e09
- (id)sublayoutProviderAtIndex:(long long)arg1;	// IMP=0x0000000000416d3b
- (id)sublayoutAtIndex:(long long)arg1;	// IMP=0x0000000000416c6e
- (void)_insertRange:(struct _NSRange)arg1;	// IMP=0x0000000000416a84
- (void)removeSublayoutsInRange:(struct _NSRange)arg1;	// IMP=0x000000000041690d
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000416845
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000416761
- (void)_invalidateVersion;	// IMP=0x00000000004166cc
- (void)dealloc;	// IMP=0x0000000000416644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
