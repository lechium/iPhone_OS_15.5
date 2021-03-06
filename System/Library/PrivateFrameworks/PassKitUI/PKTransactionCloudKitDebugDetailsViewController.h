//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableDictionary, NSMutableSet, PKCloudRecordObject, PKCloudStoreService, PKPaymentTransaction;

@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController
{
    PKCloudRecordObject *_cloudRecordObject;	// 8 = 0x8
    NSArray *_records;	// 16 = 0x10
    PKPaymentTransaction *_transaction;	// 24 = 0x18
    PKCloudStoreService *_cloudStoreService;	// 32 = 0x20
    _Bool _loadingCloudRecordObject;	// 40 = 0x28
    _Bool _inBridge;	// 41 = 0x29
    NSMutableDictionary *_keysForRecordName;	// 48 = 0x30
    NSMutableDictionary *_valuesForRecordName;	// 56 = 0x38
    NSMutableSet *_cloudStoreObjectHandlers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003de275
- (void)_processCloudRecords;	// IMP=0x00000000003dda81
- (void)_loadCloudData;	// IMP=0x00000000003dd5f4
- (id)_recordForSection:(long long)arg1;	// IMP=0x00000000003dd5d7
- (id)_recordNameForSection:(long long)arg1;	// IMP=0x00000000003dd55d
- (id)_cellWithTitleText:(id)arg1 valueText:(id)arg2;	// IMP=0x00000000003dd3c0
- (void)_callCloudRecordObjectDescriptionBlocks;	// IMP=0x00000000003dd1ea
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003dcf9f
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000003dcf97
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000003dcef5
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000003dce89
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000003dcdc5
- (void)cloudRecordObjectDescriptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003dcd26
- (void)viewDidLoad;	// IMP=0x00000000003dcca6
- (id)initWithTransaction:(id)arg1;	// IMP=0x00000000003dcbbd

@end

