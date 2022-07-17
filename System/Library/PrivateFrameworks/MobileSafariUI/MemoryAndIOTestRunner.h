//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrowserController, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MemoryAndIOTestRunner : NSObject
{
    BrowserController *_browserController;	// 8 = 0x8
    NSString *_testName;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    unsigned long long _tabsLoadedCount;	// 32 = 0x20
    unsigned long long _liveTabs;	// 40 = 0x28
    unsigned long long _type;	// 48 = 0x30
    int writesAtStart;	// 56 = 0x38
    unsigned long long _totalTabsToLoad;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000acfc9
- (void)_collectTestResults;	// IMP=0x00000000000ace1a
- (unsigned long long)_collectCurrentLiveTabs;	// IMP=0x00000000000acc22
- (void)_collectIOUsageInfo:(id)arg1;	// IMP=0x00000000000acb74
- (void)_collectMemoryUsageInfo:(id)arg1;	// IMP=0x00000000000ac981
@property(readonly, nonatomic) NSURL *testPageURL;
- (void)_openNewTabAndLoadTestURL;	// IMP=0x00000000000ac682
- (void)runTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ac64d
- (id)initWithTestName:(id)arg1 browserController:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x00000000000ac35a

@end
