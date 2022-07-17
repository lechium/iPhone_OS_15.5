//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRIPaths;

@interface TRINamespaceStatusProvider : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007d52
- (_Bool)saveNamespaceStatus:(id)arg1 toURL:(id)arg2;	// IMP=0x0000000000007a93
- (id)loadNamespaceStatusFromURL:(id)arg1;	// IMP=0x00000000000079c5
- (_Bool)deleteStatusForNamespaceWithName:(id)arg1;	// IMP=0x0000000000007850
- (_Bool)updateStatusForNamespaceWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007666
- (_Bool)saveStatus:(id)arg1;	// IMP=0x0000000000007537
- (id)statusForNamespaceWithName:(id)arg1;	// IMP=0x00000000000073b9
- (id)urlForStatusWithNamespaceName:(id)arg1;	// IMP=0x000000000000722a
- (id)initWithPaths:(id)arg1;	// IMP=0x00000000000071bf

@end
