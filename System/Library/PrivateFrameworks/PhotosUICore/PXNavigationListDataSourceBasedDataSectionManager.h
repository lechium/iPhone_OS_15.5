//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCollectionsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXDataSectionManagerEnabling-Protocol.h>

@class NSString, PXDataSectionEnablementForwarder, PXSectionedDataSource, PXSectionedDataSourceManager;

@interface PXNavigationListDataSourceBasedDataSectionManager <PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _hiddenWhenEmpty;	// 9 = 0x9
    PXDataSectionEnablementForwarder *_enablementForwarder;	// 16 = 0x10
    PXSectionedDataSourceManager *_dataSourceManager;	// 24 = 0x18
    PXSectionedDataSource *_dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014feab
@property(retain, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isHiddenWhenEmpty) _Bool hiddenWhenEmpty; // @synthesize hiddenWhenEmpty=_hiddenWhenEmpty;
@property(readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // @synthesize enablementForwarder=_enablementForwarder;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000014fe0b
- (id)dataSectionFromDataSource:(id)arg1;	// IMP=0x000000000014fd5b
- (id)createDataSection;	// IMP=0x000000000014fc45
- (void)_handleDataSourceChange;	// IMP=0x000000000014fb3f
- (void)_updateVisibilityViaDataSectionIfNecessary;	// IMP=0x000000000014fa5a
@property(readonly, nonatomic, getter=isDataSectionVisible) _Bool dataSectionVisible;
@property(readonly, nonatomic, getter=isDataSourceEmpty) _Bool dataSourceEmpty;
- (_Bool)allowsEmptyDataSection;	// IMP=0x000000000014f8d3
- (id)initWithChildDataSectionManagers:(id)arg1;	// IMP=0x000000000014f850
- (id)initWithDataSourceManager:(id)arg1;	// IMP=0x000000000014f7db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

