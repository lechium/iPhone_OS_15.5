//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSArray, NSString, PXInboxAggregateDataSource;

@interface PXInboxAggregateDataSourceManager <PXSectionedDataSourceManagerObserver, PXChangeObserver>
{
    NSArray *_dataSourceManagers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a11bd4
@property(readonly, nonatomic) NSArray *dataSourceManagers; // @synthesize dataSourceManagers=_dataSourceManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000a11bb1
- (id)_dataSourceSnapshot;	// IMP=0x0000000000a117d5
- (void)_updateDataSource;	// IMP=0x0000000000a1163e
- (id)createInitialDataSource;	// IMP=0x0000000000a1162c
- (id)initWithDataSourceManagers:(id)arg1;	// IMP=0x0000000000a1147b

// Remaining properties
@property(readonly, nonatomic) PXInboxAggregateDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
