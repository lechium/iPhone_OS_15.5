//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <NeutrinoKit/CALayerDelegate-Protocol.h>

@class NSMutableArray, NSString, NUImageGeometry;
@protocol NUPurgeableTextureImage, NUTextureImage;

@interface NUTiledImageLayer : CALayer <CALayerDelegate>
{
    struct CGColor *_debugColor;	// 8 = 0x8
    id <NUPurgeableTextureImage> __image;	// 16 = 0x10
    NUImageGeometry *__geometry;	// 24 = 0x18
    NSMutableArray *__tileLayers;	// 32 = 0x20
    CDStruct_f261e59c _validRegionInsets;	// 40 = 0x28
}

+ (id)defaultActionForKey:(id)arg1;	// IMP=0x000000000000d865
- (void).cxx_destruct;	// IMP=0x000000000000d082
@property(retain) NSMutableArray *_tileLayers; // @synthesize _tileLayers=__tileLayers;
@property(retain) NUImageGeometry *_geometry; // @synthesize _geometry=__geometry;
@property(retain) id <NUPurgeableTextureImage> _image; // @synthesize _image=__image;
@property(nonatomic) CDStruct_912cb5d2 validRegionInsets; // @synthesize validRegionInsets=_validRegionInsets;
@property(retain) struct CGColor *debugColor; // @synthesize debugColor=_debugColor;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000cfa1
@property(readonly, copy) NSString *debugDescription;
- (id)snapshotImage;	// IMP=0x000000000000c9ae
- (void)_updateSublayers;	// IMP=0x000000000000c461
@property(readonly, nonatomic) _Bool nu_contentsAreFlipped;
@property(retain) NUImageGeometry *geometry;
@property(retain) id <NUTextureImage> image;
- (void)layoutSublayers;	// IMP=0x000000000000c207
- (void)dealloc;	// IMP=0x000000000000c15a
- (id)init;	// IMP=0x000000000000c0b9

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

