//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PhotosUI/UIScrollViewDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUDebugImageTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSArray *_tableData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ac43
@property(copy) NSArray *tableData; // @synthesize tableData=_tableData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000a4f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000009fca
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000009fad
- (void)viewDidLoad;	// IMP=0x00000000000094eb
- (id)pidFromPath:(id)arg1;	// IMP=0x000000000000940a
- (id)jobNumberFromPath:(id)arg1;	// IMP=0x00000000000092b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

