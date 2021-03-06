//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSString, UIKBAutoFillTestArchive;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIKBAutoFillTestArchive *_testArchive;	// 8 = 0x8
}

+ (void)enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000008aa7c3
- (void).cxx_destruct;	// IMP=0x00000000008aae5e
@property(readonly, nonatomic) UIKBAutoFillTestArchive *testArchive; // @synthesize testArchive=_testArchive;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000008aadd0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000008aad53
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000008aacde
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000008aac69
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000008aabd3
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000008aab56
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000008aaad9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000008aaa3b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000008aa9ca
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000008aa968
- (void)_applyNavigationItemPropertiesFromTestArchive;	// IMP=0x00000000008aa522
- (void)viewDidLoad;	// IMP=0x00000000008aa351
- (id)initWithAutoFillTestArchive:(id)arg1;	// IMP=0x00000000008aa2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

