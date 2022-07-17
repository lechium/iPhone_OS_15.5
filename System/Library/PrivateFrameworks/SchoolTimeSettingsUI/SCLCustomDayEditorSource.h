//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SchoolTimeSettingsUI/SCLTimeIntervalDataSourceDelegate-Protocol.h>

@class NSString, SCLTimeIntervalDataSource;

@interface SCLCustomDayEditorSource <SCLTimeIntervalDataSourceDelegate>
{
    long long _day;	// 8 = 0x8
    SCLTimeIntervalDataSource *_timeSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e2a5
@property(retain, nonatomic) SCLTimeIntervalDataSource *timeSource; // @synthesize timeSource=_timeSource;
@property(readonly, nonatomic) long long day; // @synthesize day=_day;
- (void)timeIntervalDataSource:(id)arg1 didUpdateTimeIntervals:(id)arg2;	// IMP=0x000000000000e1fd
- (void)setEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000000e15e
- (id)enabledForSpecifier:(id)arg1;	// IMP=0x000000000000e0ee
- (id)initWithListController:(id)arg1 viewModel:(id)arg2 day:(long long)arg3 title:(id)arg4;	// IMP=0x000000000000dddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
