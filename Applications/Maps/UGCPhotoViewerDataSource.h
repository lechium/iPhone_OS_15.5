//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSArray, NSMutableArray, NSString, UGCPhotoViewerDataProvider;
@protocol UGCPhotoViewerDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface UGCPhotoViewerDataSource : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
    NSMutableArray *_dataProviders;	// 16 = 0x10
    id <UGCPhotoViewerDataSourceDelegate> _delegate;	// 24 = 0x18
    unsigned long long _albumIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006aefc3
@property(nonatomic) unsigned long long albumIndex; // @synthesize albumIndex=_albumIndex;
@property(readonly, nonatomic) _Bool hasDataToShow;
- (id)photoViewerDataProviderRequestsMapItem:(id)arg1;	// IMP=0x00100000006aef5d
- (void)photoViewerDataProvider:(id)arg1 failedBatchRequestWithError:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00100000006aeeb8
- (void)photoViewerDataProvider:(id)arg1 didUpdateWithPhotos:(id)arg2;	// IMP=0x00100000006aee2f
@property(readonly, nonatomic) UGCPhotoViewerDataProvider *currentDataProvider;
@property(readonly, nonatomic) NSArray *currentVendorNameList;
@property(readonly, nonatomic) NSArray *currentPhotoList;
- (void)fetchNextBatchRequestIfNeeded;	// IMP=0x00100000006aed01
@property(readonly, nonatomic) _Bool hasReachedTotalCount;
@property(nonatomic) unsigned long long indexOfTappedPhoto;
- (void)_initSingleVendorPhotos;	// IMP=0x00100000006aeb29
- (void)_initComingledVendorPhotos;	// IMP=0x00100000006ae85b
- (void)_createDataSource;	// IMP=0x00100000006ae7c8
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000006ae717

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
