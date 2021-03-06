//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFGroupedItemDiff;

@interface HFItemManagerDelegateUpdateRequest : NSObject
{
    _Bool _initialUpdate;	// 8 = 0x8
    _Bool _debug_wasPerformed;	// 9 = 0x9
    HFGroupedItemDiff *_changes;	// 16 = 0x10
    CDUnknownBlockType _applyChangesBlock;	// 24 = 0x18
    CDUnknownBlockType _issueDelegateMessagesBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015228f
@property(readonly, nonatomic) _Bool debug_wasPerformed; // @synthesize debug_wasPerformed=_debug_wasPerformed;
@property(readonly, copy, nonatomic) CDUnknownBlockType issueDelegateMessagesBlock; // @synthesize issueDelegateMessagesBlock=_issueDelegateMessagesBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType applyChangesBlock; // @synthesize applyChangesBlock=_applyChangesBlock;
@property(readonly, nonatomic, getter=isInitialUpdate) _Bool initialUpdate; // @synthesize initialUpdate=_initialUpdate;
@property(readonly, nonatomic) HFGroupedItemDiff *changes; // @synthesize changes=_changes;
- (id)description;	// IMP=0x0000000000152187
- (void)performWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000152110
- (id)initWithChanges:(id)arg1 isInitialUpdate:(_Bool)arg2 applyChangesBlock:(CDUnknownBlockType)arg3 issueDelegateMessagesBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000152036
- (id)init;	// IMP=0x0000000000151f81

@end

