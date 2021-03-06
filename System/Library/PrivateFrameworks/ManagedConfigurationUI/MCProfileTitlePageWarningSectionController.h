//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCProfileTitlePageSectionController-Protocol.h>

@class MCProfileWarning, NSString, UITableView;

@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController>
{
    UITableView *_tableView;	// 8 = 0x8
    MCProfileWarning *_warning;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000031b67
@property(retain, nonatomic) MCProfileWarning *warning; // @synthesize warning=_warning;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (double)heightForHeader;	// IMP=0x0000000000031b04
- (double)heightForRowAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000031af3
- (id)titleForHeader;	// IMP=0x0000000000031aa3
- (unsigned long long)numberOfRows;	// IMP=0x0000000000031a98
- (id)cellForRowAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000031982
- (void)registerCellClassWithTableView:(id)arg1;	// IMP=0x000000000003191a
- (id)init;	// IMP=0x0000000000031869
- (id)initWithWarning:(id)arg1;	// IMP=0x00000000000317fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

