//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCMContainerManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x0000000000001b4c
- (_Bool)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id *)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000001752
- (_Bool)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000173d
- (id)deleteContainers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001474
- (id)temporaryContainersWithClass:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000000145a
- (id)containersWithClass:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000001443
- (id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000000000013de
- (id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(_Bool)arg3 existed:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000001369
- (id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001309
- (id)init;	// IMP=0x0000000000001269
- (id)_containersWithClass:(long long)arg1 temporary:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000001ba1

@end

