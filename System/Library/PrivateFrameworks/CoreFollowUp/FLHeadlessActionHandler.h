//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject
{
    FLFollowUpItem *_item;	// 8 = 0x8
}

+ (id)handlerWithItem:(id)arg1;	// IMP=0x0000000000007f14
- (void).cxx_destruct;	// IMP=0x0000000000008794
@property(retain, nonatomic) FLFollowUpItem *item; // @synthesize item=_item;
- (void)dealloc;	// IMP=0x00000000000086f5
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000081fe
- (void)handleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f5d
- (id)initWithItem:(id)arg1;	// IMP=0x0000000000007eba

@end

