//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IXCoordinatorWithAppAssetPromise;

@interface CoordinatorPromiseProvider : NSObject
{
    id <IXCoordinatorWithAppAssetPromise> _coordinator;	// 8 = 0x8
}

+ (id)_newPromiseUsingDefinition:(id)arg1;	// IMP=0x0040000000101a8e
- (void).cxx_destruct;	// IMP=0x0020000000101d3e
- (id)_setPromiseUsingSpecification:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000101b7d
- (id)truncatePromiseID:(id)arg1 usingSpecification:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000101a76
- (id)resetPromiseID:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000101a64
- (id)fetchPromiseID:(id)arg1 orCreateUsingSpecification:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000101963
- (id)fetchPromiseID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000010175d
- (_Bool)failPromiseID:(id)arg1 forReason:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000010150e
- (id)initWithCoordinator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001013b9

@end

