//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol UIPrintOptionListDelegate;

__attribute__((visibility("hidden")))
@interface UIPrintOptionListViewController
{
    id <UIPrintOptionListDelegate> _listDelegate;	// 8 = 0x8
    NSArray *_itemList;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000114762e
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) __weak id <UIPrintOptionListDelegate> listDelegate; // @synthesize listDelegate=_listDelegate;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000001147527
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000001147480
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000011473d6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000114710e
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000011470f4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000001147080
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000114703c
- (id)initWithListDelegate:(id)arg1;	// IMP=0x0000000001146f5c

@end
