//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject
{
    NSUUID *_UUID;	// 8 = 0x8
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013788
@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013699

@end

