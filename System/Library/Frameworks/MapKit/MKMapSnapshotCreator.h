//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapViewDelegate-Protocol.h>

@class MKMapSnapshotRequest, NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>
{
    UIImage *_lastSnapshot;	// 8 = 0x8
    NSString *_lastAttributionString;	// 16 = 0x10
    NSLock *_requestLock;	// 24 = 0x18
    NSMutableArray *_requests;	// 32 = 0x20
    MKMapSnapshotRequest *_servingRequest;	// 40 = 0x28
}

+ (_Bool)supportsSharingThumbnails;	// IMP=0x000000000004bf5f
- (void).cxx_destruct;	// IMP=0x000000000004c804
@property(retain, nonatomic) MKMapSnapshotRequest *servingRequest; // @synthesize servingRequest=_servingRequest;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004c75b
- (void)flushRequestQueue;	// IMP=0x000000000004c6d7
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;	// IMP=0x000000000004c62e
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 requester:(id)arg4 context:(id)arg5;	// IMP=0x000000000004c4c7
- (void)_respondWithSnapshot;	// IMP=0x000000000004c302
- (id)_newSnapshotWithView:(id)arg1;	// IMP=0x000000000004c1d4
- (void)_processRequest;	// IMP=0x000000000004c06a
- (void)dealloc;	// IMP=0x000000000004bfff
- (id)init;	// IMP=0x000000000004bf78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

