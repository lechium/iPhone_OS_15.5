//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UAPingController;

@interface UAPingClient
{
    NSMutableArray *_items;	// 8 = 0x8
    _Bool _hasBeenUsedAtLeastOnce;	// 16 = 0x10
    UAPingController *_controller;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003daee
@property _Bool hasBeenUsedAtLeastOnce; // @synthesize hasBeenUsedAtLeastOnce=_hasBeenUsedAtLeastOnce;
@property(readonly, retain) UAPingController *controller; // @synthesize controller=_controller;
- (id)statusString;	// IMP=0x001000000003d9d4
- (long long)priority;	// IMP=0x001000000003d9c9
- (_Bool)active;	// IMP=0x001000000003d966
- (void)removeItem:(id)arg1;	// IMP=0x001000000003d8a5
- (void)pushItem:(id)arg1;	// IMP=0x001000000003d7bf
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x001000000003d75c
- (id)items;	// IMP=0x001000000003d6ea
- (id)initWithController:(id)arg1;	// IMP=0x001000000003d619

@end

