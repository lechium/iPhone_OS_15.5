//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class C2SessionPool;

@interface C2RequestManager : NSObject
{
    C2SessionPool *_sessionPool;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0000000000026dce
+ (void)initialize;	// IMP=0x0000000000026d13
- (void).cxx_destruct;	// IMP=0x000000000002774a
@property(readonly, nonatomic) C2SessionPool *sessionPool; // @synthesize sessionPool=_sessionPool;
- (void)_testUtility_forTask:(id)arg1 sessionHandle:(id *)arg2 taskHandle:(id *)arg3;	// IMP=0x0000000000027234
- (id)testUtility_sessionTaskForTask:(id)arg1;	// IMP=0x00000000000271fa
- (id)testUtility_sessionForTask:(id)arg1;	// IMP=0x00000000000271bf
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id *)arg4;	// IMP=0x0000000000026f87
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000026f72
- (id)init;	// IMP=0x0000000000026ddf

@end
