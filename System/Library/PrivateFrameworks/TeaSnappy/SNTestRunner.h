//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TeaSnappy/SNTestRunner-Protocol.h>

@class NSString, SNTestStore, UIApplication;
@protocol SNTestCoordinating;

@interface SNTestRunner : NSObject <SNTestRunner>
{
    UIApplication *_application;	// 8 = 0x8
    id <SNTestCoordinating> _testCoordinator;	// 16 = 0x10
    SNTestStore *_testStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000050ed
@property(readonly, nonatomic) SNTestStore *testStore; // @synthesize testStore=_testStore;
@property(readonly, nonatomic) id <SNTestCoordinating> testCoordinator; // @synthesize testCoordinator=_testCoordinator;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
- (_Bool)runTestRun:(id)arg1 testName:(id)arg2 options:(id)arg3 fallingBackWith:(CDUnknownBlockType)arg4;	// IMP=0x000000000000495f
- (_Bool)runTest:(id)arg1 options:(id)arg2 fallingBackWith:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004874
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x000000000000485f
- (_Bool)runExtendedLaunchTest;	// IMP=0x000000000000474a
- (id)initWithApplication:(id)arg1 testCoordinator:(id)arg2 testStore:(id)arg3;	// IMP=0x0000000000004693

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

