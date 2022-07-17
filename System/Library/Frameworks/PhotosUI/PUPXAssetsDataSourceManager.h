//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>
{
    PXAssetsDataSourceManager *_underlyingDataSourceManager;	// 8 = 0x8
    long long __currentUpdateID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002876df
@property(nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID; // @synthesize _currentUpdateID=__currentUpdateID;
@property(readonly, nonatomic) PXAssetsDataSourceManager *underlyingDataSourceManager; // @synthesize underlyingDataSourceManager=_underlyingDataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002875f2
- (void)_update;	// IMP=0x0000000000287555
- (void)_handleScheduledUpdateWithID:(long long)arg1;	// IMP=0x000000000028751d
- (void)_scheduleUpdate;	// IMP=0x0000000000287460
- (id)photosDataSource;	// IMP=0x00000000002873c0
- (id)initWithUnderlyingDataSourceManager:(id)arg1;	// IMP=0x000000000028731f
- (id)init;	// IMP=0x00000000002872a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
