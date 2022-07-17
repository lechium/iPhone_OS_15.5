//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXMosaicGalleryLayouterDataSource-Protocol.h>

@class NSString, SXMosaicGalleryLayouter;

@interface SXMosaicGalleryComponentSizer <SXMosaicGalleryLayouterDataSource>
{
    SXMosaicGalleryLayouter *_layouter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000720f4
@property(retain, nonatomic) SXMosaicGalleryLayouter *layouter; // @synthesize layouter=_layouter;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;	// IMP=0x0000000000072090
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;	// IMP=0x0000000000072022
- (_Bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007201a
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000072012
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000071efc
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;	// IMP=0x0000000000071def

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
