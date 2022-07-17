//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TLTimelineEntryNodeRecycleBin : NSObject
{
}

+ (id)sharedRecycleBin;	// IMP=0x00000000000039f1
@property(readonly, nonatomic) unsigned long long maximumNumberOfRecycledNodes;
@property(readonly, nonatomic) unsigned long long numberOfRecycledNodes;
- (void)emptyRecycleBin;	// IMP=0x0000000000003dde
- (id)retrieveRecycledEntryNode;	// IMP=0x0000000000003cdd
- (void)recycleEntryNode:(id)arg1;	// IMP=0x0000000000003a85
- (id)_init;	// IMP=0x0000000000003a56

@end
