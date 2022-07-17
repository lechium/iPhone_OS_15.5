//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceServicesController : PSListController
{
    NSArray *_appsList;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000005a2cf
@property(retain, nonatomic) NSArray *appsList; // @synthesize appsList=_appsList;
- (void)moreAppsTapped:(id)arg1;	// IMP=0x000000000005a216
- (_Bool)shouldShowMoreApps;	// IMP=0x000000000005a1a1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005a084
- (id)primaryAppSpecifier;	// IMP=0x000000000005a003
- (id)specifiers;	// IMP=0x0000000000059722
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000059515
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000059432
- (void)carrierSpaceChanged;	// IMP=0x0000000000059379
- (void)simStatusChanged;	// IMP=0x000000000005924b

@end
