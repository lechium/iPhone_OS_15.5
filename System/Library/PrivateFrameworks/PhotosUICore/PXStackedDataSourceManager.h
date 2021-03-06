//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDataSectionManagerChangeObserver-Protocol.h>

@class NSArray, NSString;

@interface PXStackedDataSourceManager <PXDataSectionManagerChangeObserver>
{
    _Bool _initialDataSourceCreated;	// 8 = 0x8
    NSArray *_dataSectionManagers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a4646
@property(nonatomic) _Bool initialDataSourceCreated; // @synthesize initialDataSourceCreated=_initialDataSourceCreated;
@property(copy, nonatomic) NSArray *dataSectionManagers; // @synthesize dataSectionManagers=_dataSectionManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000003a445b
- (id)createInitialDataSource;	// IMP=0x00000000003a441b
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;	// IMP=0x00000000003a4136
- (id)_newDataSource;	// IMP=0x00000000003a40b7
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;	// IMP=0x00000000003a3f86
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;	// IMP=0x00000000003a3e55
- (id)initWithDataSectionManagers:(id)arg1;	// IMP=0x00000000003a3dbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

