//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMapItemPhoto.h>

#import <MapsUI/MUPhotoTileViewModel-Protocol.h>

@class NSString;

@interface MKMapItemPhoto (MUPhotoTileProvider) <MUPhotoTileViewModel>
- (void)configureWithSize:(struct CGSize)arg1 imageProvider:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052ebf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
