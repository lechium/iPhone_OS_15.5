//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UILocalizedIndexedCollation;
@protocol PKCountryPickerViewControllerDelegate;

@interface PKCountryPickerViewController : UITableViewController
{
    id <PKCountryPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    UILocalizedIndexedCollation *_collation;	// 16 = 0x10
    NSArray *_countries;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000046eb7d
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(nonatomic) __weak id <PKCountryPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000046e960
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000046e771
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000046e71e
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000000046e6ce
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000046e64d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000046e5fb
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000046e5ac
- (void)_configureSections;	// IMP=0x000000000046e1a4
- (void)_loadCountryCodes;	// IMP=0x000000000046ddf3
- (void)viewDidLoad;	// IMP=0x000000000046dd2f
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000046dce9

@end
