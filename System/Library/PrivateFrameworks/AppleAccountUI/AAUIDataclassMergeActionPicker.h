//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/ACUIDataclassActionPicker.h>

@class NSString;

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker
{
    _Bool _isPerformingBatchMerge;	// 8 = 0x8
    _Bool _isTetheredSyncingEnabled;	// 9 = 0x9
    _Bool _isAnotherAccountSyncingDataclass;	// 10 = 0xa
    _Bool _isDataclassSyncingUsingExchangeOnly;	// 11 = 0xb
    _Bool _localStoreHasReadOnlyCalendars;	// 12 = 0xc
    NSString *_tetheredSyncingSource;	// 16 = 0x10
}

@property(nonatomic) NSString *tetheredSyncingSource; // @synthesize tetheredSyncingSource=_tetheredSyncingSource;
@property(nonatomic) _Bool localStoreHasReadOnlyCalendars; // @synthesize localStoreHasReadOnlyCalendars=_localStoreHasReadOnlyCalendars;
@property(nonatomic, setter=setDataclassIsSyncingUsingExchangeOnly:) _Bool isDataclassSyncingUsingExchangeOnly; // @synthesize isDataclassSyncingUsingExchangeOnly=_isDataclassSyncingUsingExchangeOnly;
@property(nonatomic, setter=setAnotherAccountIsSyncingDataclass:) _Bool isAnotherAccountSyncingDataclass; // @synthesize isAnotherAccountSyncingDataclass=_isAnotherAccountSyncingDataclass;
@property(nonatomic, setter=setTetheredSyncingEnabled:) _Bool isTetheredSyncingEnabled; // @synthesize isTetheredSyncingEnabled=_isTetheredSyncingEnabled;
@property(nonatomic, setter=setPerformingBatchMerge:) _Bool isPerformingBatchMerge; // @synthesize isPerformingBatchMerge=_isPerformingBatchMerge;
- (id)descriptionForDataclassAction:(id)arg1;	// IMP=0x000000000001bf9d
- (id)message;	// IMP=0x000000000001b9ce
- (id)title;	// IMP=0x000000000001b7f8

@end
