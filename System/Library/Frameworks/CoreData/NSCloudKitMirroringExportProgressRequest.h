//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest
{
    NSSet *_objectIDsToFetch;	// 8 = 0x8
}

@property(copy, nonatomic) NSSet *objectIDsToFetch; // @synthesize objectIDsToFetch=_objectIDsToFetch;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f19c5
- (void)dealloc;	// IMP=0x00000000002f191b
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f18c4

@end
