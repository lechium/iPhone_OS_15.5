//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFContentItemsViewController : UITableViewController
{
    _Bool _allowsCoercion;	// 8 = 0x8
    NSArray *_contentItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005a6c6
@property(nonatomic) _Bool allowsCoercion; // @synthesize allowsCoercion=_allowsCoercion;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000005a5c0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005a43e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000005a421
- (void)viewDidLoad;	// IMP=0x000000000005a329
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000005a2b6

@end
