//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NTKFaceSnapshotClient;

@interface _NTKFaceSnapshotClientProxy : NSObject
{
    id <NTKFaceSnapshotClient> _proxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b0d42
- (void)faceSnapshotChangedForKey:(id)arg1;	// IMP=0x00000000002b0ce8
- (id)initWithWeakProxy:(id)arg1;	// IMP=0x00000000002b0c84

@end
