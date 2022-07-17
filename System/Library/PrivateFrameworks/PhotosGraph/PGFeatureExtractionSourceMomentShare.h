//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGFeatureExtractionSource-Protocol.h>

@class NSString;

@interface PGFeatureExtractionSourceMomentShare : NSObject <PGFeatureExtractionSource>
{
}

- (id)fetchMomentsOverlappingMomentShare:(id)arg1 inPhotoLibrary:(id)arg2 loggingConnection:(id)arg3;	// IMP=0x000000000021393e
- (id)extractSharingRecordsFromGraph:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000212bbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
